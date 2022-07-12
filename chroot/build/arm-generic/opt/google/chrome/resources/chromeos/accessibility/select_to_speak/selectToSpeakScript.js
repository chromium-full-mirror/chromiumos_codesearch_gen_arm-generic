var COMPILED=true;var goog=goog||{};goog.global=this;goog.global.CLOSURE_UNCOMPILED_DEFINES;goog.global.CLOSURE_DEFINES;goog.isDef=function(val){return val!==void 0;};goog.exportPath_=function(name,opt_object,opt_objectToExportTo){var parts=name.split('.');var cur=opt_objectToExportTo||goog.global;if(!(parts[0]in cur)&&cur.execScript){cur.execScript('var '+parts[0]);}
for(var part;parts.length&&(part=parts.shift());){if(!parts.length&&goog.isDef(opt_object)){cur[part]=opt_object;}else if(cur[part]){cur=cur[part];}else{cur=cur[part]={};}}};goog.define=function(name,defaultValue){var value=defaultValue;if(!COMPILED){var uncompiledDefines=goog.global.CLOSURE_UNCOMPILED_DEFINES;var defines=goog.global.CLOSURE_DEFINES;if(uncompiledDefines&&(uncompiledDefines).nodeType===undefined&&Object.prototype.hasOwnProperty.call(uncompiledDefines,name)){value=uncompiledDefines[name];}else if(defines&&(defines).nodeType===undefined&&Object.prototype.hasOwnProperty.call(defines,name)){value=defines[name];}}
return value;};goog.DEBUG=true;goog.LOCALE=goog.define('goog.LOCALE','en');goog.TRUSTED_SITE=goog.define('goog.TRUSTED_SITE',true);goog.STRICT_MODE_COMPATIBLE=goog.define('goog.STRICT_MODE_COMPATIBLE',false);goog.provide=function(name){if(!COMPILED){if(goog.isProvided_(name)){throw Error('Namespace "'+name+'" already declared.');}
delete goog.implicitNamespaces_[name];var namespace=name;while((namespace=namespace.substring(0,namespace.lastIndexOf('.')))){if(goog.getObjectByName(namespace)){break;}
goog.implicitNamespaces_[namespace]=true;}}
goog.exportPath_(name);};goog.setTestOnly=function(opt_message){if(COMPILED&&!goog.DEBUG){opt_message=opt_message||'';throw Error('Importing test-only code into non-debug environment'+
opt_message?': '+opt_message:'.');}};goog.forwardDeclare=function(name){};if(!COMPILED){goog.isProvided_=function(name){return!goog.implicitNamespaces_[name]&&goog.isDefAndNotNull(goog.getObjectByName(name));};goog.implicitNamespaces_={};}
goog.getObjectByName=function(name,opt_obj){var parts=name.split('.');var cur=opt_obj||goog.global;for(var part;part=parts.shift();){if(goog.isDefAndNotNull(cur[part])){cur=cur[part];}else{return null;}}
return cur;};goog.globalize=function(obj,opt_global){var global=opt_global||goog.global;for(var x in obj){global[x]=obj[x];}};goog.addDependency=function(relPath,provides,requires){if(goog.DEPENDENCIES_ENABLED){var provide,require;var path=relPath.replace(/\\/g,'/');var deps=goog.dependencies_;for(var i=0;provide=provides[i];i++){deps.nameToPath[provide]=path;if(!(path in deps.pathToNames)){deps.pathToNames[path]={};}
deps.pathToNames[path][provide]=true;}
for(var j=0;require=requires[j];j++){if(!(path in deps.requires)){deps.requires[path]={};}
deps.requires[path][require]=true;}}};goog.ENABLE_DEBUG_LOADER=goog.define('goog.ENABLE_DEBUG_LOADER',true);goog.require=function(name){if(!COMPILED){if(goog.isProvided_(name)){return;}
if(goog.ENABLE_DEBUG_LOADER){var path=goog.getPathFromDeps_(name);if(path){goog.included_[path]=true;goog.writeScripts_();return;}}
var errorMessage='goog.require could not find: '+name;if(goog.global.console){goog.global.console['error'](errorMessage);}
throw Error(errorMessage);}};goog.basePath='';goog.global.CLOSURE_BASE_PATH;goog.global.CLOSURE_NO_DEPS=true;goog.global.CLOSURE_IMPORT_SCRIPT;goog.nullFunction=function(){};goog.identityFunction=function(opt_returnValue,var_args){return opt_returnValue;};goog.abstractMethod=function(){throw Error('unimplemented abstract method');};goog.addSingletonGetter=function(ctor){ctor.getInstance=function(){if(ctor.instance_){return ctor.instance_;}
if(goog.DEBUG){goog.instantiatedSingletons_[goog.instantiatedSingletons_.length]=ctor;}
return ctor.instance_=new ctor;};};goog.instantiatedSingletons_=[];goog.DEPENDENCIES_ENABLED=!COMPILED&&goog.ENABLE_DEBUG_LOADER;if(goog.DEPENDENCIES_ENABLED){goog.included_={};goog.dependencies_={pathToNames:{},nameToPath:{},requires:{},visited:{},written:{}};goog.inHtmlDocument_=function(){var doc=goog.global.document;return typeof doc!='undefined'&&'write'in doc;};goog.findBasePath_=function(){if(goog.global.CLOSURE_BASE_PATH){goog.basePath=goog.global.CLOSURE_BASE_PATH;return;}else if(!goog.inHtmlDocument_()){return;}
var doc=goog.global.document;var scripts=doc.getElementsByTagName('script');for(var i=scripts.length-1;i>=0;--i){var src=scripts[i].src;var qmark=src.lastIndexOf('?');var l=qmark==-1?src.length:qmark;if(src.substr(l-7,7)=='base.js'){goog.basePath=src.substr(0,l-7);return;}}};goog.importScript_=function(src){var importScript=goog.global.CLOSURE_IMPORT_SCRIPT||goog.writeScriptTag_;if(!goog.dependencies_.written[src]&&importScript(src)){goog.dependencies_.written[src]=true;}};goog.writeScriptTag_=function(src){if(goog.inHtmlDocument_()){var doc=goog.global.document;if(doc.readyState=='complete'){var isDeps=/\bdeps.js$/.test(src);if(isDeps){return false;}else{throw Error('Cannot write "'+src+'" after document load');}}
doc.write('<script type="text/javascript" src="'+src+'"></'+'script>');return true;}else{return false;}};goog.writeScripts_=function(){var scripts=[];var seenScript={};var deps=goog.dependencies_;function visitNode(path){if(path in deps.written){return;}
if(path in deps.visited){if(!(path in seenScript)){seenScript[path]=true;scripts.push(path);}
return;}
deps.visited[path]=true;if(path in deps.requires){for(var requireName in deps.requires[path]){if(!goog.isProvided_(requireName)){if(requireName in deps.nameToPath){visitNode(deps.nameToPath[requireName]);}else{throw Error('Undefined nameToPath for '+requireName);}}}}
if(!(path in seenScript)){seenScript[path]=true;scripts.push(path);}}
for(var path in goog.included_){if(!deps.written[path]){visitNode(path);}}
for(var i=0;i<scripts.length;i++){if(scripts[i]){goog.importScript_(goog.basePath+scripts[i]);}else{throw Error('Undefined script input');}}};goog.getPathFromDeps_=function(rule){if(rule in goog.dependencies_.nameToPath){return goog.dependencies_.nameToPath[rule];}else{return null;}};goog.findBasePath_();if(!goog.global.CLOSURE_NO_DEPS){goog.importScript_(goog.basePath+'deps.js');}}
goog.typeOf=function(value){var s=typeof value;if(s=='object'){if(value){if(value instanceof Array){return'array';}else if(value instanceof Object){return s;}
var className=Object.prototype.toString.call((value));if(className=='[object Window]'){return'object';}
if((className=='[object Array]'||typeof value.length=='number'&&typeof value.splice!='undefined'&&typeof value.propertyIsEnumerable!='undefined'&&!value.propertyIsEnumerable('splice'))){return'array';}
if((className=='[object Function]'||typeof value.call!='undefined'&&typeof value.propertyIsEnumerable!='undefined'&&!value.propertyIsEnumerable('call'))){return'function';}}else{return'null';}}else if(s=='function'&&typeof value.call=='undefined'){return'object';}
return s;};goog.isNull=function(val){return val===null;};goog.isDefAndNotNull=function(val){return val!=null;};goog.isArray=function(val){return goog.typeOf(val)=='array';};goog.isArrayLike=function(val){var type=goog.typeOf(val);return type=='array'||type=='object'&&typeof val.length=='number';};goog.isDateLike=function(val){return goog.isObject(val)&&typeof val.getFullYear=='function';};goog.isString=function(val){return typeof val=='string';};goog.isBoolean=function(val){return typeof val=='boolean';};goog.isNumber=function(val){return typeof val=='number';};goog.isFunction=function(val){return goog.typeOf(val)=='function';};goog.isObject=function(val){var type=typeof val;return type=='object'&&val!=null||type=='function';};goog.getUid=function(obj){return obj[goog.UID_PROPERTY_]||(obj[goog.UID_PROPERTY_]=++goog.uidCounter_);};goog.hasUid=function(obj){return!!obj[goog.UID_PROPERTY_];};goog.removeUid=function(obj){if('removeAttribute'in obj){obj.removeAttribute(goog.UID_PROPERTY_);}
try{delete obj[goog.UID_PROPERTY_];}catch(ex){}};goog.UID_PROPERTY_='closure_uid_'+((Math.random()*1e9)>>>0);goog.uidCounter_=0;goog.getHashCode=goog.getUid;goog.removeHashCode=goog.removeUid;goog.cloneObject=function(obj){var type=goog.typeOf(obj);if(type=='object'||type=='array'){if(obj.clone){return obj.clone();}
var clone=type=='array'?[]:{};for(var key in obj){clone[key]=goog.cloneObject(obj[key]);}
return clone;}
return obj;};goog.bindNative_=function(fn,selfObj,var_args){return(fn.call.apply(fn.bind,arguments));};goog.bindJs_=function(fn,selfObj,var_args){if(!fn){throw new Error();}
if(arguments.length>2){var boundArgs=Array.prototype.slice.call(arguments,2);return function(){var newArgs=Array.prototype.slice.call(arguments);Array.prototype.unshift.apply(newArgs,boundArgs);return fn.apply(selfObj,newArgs);};}else{return function(){return fn.apply(selfObj,arguments);};}};goog.bind=function(fn,selfObj,var_args){if(Function.prototype.bind&&Function.prototype.bind.toString().indexOf('native code')!=-1){goog.bind=goog.bindNative_;}else{goog.bind=goog.bindJs_;}
return goog.bind.apply(null,arguments);};goog.partial=function(fn,var_args){var args=Array.prototype.slice.call(arguments,1);return function(){var newArgs=args.slice();newArgs.push.apply(newArgs,arguments);return fn.apply(this,newArgs);};};goog.mixin=function(target,source){for(var x in source){target[x]=source[x];}};goog.now=(goog.TRUSTED_SITE&&Date.now)||(function(){return+new Date();});goog.globalEval=function(script){if(goog.global.execScript){goog.global.execScript(script,'JavaScript');}else if(goog.global.eval){if(goog.evalWorksForGlobals_==null){goog.global.eval('var _et_ = 1;');if(typeof goog.global['_et_']!='undefined'){delete goog.global['_et_'];goog.evalWorksForGlobals_=true;}else{goog.evalWorksForGlobals_=false;}}
if(goog.evalWorksForGlobals_){goog.global.eval(script);}else{var doc=goog.global.document;var scriptElt=doc.createElement('script');scriptElt.type='text/javascript';scriptElt.defer=false;scriptElt.appendChild(doc.createTextNode(script));doc.body.appendChild(scriptElt);doc.body.removeChild(scriptElt);}}else{throw Error('goog.globalEval not available');}};goog.evalWorksForGlobals_=null;goog.cssNameMapping_;goog.cssNameMappingStyle_;goog.getCssName=function(className,opt_modifier){var getMapping=function(cssName){return goog.cssNameMapping_[cssName]||cssName;};var renameByParts=function(cssName){var parts=cssName.split('-');var mapped=[];for(var i=0;i<parts.length;i++){mapped.push(getMapping(parts[i]));}
return mapped.join('-');};var rename;if(goog.cssNameMapping_){rename=goog.cssNameMappingStyle_=='BY_WHOLE'?getMapping:renameByParts;}else{rename=function(a){return a;};}
if(opt_modifier){return className+'-'+rename(opt_modifier);}else{return rename(className);}};goog.setCssNameMapping=function(mapping,opt_style){goog.cssNameMapping_=mapping;goog.cssNameMappingStyle_=opt_style;};goog.global.CLOSURE_CSS_NAME_MAPPING;if(!COMPILED&&goog.global.CLOSURE_CSS_NAME_MAPPING){goog.cssNameMapping_=goog.global.CLOSURE_CSS_NAME_MAPPING;}
goog.getMsg=function(str,opt_values){var values=opt_values||{};for(var key in values){var value=(''+values[key]).replace(/\$/g,'$$$$');str=str.replace(new RegExp('\\{\\$'+key+'\\}','gi'),value);}
return str;};goog.getMsgWithFallback=function(a,b){return a;};goog.exportSymbol=function(publicPath,object,opt_objectToExportTo){goog.exportPath_(publicPath,object,opt_objectToExportTo);};goog.exportProperty=function(object,publicName,symbol){object[publicName]=symbol;};goog.inherits=function(childCtor,parentCtor){function tempCtor(){};tempCtor.prototype=parentCtor.prototype;childCtor.superClass_=parentCtor.prototype;childCtor.prototype=new tempCtor();childCtor.prototype.constructor=childCtor;childCtor.base=function(me,methodName,var_args){var args=Array.prototype.slice.call(arguments,2);return parentCtor.prototype[methodName].apply(me,args);};};goog.base=function(me,opt_methodName,var_args){var caller=arguments.callee.caller;if(goog.STRICT_MODE_COMPATIBLE||(goog.DEBUG&&!caller)){throw Error('arguments.caller not defined.  goog.base() cannot be used '+'with strict mode code. See '+'http://www.ecma-international.org/ecma-262/5.1/#sec-C');}
if(caller.superClass_){return caller.superClass_.constructor.apply(me,Array.prototype.slice.call(arguments,1));}
var args=Array.prototype.slice.call(arguments,2);var foundCaller=false;for(var ctor=me.constructor;ctor;ctor=ctor.superClass_&&ctor.superClass_.constructor){if(ctor.prototype[opt_methodName]===caller){foundCaller=true;}else if(foundCaller){return ctor.prototype[opt_methodName].apply(me,args);}}
if(me[opt_methodName]===caller){return me.constructor.prototype[opt_methodName].apply(me,args);}else{throw Error('goog.base called from a method of one name '+'to a method of a different name');}};goog.scope=function(fn){fn.call(goog.global);};if(!COMPILED){goog.global['COMPILED']=COMPILED;}
goog.provide('constants');constants.Dir={FORWARD:'forward',BACKWARD:'backward'};constants.Point;constants.OBJECT_MAX_CHARCOUNT=1500;constants.SYSTEM_VOICE='chromeos_system_voice';constants.FOCUS_COLOR='#F7983A';constants.InteractionMedium={NONE:'none',KEYBOARD:'keyboard',TOUCH:'touch',BRAILLE:'braille',};goog.provide('AutomationPredicate');goog.provide('AutomationPredicate.Binary');goog.provide('AutomationPredicate.Unary');goog.require('constants');goog.scope(function(){const AutomationNode=chrome.automation.AutomationNode;const InvalidState=chrome.automation.InvalidState;const MarkerType=chrome.automation.MarkerType;const Dir=constants.Dir;const Restriction=chrome.automation.Restriction;const Role=chrome.automation.RoleType;const State=chrome.automation.StateType;const isActionableOrHasActionableDescendant=function(node,sawClickAncestorAction=false){if(node.role!==Role.STATIC_TEXT&&node.defaultActionVerb&&(node.defaultActionVerb!==chrome.automation.DefaultActionVerb.CLICK_ANCESTOR||sawClickAncestorAction)){return true;}
if(node.clickable){return true;}
sawClickAncestorAction=sawClickAncestorAction||!node.defaultActionVerb||node.defaultActionVerb===chrome.automation.DefaultActionVerb.CLICK_ANCESTOR;for(let i=0;i<node.children.length;i++){if(isActionableOrHasActionableDescendant(node.children[i],sawClickAncestorAction)){return true;}}
return false;};const hasActionableDescendant=function(node){const sawClickAncestorAction=!node.defaultActionVerb||node.defaultActionVerb===chrome.automation.DefaultActionVerb.CLICK_ANCESTOR;for(let i=0;i<node.children.length;i++){if(isActionableOrHasActionableDescendant(node.children[i],sawClickAncestorAction)){return true;}}
return false;};const nodeNameContainedInStaticTextChildren=function(node){const name=node.name;let child=node.firstChild;if(name===undefined||!child){return false;}
let nameIndex=0;do{if(child.role!==Role.STATIC_TEXT){return false;}
if(name.substring(nameIndex,nameIndex+child.name.length)!==child.name){return false;}
nameIndex+=child.name.length;const char=name.substring(nameIndex,nameIndex+1);child=child.nextSibling;if((child&&char!==' ')||char!==''){return false;}
nameIndex++;}while(child);return true;};AutomationPredicate=class{constructor(){}
static roles(roles){return AutomationPredicate.match({anyRole:roles});}
static match(params){const anyRole=params.anyRole||[];const anyPredicate=params.anyPredicate||[];const anyAttribute=params.anyAttribute||{};return function(node){return anyRole.some(function(role){return role===node.role;})||anyPredicate.some(function(p){return p(node);})||Object.keys(anyAttribute).some(function(key){return node[key]===anyAttribute[key];});};}
static button(node){return node.isButton;}
static comboBox(node){return node.isComboBox;}
static checkBox(node){return node.isCheckBox;}
static editText(node){return node.role===Role.TEXT_FIELD||(node.state[State.EDITABLE]&&Boolean(node.parent)&&!node.parent.state[State.EDITABLE]);}
static image(node){return node.isImage&&Boolean(node.name||node.url);}
static visitedLink(node){return node.state[State.VISITED];}
static focused(node){return node.state[State.FOCUSED];}
static touchLeaf(node){return Boolean(!node.firstChild&&node.name)||node.role===Role.BUTTON||node.role===Role.CHECK_BOX||node.role===Role.POP_UP_BUTTON||node.role===Role.PORTAL||node.role===Role.RADIO_BUTTON||node.role===Role.SLIDER||node.role===Role.SWITCH||node.role===Role.TEXT_FIELD||node.role===Role.TEXT_FIELD_WITH_COMBO_BOX||(node.role===Role.MENU_ITEM&&!hasActionableDescendant(node))||AutomationPredicate.image(node)||AutomationPredicate.simpleListItem(node);}
static isInvalid(node){return node.invalidState===InvalidState.TRUE||AutomationPredicate.hasInvalidGrammarMarker(node)||AutomationPredicate.hasInvalidSpellingMarker(node);}
static hasInvalidGrammarMarker(node){const markers=node.markers;if(!markers){return false;}
return markers.some(function(marker){return marker.flags[MarkerType.GRAMMAR];});}
static hasInvalidSpellingMarker(node){const markers=node.markers;if(!markers){return false;}
return markers.some(function(marker){return marker.flags[MarkerType.SPELLING];});}
static leaf(node){return Boolean(AutomationPredicate.touchLeaf(node)||node.role===Role.LIST_BOX||(node.labelFor&&node.labelFor.length>0&&!isActionableOrHasActionableDescendant(node))||(node.descriptionFor&&node.descriptionFor.length>0&&!isActionableOrHasActionableDescendant(node))||(node.activeDescendantFor&&node.activeDescendantFor.length>0)||node.state[State.INVISIBLE]||node.children.every(function(n){return n.state[State.INVISIBLE];})||AutomationPredicate.math(node));}
static leafWithText(node){return AutomationPredicate.leaf(node)&&Boolean(node.name||node.value);}
static leafWithWordStop(node){function hasWordStop(node){if(node.role===Role.INLINE_TEXT_BOX){return node.wordStarts&&node.wordStarts.length;}
return true;}
return AutomationPredicate.leaf(node)&&!node.state[State.INVISIBLE]&&node.role!==Role.STATIC_TEXT&&hasWordStop(node);}
static leafOrStaticText(node){return AutomationPredicate.leaf(node)||node.role===Role.STATIC_TEXT;}
static object(node){if(node.parent&&node.parent.state[State.EDITABLE]&&!node.parent.state[State.RICHLY_EDITABLE]){return false;}
if(node.clickable){return true;}
if(node.state[State.FOCUSABLE]&&(node.name||node.state[State.EDITABLE]||AutomationPredicate.formField(node))){return true;}
if(node.name&&node.nameFrom==='contents'){let onlyStaticText=true;let textLength=0;for(let i=0,child;child=node.children[i];i++){if(child.role!==Role.STATIC_TEXT){onlyStaticText=false;break;}
textLength+=child.name?child.name.length:0;}
if(onlyStaticText&&textLength>0&&textLength<constants.OBJECT_MAX_CHARCOUNT){return true;}}
return AutomationPredicate.leafOrStaticText(node)&&(/\S+/.test(node.name)||(node.role!==Role.LINE_BREAK&&node.role!==Role.STATIC_TEXT&&node.role!==Role.INLINE_TEXT_BOX));}
static touchObject(node){if(AutomationPredicate.container(node)){return false;}
return AutomationPredicate.object(node);}
static gestureObject(node){if(node.role===Role.LIST_BOX){return false;}
return AutomationPredicate.object(node);}
static linebreak(first,second){if(first.nextOnLine===second){return false;}
const fl=first.unclippedLocation;const sl=second.unclippedLocation;return fl.top!==sl.top||(fl.top+fl.height!==sl.top+sl.height);}
static container(node){if(AutomationPredicate.math(node)){return false;}
if(node.state[State.FOCUSABLE]&&nodeNameContainedInStaticTextChildren(node)){return false;}
if((node.role===Role.BUTTON||node.role===Role.CHECK_BOX||node.role===Role.RADIO_BUTTON||node.role===Role.SWITCH)&&hasActionableDescendant(node)){return true;}
if(AutomationPredicate.simpleListItem(node)){return false;}
return AutomationPredicate.match({anyRole:[Role.GENERIC_CONTAINER,Role.DOCUMENT,Role.GROUP,Role.LIST,Role.LIST_ITEM,Role.TAB,Role.TAB_PANEL,Role.TOOLBAR,Role.WINDOW],anyPredicate:[AutomationPredicate.landmark,AutomationPredicate.structuralContainer,function(node){return node.role===Role.TEXT_FIELD&&node.restriction===Restriction.READ_ONLY;},function(node){return(node.state[State.EDITABLE]&&node.parent&&!node.parent.state[State.EDITABLE]);}]})(node);}
static root(node){if(node.modal){return true;}
switch(node.role){case Role.WINDOW:return true;case Role.DIALOG:if(node.root.role!==Role.DESKTOP){return Boolean(node.modal);}
return Boolean(node.parent)&&node.parent.role===Role.WINDOW&&node.parent.children.every(function(child){return node.role===Role.WINDOW||node.role===Role.DIALOG;});case Role.TOOLBAR:return node.root.role===Role.DESKTOP&&!(node.nextFocus||!node.previousFocus);case Role.ROOT_WEB_AREA:if(node.parent&&node.parent.role===Role.WEB_VIEW&&!node.parent.state[State.FOCUSED]){return false;}
return!node.parent||!node.parent.root||(node.parent.root.role===Role.DESKTOP&&node.parent.role===Role.WEB_VIEW);default:return false;}}
static rootOrEditableRoot(node){return AutomationPredicate.root(node)||(node.state[State.RICHLY_EDITABLE]&&node.state[State.FOCUSED]&&node.children.length>0);}
static shouldIgnoreNode(node){if(node.state[State.INVISIBLE]||(node.location.height===0&&node.location.width===0)){return true;}
if(AutomationPredicate.structuralContainer(node)){return true;}
if(node.labelFor&&node.labelFor.length>0&&node.role===Role.LABEL_TEXT){return true;}
if(node.descriptionFor&&node.descriptionFor.length>0&&node.role===Role.LABEL_TEXT){return true;}
if(node.role===Role.LIST_MARKER&&node.nextSibling&&node.nextSibling.role===Role.STATIC_TEXT){return true;}
if(node.name||node.value||node.description||node.url){return false;}
if(AutomationPredicate.math(node)){return false;}
return AutomationPredicate.leaf(node)&&(AutomationPredicate.roles([Role.CLIENT,Role.COLUMN,Role.GENERIC_CONTAINER,Role.GROUP,Role.IMAGE,Role.PARAGRAPH,Role.STATIC_TEXT,Role.SVG_ROOT,Role.TABLE_HEADER_CONTAINER,Role.UNKNOWN])(node));}
static checkable(node){return Boolean(node.checked);}
static makeTableCellPredicate(start,opts){if(!opts.row&&!opts.col){throw new Error('You must set either row or col to true');}
const dir=opts.dir||Dir.FORWARD;let rowIndex=0,colIndex=0;let tableNode=start;while(tableNode){if(AutomationPredicate.table(tableNode)){break;}
if(AutomationPredicate.cellLike(tableNode)){rowIndex=tableNode.tableCellRowIndex;colIndex=tableNode.tableCellColumnIndex;}
tableNode=tableNode.parent;}
if(!tableNode){return null;}
if(opts.end){if(!opts.col){throw'Unsupported option.';}
if(dir===Dir.FORWARD){return function(node){return AutomationPredicate.cellLike(node)&&node.tableCellColumnIndex===colIndex&&node.tableCellRowIndex>=0;};}else{return function(node){return AutomationPredicate.cellLike(node)&&node.tableCellColumnIndex===colIndex&&node.tableCellRowIndex<tableNode.tableRowCount;};}}
if(opts.row){rowIndex=dir===Dir.FORWARD?rowIndex+1:rowIndex-1;}
if(opts.col){colIndex=dir===Dir.FORWARD?colIndex+1:colIndex-1;}
return function(node){return AutomationPredicate.cellLike(node)&&node.tableCellColumnIndex===colIndex&&node.tableCellRowIndex===rowIndex;};}
static makeHeadingPredicate(level){return function(node){return node.role===Role.HEADING&&node.hierarchicalLevel===level;};}
static contextualBraille(node){return node.parent!=null&&((node.parent.role===Role.ROW&&AutomationPredicate.cellLike(node))||(node.parent.role===Role.TREE&&node.parent.state[State.HORIZONTAL]));}
static multiline(node){return node.state[State.MULTILINE]||node.state[State.RICHLY_EDITABLE];}
static autoScrollable(node){return Boolean(node.scrollable)&&(node.standardActions.includes(chrome.automation.ActionType.SCROLL_FORWARD)||node.standardActions.includes(chrome.automation.ActionType.SCROLL_BACKWARD))&&(node.role===Role.GRID||node.role===Role.LIST||node.role===Role.POP_UP_BUTTON||node.role===Role.SCROLL_VIEW);}
static math(node){return node.role===Role.MATH||Boolean(node.htmlAttributes['data-mathml']);}
static group(node){if(AutomationPredicate.text(node)||node.display==='inline'){return false;}
return AutomationPredicate.match({anyRole:[Role.HEADING,Role.LIST,Role.PARAGRAPH],anyPredicate:[AutomationPredicate.editText,AutomationPredicate.formField,AutomationPredicate.object,AutomationPredicate.table]})(node);}
static shouldOnlyOutputSelectionChangeInBraille(node){return node.state[State.RICHLY_EDITABLE]&&node.state[State.FOCUSED]&&node.role===Role.LOG;}
static ignoreDuringJump(node){return node.role===Role.GENERIC_CONTAINER||node.role===Role.STATIC_TEXT||node.role===Role.INLINE_TEXT_BOX;}
static makeListPredicate(node){let avoidNode=node;while(avoidNode&&!AutomationPredicate.listLike(avoidNode)){avoidNode=avoidNode.parent;}
return function(autoNode){return AutomationPredicate.listLike(autoNode)&&(autoNode!==avoidNode);};}};AutomationPredicate.Unary;AutomationPredicate.Binary;AutomationPredicate.heading=AutomationPredicate.roles([Role.HEADING]);AutomationPredicate.inlineTextBox=AutomationPredicate.roles([Role.INLINE_TEXT_BOX]);AutomationPredicate.link=AutomationPredicate.roles([Role.LINK]);AutomationPredicate.row=AutomationPredicate.roles([Role.ROW]);AutomationPredicate.table=AutomationPredicate.roles([Role.GRID,Role.LIST_GRID,Role.TABLE]);AutomationPredicate.listLike=AutomationPredicate.roles([Role.LIST,Role.DESCRIPTION_LIST]);AutomationPredicate.simpleListItem=AutomationPredicate.match({anyPredicate:[node=>node.role===Role.LIST_ITEM&&node.children.length===2&&node.firstChild.role===Role.LIST_MARKER&&node.lastChild.role===Role.STATIC_TEXT]});AutomationPredicate.formField=AutomationPredicate.match({anyPredicate:[AutomationPredicate.button,AutomationPredicate.comboBox,AutomationPredicate.editText],anyRole:[Role.CHECK_BOX,Role.COLOR_WELL,Role.LIST_BOX,Role.SLIDER,Role.SWITCH,Role.TAB,Role.TREE]});AutomationPredicate.control=AutomationPredicate.match({anyPredicate:[AutomationPredicate.formField,],anyRole:[Role.DISCLOSURE_TRIANGLE,Role.MENU_ITEM,Role.MENU_ITEM_CHECK_BOX,Role.MENU_ITEM_RADIO,Role.MENU_LIST_OPTION,Role.SCROLL_BAR]});AutomationPredicate.linkOrControl=AutomationPredicate.match({anyPredicate:[AutomationPredicate.control],anyRole:[Role.LINK]});AutomationPredicate.landmark=AutomationPredicate.roles([Role.APPLICATION,Role.BANNER,Role.COMPLEMENTARY,Role.CONTENT_INFO,Role.FORM,Role.MAIN,Role.NAVIGATION,Role.REGION,Role.SEARCH]);AutomationPredicate.structuralContainer=AutomationPredicate.roles([Role.ALERT_DIALOG,Role.CLIENT,Role.DIALOG,Role.LAYOUT_TABLE,Role.LAYOUT_TABLE_CELL,Role.LAYOUT_TABLE_ROW,Role.ROOT_WEB_AREA,Role.WEB_VIEW,Role.WINDOW,Role.EMBEDDED_OBJECT,Role.IFRAME,Role.IFRAME_PRESENTATIONAL,Role.PLUGIN_OBJECT,Role.UNKNOWN,Role.PANE]);AutomationPredicate.clickable=AutomationPredicate.match({anyPredicate:[AutomationPredicate.button,AutomationPredicate.link,node=>{return node.defaultActionVerb===chrome.automation.DefaultActionVerb.CLICK;}],anyAttribute:{clickable:true}});AutomationPredicate.cellLike=AutomationPredicate.roles([Role.CELL,Role.ROW_HEADER,Role.COLUMN_HEADER]);AutomationPredicate.supportsImageData=AutomationPredicate.roles([Role.CANVAS,Role.IMAGE,Role.VIDEO]);AutomationPredicate.menuItem=AutomationPredicate.roles([Role.MENU_ITEM,Role.MENU_ITEM_CHECK_BOX,Role.MENU_ITEM_RADIO]);AutomationPredicate.text=AutomationPredicate.roles([Role.STATIC_TEXT,Role.INLINE_TEXT_BOX,Role.LINE_BREAK]);AutomationPredicate.selectableText=AutomationPredicate.roles([Role.STATIC_TEXT,Role.INLINE_TEXT_BOX,Role.LINE_BREAK,Role.LIST_MARKER]);});goog.provide('AutomationTreeWalker');goog.provide('AutomationTreeWalkerPhase');goog.provide('AutomationTreeWalkerRestriction');goog.require('constants');AutomationTreeWalkerPhase={INITIAL:'initial',ANCESTOR:'ancestor',DESCENDANT:'descendant',OTHER:'other'};let AutomationTreeWalkerRestriction;AutomationTreeWalker=class{constructor(node,dir,opt_restrictions){this.node_=node;this.phase_=AutomationTreeWalkerPhase.INITIAL;this.dir_=dir;this.initialNode_=node;this.backwardAncestor_=node.parent||null;const restrictions=opt_restrictions||{};this.visitPred_=function(node){if(this.skipInitialAncestry_&&this.phase_===AutomationTreeWalkerPhase.ANCESTOR){return false;}
if(this.skipInitialSubtree_&&this.phase_!==AutomationTreeWalkerPhase.ANCESTOR&&this.phase_!==AutomationTreeWalkerPhase.OTHER){return false;}
if(restrictions.visit){return restrictions.visit(node);}
return true;};this.leafPred_=restrictions.leaf?restrictions.leaf:AutomationTreeWalker.falsePredicate_;this.rootPred_=restrictions.root?restrictions.root:AutomationTreeWalker.falsePredicate_;this.skipInitialAncestry_=restrictions.skipInitialAncestry||false;this.skipInitialSubtree_=restrictions.skipInitialSubtree||false;}
static falsePredicate_(node){return false;}
get node(){return this.node_;}
get phase(){return this.phase_;}
next(){if(!this.node_){return this;}
do{if(this.rootPred_(this.node_)&&this.dir_===constants.Dir.BACKWARD){this.node_=null;return this;}
if(this.dir_===constants.Dir.FORWARD){this.forward_(this.node_);}else{this.backward_(this.node_);}}while(this.node_&&!this.visitPred_(this.node_));return this;}
forward_(node){if(!this.leafPred_(node)&&node.firstChild){if(this.phase_===AutomationTreeWalkerPhase.INITIAL){this.phase_=AutomationTreeWalkerPhase.DESCENDANT;}
if(!this.skipInitialSubtree_||this.phase_!==AutomationTreeWalkerPhase.DESCENDANT){this.node_=node.firstChild;return;}}
let searchNode=node;while(searchNode){if(searchNode===this.initialNode_){this.phase_=AutomationTreeWalkerPhase.OTHER;}
if(searchNode.nextSibling){this.node_=searchNode.nextSibling;return;}
if(searchNode.parent===this.initialNode_){this.phase_=AutomationTreeWalkerPhase.OTHER;}
if(searchNode.parent&&this.rootPred_(searchNode.parent)&&this.phase_!==AutomationTreeWalkerPhase.DESCENDANT){break;}
searchNode=searchNode.parent;}
this.node_=null;}
backward_(node){if(node.previousSibling){this.phase_=AutomationTreeWalkerPhase.OTHER;node=node.previousSibling;while(!this.leafPred_(node)&&node.lastChild){node=node.lastChild;}
this.node_=node;return;}
if(node.parent&&this.backwardAncestor_===node.parent){this.phase_=AutomationTreeWalkerPhase.ANCESTOR;this.backwardAncestor_=node.parent.parent||null;}
this.node_=node.parent||null;}};goog.provide('AutomationUtil');goog.require('AutomationPredicate');goog.require('AutomationTreeWalker');goog.require('constants');goog.scope(function(){const AutomationNode=chrome.automation.AutomationNode;const Dir=constants.Dir;const RoleType=chrome.automation.RoleType;AutomationUtil=class{constructor(){}
static findNodePre(cur,dir,pred){if(!cur){return null;}
if(pred(cur)&&!AutomationPredicate.shouldIgnoreNode(cur)){return cur;}
let child=dir===Dir.BACKWARD?cur.lastChild:cur.firstChild;while(child){const ret=AutomationUtil.findNodePre(child,dir,pred);if(ret){return ret;}
child=dir===Dir.BACKWARD?child.previousSibling:child.nextSibling;}
return null;}
static findNodePost(cur,dir,pred){if(!cur){return null;}
let child=dir===Dir.BACKWARD?cur.lastChild:cur.firstChild;while(child){const ret=AutomationUtil.findNodePost(child,dir,pred);if(ret){return ret;}
child=dir===Dir.BACKWARD?child.previousSibling:child.nextSibling;}
if(pred(cur)&&!AutomationPredicate.shouldIgnoreNode(cur)){return cur;}
return null;}
static findNextNode(cur,dir,pred,opt_restrictions){const walker=createWalker(cur,dir,pred,opt_restrictions);return walker.next().node;}
static findAllNodes(cur,dir,pred,opt_restrictions){const walker=createWalker(cur,dir,pred,opt_restrictions);const nodes=[];let currentNode=walker.next().node;while(currentNode){nodes.push(currentNode);currentNode=walker.next().node;}
return nodes;}
static findNodeUntil(cur,dir,pred,opt_before){let before=cur;let after=before;do{before=after;after=AutomationUtil.findNextNode(before,dir,AutomationPredicate.leaf);}while(after&&!pred(before,after));return opt_before?before:after;}
static getAncestors(node){const ret=[];let candidate=node;while(candidate){ret.push(candidate);candidate=candidate.parent;}
return ret.reverse();}
static getFirstAncestorWithRole(node,role){if(!node.parent){return null;}
if(node.parent.role===role){return node.parent;}
return AutomationUtil.getFirstAncestorWithRole(node.parent,role);}
static getDivergence(ancestorsA,ancestorsB){for(let i=0;i<ancestorsA.length;i++){if(ancestorsA[i]!==ancestorsB[i]){return i;}}
if(ancestorsA.length===ancestorsB.length){return-1;}
return ancestorsA.length;}
static getUniqueAncestors(prevNode,node){const prevAncestors=AutomationUtil.getAncestors(prevNode);const ancestors=AutomationUtil.getAncestors(node);const divergence=AutomationUtil.getDivergence(prevAncestors,ancestors);return ancestors.slice(divergence);}
static getDirection(nodeA,nodeB){const ancestorsA=AutomationUtil.getAncestors(nodeA);const ancestorsB=AutomationUtil.getAncestors(nodeB);const divergence=AutomationUtil.getDivergence(ancestorsA,ancestorsB);if(divergence===-1){return Dir.FORWARD;}
const divA=ancestorsA[divergence];const divB=ancestorsB[divergence];if(!divA){return Dir.FORWARD;}
if(!divB){return Dir.BACKWARD;}
if(divA.parent===nodeB){return Dir.BACKWARD;}
if(divB.parent===nodeA){return Dir.FORWARD;}
return divA.indexInParent<=divB.indexInParent?Dir.FORWARD:Dir.BACKWARD;}
static isInSameTree(a,b){if(!a||!b){return true;}
return a.root===b.root||(a.root.role===b.root.role&&a.root.role===RoleType.ROOT_WEB_AREA);}
static isDescendantOf(node,ancestor){let testNode=node;while(testNode&&testNode!==ancestor){testNode=testNode.parent;}
return testNode===ancestor;}
static hitTest(node,point){let child=node.firstChild;while(child){const hit=AutomationUtil.hitTest(child,point);if(hit){return hit;}
child=child.nextSibling;}
const loc=node.unclippedLocation;if(loc.left<0||loc.top<0){return null;}
if(point.x<=(loc.left+loc.width)&&point.x>=loc.left&&point.y<=(loc.top+loc.height)&&point.y>=loc.top){return node;}
return null;}
static getTopLevelRoot(node){let root=node.root;if(!root||root.role===RoleType.DESKTOP){return null;}
while(root&&root.parent&&root.parent.root&&root.parent.root.role!==RoleType.DESKTOP){root=root.parent.root;}
return root;}
static getLeastCommonAncestor(prevNode,node){if(prevNode===node){return node;}
const prevAncestors=AutomationUtil.getAncestors(prevNode);const ancestors=AutomationUtil.getAncestors(node);const divergence=AutomationUtil.getDivergence(prevAncestors,ancestors);return ancestors[divergence-1];}
static getText(node){if(!node){return'';}
if(node.role===RoleType.TEXT_FIELD){return node.value||'';}
return node.name||'';}
static getEditableRoot(node){let testNode=node;let rootEditable;do{if(testNode.state.editable&&testNode.state.focused){rootEditable=testNode;}
testNode=testNode.parent;}while(testNode);return rootEditable;}
static findLastNode(root,pred){let node=root;while(node.lastChild){node=node.lastChild;}
do{if(AutomationPredicate.shouldIgnoreNode(node)){continue;}
let walker=node;let shallowest=null;while(walker){if(walker===root){break;}
if(pred(walker)&&!AutomationPredicate.shouldIgnoreNode(walker)&&(!shallowest||!AutomationPredicate.container(walker))){shallowest=walker;}
walker=walker.parent;}
if(shallowest){return shallowest;}}while(node=AutomationUtil.findNextNode(node,Dir.BACKWARD,pred));return null;}};function createWalker(cur,dir,pred,opt_restrictions){const restrictions={};opt_restrictions=opt_restrictions||{leaf:undefined,root:undefined,visit:undefined,skipInitialSubtree:!AutomationPredicate.container(cur)&&pred(cur)};restrictions.root=opt_restrictions.root||AutomationPredicate.root;restrictions.leaf=opt_restrictions.leaf||function(node){return!AutomationPredicate.container(node)&&pred(node);};restrictions.skipInitialSubtree=opt_restrictions.skipInitialSubtree;restrictions.skipInitialAncestry=opt_restrictions.skipInitialAncestry;restrictions.visit=function(node){return pred(node)&&!AutomationPredicate.shouldIgnoreNode(node);};return new AutomationTreeWalker(cur,dir,restrictions);}});goog.provide('KeyCode');KeyCode={CANCEL:3,BACK:8,TAB:9,BACKTAB:10,CLEAR:12,RETURN:13,SHIFT:16,CONTROL:17,MENU:18,ALT:18,PAUSE:19,CAPITAL:20,KANA:21,HANGUL:21,PASTE:22,JUNJA:23,FINAL:24,HANJA:25,KANJI:25,ESCAPE:27,CONVERT:28,NONCONVERT:29,ACCEPT:30,MODECHANGE:31,SPACE:32,PRIOR:33,NEXT:34,END:35,HOME:36,LEFT:37,UP:38,RIGHT:39,DOWN:40,SELECT:41,PRINT:42,EXECUTE:43,SNAPSHOT:44,INSERT:45,DELETE:46,HELP:47,ZERO:48,ONE:49,TWO:50,THREE:51,FOUR:52,FIVE:53,SIX:54,SEVEN:55,EIGHT:56,NINE:57,A:65,B:66,C:67,D:68,E:69,F:70,G:71,H:72,I:73,J:74,K:75,L:76,M:77,N:78,O:79,P:80,Q:81,R:82,S:83,T:84,U:85,V:86,W:87,X:88,Y:89,Z:90,SEARCH:91,RWIN:92,APPS:93,SLEEP:95,NUMPAD0:96,NUMPAD1:97,NUMPAD2:98,NUMPAD3:99,NUMPAD4:100,NUMPAD5:101,NUMPAD6:102,NUMPAD7:103,NUMPAD8:104,NUMPAD9:105,MULTIPLY:106,ADD:107,SEPARATOR:108,SUBTRACT:109,DECIMAL:110,DIVIDE:111,F1:112,F2:113,F3:114,F4:115,F5:116,F6:117,F7:118,F8:119,F9:120,F10:121,F11:122,F12:123,F13:124,F14:125,F15:126,F16:127,F17:128,F18:129,F19:130,F20:131,F21:132,F22:133,F23:134,F24:135,NUMLOCK:144,SCROLL:145,LSHIFT:160,RSHIFT:161,LCONTROL:162,RCONTROL:163,LMENU:164,RMENU:165,BROWSER_BACK:166,BROWSER_FORWARD:167,BROWSER_REFRESH:168,BROWSER_STOP:169,BROWSER_SEARCH:170,BROWSER_FAVORITES:171,BROWSER_HOME:172,VOLUME_MUTE:173,VOLUME_DOWN:174,VOLUME_UP:175,MEDIA_NEXT_TRACK:176,MEDIA_PREV_TRACK:177,MEDIA_STOP:178,MEDIA_PLAY_PAUSE:179,MEDIA_LAUNCH_MAIL:180,MEDIA_LAUNCH_MEDIA_SELECT:181,MEDIA_LAUNCH_APP1:182,MEDIA_LAUNCH_APP2:183,OEM_1:186,OEM_PLUS:187,OEM_COMMA:188,OEM_MINUS:189,OEM_PERIOD:190,OEM_2:191,OEM_3:192,OEM_4:219,OEM_5:220,OEM_6:221,OEM_7:222,OEM_8:223,OEM_102:226,OEM_103:227,OEM_104:228,PROCESSKEY:229,PACKET:231,OEM_ATTN:240,OEM_FINISH:241,OEM_COPY:242,DBE_SBCSCHAR:243,DBE_DBCSCHAR:244,OEM_BACKTAB:245,ATTN:246,CRSEL:247,EXSEL:248,EREOF:249,PLAY:250,ZOOM:251,NONAME:252,PA1:253,OEM_CLEAR:254,UNKNOWN:0,WLAN:151,POWER:152,ASSISTANT:153,SETTINGS:154,PRIVACY_SCREEN_TOGGLE:155,BRIGHTNESS_DOWN:216,BRIGHTNESS_UP:217,KBD_BRIGHTNESS_DOWN:218,KBD_BRIGHTNESS_UP:232,ALTGR:225,COMPOSE:230,MEDIA_PLAY:233,MEDIA_PAUSE:234,};goog.require('AutomationPredicate');goog.require('AutomationTreeWalker');goog.require('AutomationUtil');goog.require('KeyCode');goog.require('constants');import('/select_to_speak/select_to_speak_main.js');
