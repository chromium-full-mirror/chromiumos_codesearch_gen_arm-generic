// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/**
 * @fileoverview Defines a custom Polymer component for a lesson in the
 * ChromeVox interactive tutorial.
 */

import 'chrome://resources/cr_elements/cr_button/cr_button.m.js';
import 'chrome://resources/cr_elements/cr_dialog/cr_dialog.m.js';
import 'chrome://resources/cr_elements/md_select_css.m.js';
import 'chrome://resources/cr_elements/shared_style_css.m.js';
import 'chrome://resources/cr_elements/shared_vars_css.m.js';

import {html, Polymer} from 'chrome://resources/polymer/v3_0/polymer/polymer_bundled.min.js';

import {InteractionMedium} from './constants.js';
import {Localization} from './localization.js';

export const TutorialLesson = Polymer({
  is: 'tutorial-lesson',

  _template: html`<!--_html_template_start_-->
<!-- Copyright 2020 The Chromium Authors. All rights reserved.
     Use of this source code is governed by a BSD-style license that can be
     found in the LICENSE file. -->
<style include="md-select cr-shared-style">
:host {
  --cr-dialog-width: 704px;
}

/** Font styling */
p,
cr-button,
a {
  font-family: 'Roboto';
}

#title {
  font-family: 'Google Sans', 'Roboto';
}

#title,
#practiceTitle {
  font-size: 32px;
  font-weight: medium;
  line-height: 40px;
  margin-bottom: 16px;
}

#content {
  display: block;
  margin: auto;
  max-height: 400px;
  overflow: scroll;
  text-align: start
}

#content a,
#content p,
#practiceInstructions,
#practiceBody {
  font-size: 22px;
  font-weight: normal;
  line-height: 28px;
  margin-bottom: 16px;
  margin-top: 0;
  text-align: start
}

#content p,
#practiceInstructions,
#practiceBody {
  color: black;
}

/* Practice area */

#practiceTitle {
  font-family: 'Google Sans', 'Roboto';
}

#practiceInstructions {
  color: black;
}

#practiceBody {
  display: flex;
  flex-direction: column;
  max-height: 400px;
  overflow: auto;
}

#practiceContent * {
  display: block;
  margin-bottom: 8px;
  margin-top: 8px;
  text-align: start;
}

#practiceContent a {
  color: rgb(26, 115, 232);
}

#startPractice {
  margin-bottom: 32px;
  margin-inline-start: 0;
  margin-top: 16px;
}

#closePractice,
#startPractice {
  font-size: 16px;
  font-style: normal;
  font-weight: medium;
  line-height: 24px;
}

</style>

<div id="container" hidden>
  <template is="dom-if" if="[[ title ]]">
    <h1 id="title" tabindex="-1" aria-describedby="titleHint">
      [[ getMsg(title) ]]
    </h1>
    <div id="titleHint" hidden>
      [[ computeTitleDescription_() ]]
    </div>
  </template>
  <div id="content">
    <template id="contentTemplate" is="dom-repeat" items="[[ content ]]"
        as="text">
      <p tabindex="-1">[[ getMsg(text) ]]</p>
    </template>
  </div>
  <cr-dialog id="practice">
    <div id="practiceTitle" class="title" slot="title" tabindex="-1">
      [[ getMsg(practiceTitle) ]]
    </div>
    <div id="practiceBody" class="body" slot="body" tabindex="-1">
      <p id="practiceInstructions" tabindex="-1">
        [[ getMsg(practiceInstructions) ]]
      </p>
      <div id="practiceContent"></div>
    </div>
    <div class="button-container" slot="button-container">
      <cr-button id="closePractice" on-click="endPractice">
        [[ getMsg('tutorial_practice_area_close_button') ]]
      </cr-button>
    </div>
  </cr-dialog>
  <cr-button id="startPractice" on-click="startPractice"
      hidden$="[[ shouldHidePracticeButton() ]]">
    [[ getMsg('tutorial_practice_area_open_button') ]]
  </cr-button>
</div>
<!--_html_template_end_-->`,

  behaviors: [Localization],

  properties: {
    lessonId: {type: Number},

    title: {type: String},

    content: {type: Array},

    medium: {type: String},

    curriculums: {type: Array},

    practiceTitle: {type: String},

    practiceInstructions: {type: String},

    practiceFile: {type: String},

    practiceState: {type: Object},

    events: {type: Array},

    goalStateReached: {type: Boolean, value: false},

    actions: {type: Array},

    autoInteractive: {type: Boolean, value: false},

    // Observed properties.
    /** @type {number} */
    activeLessonId: {type: Number, observer: 'setVisibility'},
  },

  /** @override */
  ready() {
    this.$.contentTemplate.addEventListener('dom-change', evt => {
      this.dispatchEvent(new CustomEvent('lessonready', {composed: true}));
    });


    if (this.practiceFile) {
      this.populatePracticeContent();
      for (const evt of this.events) {
        this.$.practiceContent.addEventListener(
            evt, event => this.onPracticeEvent(event), true);
      }
      this.$.practiceContent.addEventListener('focus', evt => {
        // The practice area has the potential to overflow, so ensure elements
        // are scrolled into view when focused.
        evt.target.scrollIntoView();
      }, true);
      this.$.practiceContent.addEventListener('click', evt => {
        // Intercept click events. For example, clicking a link will exit the
        // tutorial without this listener.
        evt.preventDefault();
        evt.stopPropagation();
      }, true);
    }
  },

  /**
   * Updates this lessons visibility whenever the active lesson of the tutorial
   * changes.
   * @private
   */
  setVisibility() {
    if (this.lessonId === this.activeLessonId) {
      this.show();
    } else {
      this.hide();
    }
  },

  /** @private */
  show() {
    this.$.container.hidden = false;
    let focus;
    if (this.autoInteractive) {
      // Auto interactive lessons immediately initialize the UserActionMonitor,
      // which will block ChromeVox execution until a desired key sequence is
      // pressed. To ensure users hear instructions for these lessons, place
      // focus on the first piece of text content.
      // Shorthand for Polymer.dom(this.root).querySelector(...).
      focus = this.$$('p');
    } else {
      // Otherwise, we can place focus on the lesson title.
      focus = this.$$('h1');
    }
    if (!focus) {
      throw new Error('A lesson must have an element to focus.');
    }
    focus.focus();
    if (!focus.isEqualNode(this.shadowRoot.activeElement)) {
      // Call show() again if we weren't able to focus the target element.
      setTimeout(() => this.show(), 500);
    }
  },

  /** @private */
  hide() {
    this.$.container.hidden = true;
  },


  // Methods for managing the practice area.


  /**
   * Asynchronously populates practice area.
   * @private
   */
  populatePracticeContent() {
    const path = '../tutorial/practice_areas/' + this.practiceFile + '.html';
    const xhr = new XMLHttpRequest();
    xhr.open('GET', path, true);
    xhr.onload = evt => {
      if (xhr.readyState === 4 && xhr.status === 200) {
        this.$.practiceContent.innerHTML = xhr.responseText;
        this.localizePracticeAreaContent();
      } else {
        console.error(xhr.statusText);
      }
    };
    xhr.onerror = function(evt) {
      console.error('Failed to open practice file: ' + path);
      console.error(xhr.statusText);
    };
    xhr.send(null);
  },

  /** @private */
  startPractice() {
    this.notifyStartPractice();
    this.$.practice.showModal();
    this.$.practiceInstructions.focus();
  },

  /** @private */
  endPractice() {
    this.$.practice.close();
    this.notifyEndPractice();
    this.$.startPractice.focus();
  },

  /** @private */
  notifyStartPractice() {
    this.dispatchEvent(new CustomEvent('startpractice', {composed: true}));
  },

  /** @private */
  notifyEndPractice() {
    this.dispatchEvent(new CustomEvent('endpractice', {composed: true}));
  },


  // Methods for tracking the state of the practice area.


  /**
   * @param {Event} event
   * @private
   */
  onPracticeEvent(event) {
    const elt = event.target.id;
    const type = event.type;
    // Maybe update goal state.
    if (elt in this.practiceState) {
      if (type in this.practiceState[elt]) {
        this.practiceState[elt][type] = true;
      }
    }

    if (this.isGoalStateReached()) {
      this.onGoalStateReached();
    }
  },

  /**
   * @return {boolean}
   * @private
   */
  isGoalStateReached() {
    if (!this.practiceState) {
      return false;
    }

    if (this.goalStateReached === true) {
      return true;
    }

    for (const [elt, state] of Object.entries(this.practiceState)) {
      for (const [evt, performed] of Object.entries(state)) {
        if (performed === false) {
          return false;
        }
      }
    }
    return true;
  },

  /** @private */
  onGoalStateReached() {
    const previousState = this.goalStateReached;
    this.goalStateReached = true;
  },

  // Miscellaneous methods.

  /**
   * @param {string} medium
   * @param {string} curriculum
   * @return {boolean}
   */
  shouldInclude(medium, curriculum) {
    if (this.medium === medium && this.curriculums.includes(curriculum)) {
      return true;
    }

    return false;
  },

  /**
   * @param {string} text
   * @private
   */
  requestSpeech(text) {
    // TODO (akihiroota): Migrate this to i_tutorial.js so that the tutorial
    // engine controls all speech requests.
    this.dispatchEvent(
        new CustomEvent('requestspeech', {composed: true, detail: {text}}));
  },

  /**
   * @return {boolean}
   * @private
   */
  shouldHidePracticeButton() {
    if (!this.practiceFile) {
      return true;
    }

    return false;
  },

  /** @return {Element} */
  get contentDiv() {
    return this.$.content;
  },

  /** @return {string} */
  getTitleText() {
    return this.$.title.textContent;
  },

  /** @private */
  localizePracticeAreaContent() {
    const root = this.$.practiceContent;
    const elements = root.querySelectorAll('[msgid]');
    for (const element of elements) {
      const msgId = element.getAttribute('msgid');
      element.textContent = this.getMsg(msgId);
    }
  },

  /**
   * @private
   * @return {string}
   */
  computeTitleDescription_() {
    if (this.medium === InteractionMedium.KEYBOARD) {
      return this.getMsg('tutorial_lesson_title_description');
    }

    // Automatically return the description for touch, since the only supported
    // interaction mediums are touch and keyboard.
    return this.getMsg('tutorial_touch_lesson_title_description');
  },
});
