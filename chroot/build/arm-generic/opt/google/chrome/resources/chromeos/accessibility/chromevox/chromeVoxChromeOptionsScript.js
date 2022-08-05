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
goog.provide('AbstractEarcons');goog.provide('Earcon');goog.provide('EarconDescription');Earcon={ALERT_MODAL:'alert_modal',ALERT_NONMODAL:'alert_nonmodal',BUTTON:'button',CHECK_OFF:'check_off',CHECK_ON:'check_on',CHROMEVOX_LOADING:'chromevox_loading',CHROMEVOX_LOADED:'chromevox_loaded',EDITABLE_TEXT:'editable_text',INVALID_KEYPRESS:'invalid_keypress',LINK:'link',LISTBOX:'listbox',LIST_ITEM:'list_item',LONG_DESC:'long_desc',MATH:'math',OBJECT_CLOSE:'object_close',OBJECT_ENTER:'object_enter',OBJECT_EXIT:'object_exit',OBJECT_OPEN:'object_open',OBJECT_SELECT:'object_select',PAGE_FINISH_LOADING:'page_finish_loading',PAGE_START_LOADING:'page_start_loading',POP_UP_BUTTON:'pop_up_button',RECOVER_FOCUS:'recover_focus',SELECTION:'selection',SELECTION_REVERSE:'selection_reverse',SKIP:'skip',SLIDER:'slider',SMART_STICKY_MODE_OFF:'smart_sticky_mode_off',SMART_STICKY_MODE_ON:'smart_sticky_mode_on',NO_POINTER_ANCHOR:'no_pointer_anchor',WRAP:'wrap',WRAP_EDGE:'wrap_edge',};const EarconDescription={alert_modal:'alert_modal_earcon_description',alert_nonmodal:'alert_nonmodal_earcon_description',button:'button_earcon_description',check_off:'check_off_earcon_description',check_on:'check_on_earcon_description',editable_text:'editable_text_earcon_description',invalid_keypress:'invalid_keypress_earcon_description',link:'link_earcon_description',listbox:'listbox_earcon_description',page_start_loading:'page_start_loading_earcon_description',pop_up_button:'pop_up_button_earcon_description',slider:'slider_earcon_description',wrap:'wrap_earcon_description',};AbstractEarcons=class{constructor(){}
playEarcon(earcon,opt_location){}
cancelEarcon(earcon){}
earconsAvailable(){return true;}
get enabled(){return localStorage['earcons']==='true';}
set enabled(value){localStorage['earcons']=value;}};goog.provide('BluetoothBrailleDisplayManager');goog.provide('BluetoothBrailleDisplayListener');BluetoothBrailleDisplayListener=class{constructor(){}
onDisplayListChanged(displays){}
onPincodeRequested(display){}};BluetoothBrailleDisplayManager=class{constructor(){this.listeners_=[];this.displayNamePrefixes_=['Actilino ALO','Activator AC4','Active Braille AB','Active Star AS','ALVA BC','APH Chameleon','APH Mantis','Basic Braille BB','Basic Braille Plus BP','BAUM Conny','Baum PocketVario','Baum SuperVario','Baum SVario','BrailleConnect','BrailleEDGE','BrailleMe','BMpk','BMsmart','BM32','BrailleNote Touch','BrailleSense','Braille Star','Braillex','Brailliant BI','Brailliant 14','Brailliant 80','Braillino BL','B2G','Conny','Easy Braille EBR','EL12-','Esys-','Focus','Humanware BrailleOne','HWG Brailliant','MB248','NLS eReader','Orbit Reader','Pronto!','Refreshabraille','SmartBeetle','SuperVario','TSM','VarioConnect','VarioUltra',];this.preferredDisplayAddress_=localStorage['preferredBrailleDisplayAddress'];this.preferredDisplayConnected_;chrome.bluetooth.onDeviceAdded.addListener(this.handleDevicesChanged.bind(this));chrome.bluetooth.onDeviceChanged.addListener(this.handleDevicesChanged.bind(this));chrome.bluetooth.onDeviceRemoved.addListener(this.handleDevicesChanged.bind(this));chrome.bluetoothPrivate.onPairing.addListener(this.handlePairing.bind(this));}
addListener(listener){this.listeners_.push(listener);}
start(){chrome.bluetooth.startDiscovery();this.handleDevicesChanged();}
stop(){chrome.bluetooth.stopDiscovery();}
connect(display){if(this.preferredDisplayAddress_===display.address||!this.preferredDisplayAddress_){this.connectInternal(display);}else{chrome.bluetoothPrivate.disconnectAll(this.preferredDisplayAddress_,()=>{this.connectInternal(display);});}}
connectInternal(display){this.preferredDisplayAddress_=display.address;localStorage['preferredBrailleDisplayAddress']=display.address;if(!display.connected){chrome.bluetoothPrivate.connect(display.address,result=>{if(!display.paired){chrome.bluetoothPrivate.pair(display.address);}});return;}
if(!display.paired){chrome.bluetoothPrivate.pair(display.address);}}
disconnect(display){chrome.bluetoothPrivate.disconnectAll(display.address);chrome.brailleDisplayPrivate.updateBluetoothBrailleDisplayAddress('');}
forget(display){chrome.bluetoothPrivate.forgetDevice(display.address);chrome.brailleDisplayPrivate.updateBluetoothBrailleDisplayAddress('');}
finishPairing(display,pincode){chrome.bluetoothPrivate.setPairingResponse({response:'confirm',device:display,pincode},()=>{});}
handleDevicesChanged(opt_device){chrome.bluetooth.getDevices(devices=>{const displayList=devices.filter(device=>{return this.displayNamePrefixes_.some(name=>{return device.name&&device.name.search(name)===0;});});if(displayList.length===0){return;}
if(opt_device&&!displayList.find(i=>i.name===opt_device.name)){return;}
displayList.forEach(display=>{if(this.preferredDisplayAddress_===display.address){this.handlePreferredDisplayConnectionStateChanged(display);}});this.listeners_.forEach(listener=>{listener.onDisplayListChanged(displayList);});});}
handlePairing(pairingEvent){if(pairingEvent.pairing===chrome.bluetoothPrivate.PairingEventType.REQUEST_PINCODE){this.listeners_.forEach(listener=>listener.onPincodeRequested(pairingEvent.device));}}
handlePreferredDisplayConnectionStateChanged(display){if(display.connected===this.preferredDisplayConnected_){return;}
this.preferredDisplayConnected_=display.connected;if(display.connected){chrome.brailleDisplayPrivate.updateBluetoothBrailleDisplayAddress(display.address);}}};goog.provide('KeyCode');KeyCode={CANCEL:3,BACK:8,TAB:9,BACKTAB:10,CLEAR:12,RETURN:13,SHIFT:16,CONTROL:17,MENU:18,ALT:18,PAUSE:19,CAPITAL:20,KANA:21,HANGUL:21,PASTE:22,JUNJA:23,FINAL:24,HANJA:25,KANJI:25,ESCAPE:27,CONVERT:28,NONCONVERT:29,ACCEPT:30,MODECHANGE:31,SPACE:32,PRIOR:33,NEXT:34,END:35,HOME:36,LEFT:37,UP:38,RIGHT:39,DOWN:40,SELECT:41,PRINT:42,EXECUTE:43,SNAPSHOT:44,INSERT:45,DELETE:46,HELP:47,ZERO:48,ONE:49,TWO:50,THREE:51,FOUR:52,FIVE:53,SIX:54,SEVEN:55,EIGHT:56,NINE:57,A:65,B:66,C:67,D:68,E:69,F:70,G:71,H:72,I:73,J:74,K:75,L:76,M:77,N:78,O:79,P:80,Q:81,R:82,S:83,T:84,U:85,V:86,W:87,X:88,Y:89,Z:90,SEARCH:91,RWIN:92,APPS:93,SLEEP:95,NUMPAD0:96,NUMPAD1:97,NUMPAD2:98,NUMPAD3:99,NUMPAD4:100,NUMPAD5:101,NUMPAD6:102,NUMPAD7:103,NUMPAD8:104,NUMPAD9:105,MULTIPLY:106,ADD:107,SEPARATOR:108,SUBTRACT:109,DECIMAL:110,DIVIDE:111,F1:112,F2:113,F3:114,F4:115,F5:116,F6:117,F7:118,F8:119,F9:120,F10:121,F11:122,F12:123,F13:124,F14:125,F15:126,F16:127,F17:128,F18:129,F19:130,F20:131,F21:132,F22:133,F23:134,F24:135,NUMLOCK:144,SCROLL:145,LSHIFT:160,RSHIFT:161,LCONTROL:162,RCONTROL:163,LMENU:164,RMENU:165,BROWSER_BACK:166,BROWSER_FORWARD:167,BROWSER_REFRESH:168,BROWSER_STOP:169,BROWSER_SEARCH:170,BROWSER_FAVORITES:171,BROWSER_HOME:172,VOLUME_MUTE:173,VOLUME_DOWN:174,VOLUME_UP:175,MEDIA_NEXT_TRACK:176,MEDIA_PREV_TRACK:177,MEDIA_STOP:178,MEDIA_PLAY_PAUSE:179,MEDIA_LAUNCH_MAIL:180,MEDIA_LAUNCH_MEDIA_SELECT:181,MEDIA_LAUNCH_APP1:182,MEDIA_LAUNCH_APP2:183,OEM_1:186,OEM_PLUS:187,OEM_COMMA:188,OEM_MINUS:189,OEM_PERIOD:190,OEM_2:191,OEM_3:192,OEM_4:219,OEM_5:220,OEM_6:221,OEM_7:222,OEM_8:223,OEM_102:226,OEM_103:227,OEM_104:228,PROCESSKEY:229,PACKET:231,OEM_ATTN:240,OEM_FINISH:241,OEM_COPY:242,DBE_SBCSCHAR:243,DBE_DBCSCHAR:244,OEM_BACKTAB:245,ATTN:246,CRSEL:247,EXSEL:248,EREOF:249,PLAY:250,ZOOM:251,NONAME:252,PA1:253,OEM_CLEAR:254,UNKNOWN:0,WLAN:151,POWER:152,ASSISTANT:153,SETTINGS:154,PRIVACY_SCREEN_TOGGLE:155,BRIGHTNESS_DOWN:216,BRIGHTNESS_UP:217,KBD_BRIGHTNESS_DOWN:218,KBD_BRIGHTNESS_UP:232,ALTGR:225,COMPOSE:230,MEDIA_PLAY:233,MEDIA_PAUSE:234,};goog.provide('BrailleDisplayState');goog.provide('BrailleKeyCommand');goog.provide('BrailleKeyEvent');goog.require('KeyCode');BrailleKeyCommand={PAN_LEFT:'pan_left',PAN_RIGHT:'pan_right',LINE_UP:'line_up',LINE_DOWN:'line_down',TOP:'top',BOTTOM:'bottom',ROUTING:'routing',SECONDARY_ROUTING:'secondary_routing',DOTS:'dots',CHORD:'chord',STANDARD_KEY:'standard_key',};BrailleKeyEvent;BrailleKeyEvent.keyCodeToLegacyCode=function(code){return BrailleKeyEvent.legacyKeyCodeMap_[code];};BrailleKeyEvent.keyCodeToCharValue=function(keyCode){const SPECIAL_CODES={'Backspace':0x08,'Tab':0x09,'Enter':0x0A};return SPECIAL_CODES[keyCode]||keyCode.charCodeAt(0);};BrailleKeyEvent.brailleDotsToStandardKeyCode={0b1:'A',0b11:'B',0b1001:'C',0b11001:'D',0b10001:'E',0b1011:'F',0b11011:'G',0b10011:'H',0b1010:'I',0b11010:'J',0b101:'K',0b111:'L',0b1101:'M',0b11101:'N',0b10101:'O',0b1111:'P',0b11111:'Q',0b10111:'R',0b1110:'S',0b11110:'T',0b100101:'U',0b100111:'V',0b111010:'W',0b101101:'X',0b111101:'Y',0b110101:'Z',0b110100:'0',0b10:'1',0b110:'2',0b10010:'3',0b110010:'4',0b100010:'5',0b10110:'6',0b110110:'7',0b100110:'8',0b10100:'9',};BrailleKeyEvent.brailleChordsToStandardKeyCode={0b1000000:'Backspace',0b10100:'Tab',0b110101:'Escape',0b101000:'Enter',};BrailleKeyEvent.brailleDotsToModifiers={0b010010:{ctrlKey:true},0b100100:{altKey:true},0b1000100:{shiftKey:true},0b1010010:{ctrlKey:true,shiftKey:true},0b1100100:{altKey:true,shiftKey:true},};BrailleKeyEvent.legacyKeyCodeMap_={'Backspace':KeyCode.BACK,'Tab':KeyCode.TAB,'Enter':KeyCode.RETURN,'Escape':KeyCode.ESCAPE,'Home':KeyCode.HOME,'ArrowLeft':KeyCode.LEFT,'ArrowUp':KeyCode.UP,'ArrowRight':KeyCode.RIGHT,'ArrowDown':KeyCode.DOWN,'PageUp':KeyCode.PRIOR,'PageDown':KeyCode.NEXT,'End':KeyCode.END,'Insert':KeyCode.INSERT,'Delete':KeyCode.DELETE,'AudioVolumeDown':KeyCode.VOLUME_DOWN,'AudioVolumeUp':KeyCode.VOLUME_UP,};(function(){for(let i='0'.charCodeAt(0);i<'9'.charCodeAt(0);++i){BrailleKeyEvent.legacyKeyCodeMap_[String.fromCharCode(i)]=(i);}
for(let i='A'.charCodeAt(0);i<'Z'.charCodeAt(0);++i){BrailleKeyEvent.legacyKeyCodeMap_[String.fromCharCode(i)]=(i);}
for(let i=0;i<12;++i){BrailleKeyEvent.legacyKeyCodeMap_['F'+(i+1)]=(112+i);}})();let BrailleDisplayState;goog.provide('MultiSpannable');goog.provide('Spannable');Spannable=class{constructor(opt_string,opt_annotation){this.string_=opt_string instanceof Spannable?'':opt_string||'';this.spans_=[];if(opt_string instanceof Spannable){this.append(opt_string);}
if(goog.isDef(opt_annotation)){const len=this.string_.length;this.spans_.push({value:opt_annotation,start:0,end:len});}}
toString(){return this.string_;}
get length(){return this.string_.length;}
setSpan(value,start,end){this.removeSpan(value);this.setSpanInternal(value,start,end);}
setSpanInternal(value,start,end){if(0<=start&&start<=end&&end<=this.string_.length){this.spans_.push({value,start,end});this.spans_.sort(function(a,b){let ret=a.start-b.start;if(ret===0){ret=a.end-b.end;}
return ret;});}else{throw new RangeError('span out of range (start='+start+', end='+end+', len='+this.string_.length+')');}}
removeSpan(value){for(let i=this.spans_.length-1;i>=0;i--){if(this.spans_[i].value===value){this.spans_.splice(i,1);}}}
append(other){if(other instanceof Spannable){const otherSpannable=(other);const originalLength=this.length;this.string_+=otherSpannable.string_;other.spans_.forEach(function(span){this.setSpan(span.value,span.start+originalLength,span.end+originalLength);}.bind(this));}else if(typeof other==='string'){this.string_+=(other);}}
getSpan(position){return valueOfSpan(this.spans_.find(spanCoversPosition(position)));}
getSpanInstanceOf(constructor){return valueOfSpan(this.spans_.find(spanInstanceOf(constructor)));}
getSpansInstanceOf(constructor){return(this.spans_.filter(spanInstanceOf(constructor)).map(valueOfSpan));}
getSpans(position){return(this.spans_.filter(spanCoversPosition(position)).map(valueOfSpan));}
hasSpan(value){return this.spans_.some(spanValueIs(value));}
getSpanStart(value){return this.getSpanByValueOrThrow_(value).start;}
getSpanEnd(value){return this.getSpanByValueOrThrow_(value).end;}
getSpanIntervals(value){return this.spans_.filter(function(s){return s.value===value;}).map(function(s){return{start:s.start,end:s.end};});}
getSpanLength(value){const span=this.getSpanByValueOrThrow_(value);return span.end-span.start;}
getSpanByValueOrThrow_(value){const span=this.spans_.find(spanValueIs(value));if(span){return span;}
throw new Error('Span '+value+' doesn\'t exist in spannable');}
substring(start,opt_end){const end=goog.isDef(opt_end)?opt_end:this.string_.length;if(start<0||end>this.string_.length||start>end){throw new RangeError('substring indices out of range');}
const result=new Spannable(this.string_.substring(start,end));this.spans_.forEach(function(span){if(span.start<=end&&span.end>=start){const newStart=Math.max(0,span.start-start);const newEnd=Math.min(end-start,span.end-start);result.spans_.push({value:span.value,start:newStart,end:newEnd});}});return result;}
trimLeft(){return this.trim_(true,false);}
trimRight(){return this.trim_(false,true);}
trim(){return this.trim_(true,true);}
trim_(trimStart,trimEnd){if(!trimStart&&!trimEnd){return this;}
if(/^\s*$/.test(this.string_)){return this.substring(0,0);}
const trimmedStart=trimStart?this.string_.match(/^\s*/)[0].length:0;const trimmedEnd=trimEnd?this.string_.match(/\s*$/).index:this.string_.length;return this.substring(trimmedStart,trimmedEnd);}
toJson(){const result={};result.string=this.string_;result.spans=[];this.spans_.forEach(function(span){const serializeInfo=serializableSpansByConstructor.get(span.value.constructor);if(serializeInfo){const spanObj={type:serializeInfo.name,start:span.start,end:span.end,};if(serializeInfo.toJson){spanObj.value=serializeInfo.toJson.apply(span.value);}
result.spans.push(spanObj);}});return result;}
static fromJson(obj){if(typeof obj.string!=='string'){throw new Error('Invalid spannable json object: string field not a string');}
if(!(obj.spans instanceof Array)){throw new Error('Invalid spannable json object: no spans array');}
const result=new Spannable(obj.string);result.spans_=obj.spans.map(function(span){if(typeof span.type!=='string'){throw new Error('Invalid span in spannable json object: type not a string');}
if(typeof span.start!=='number'||typeof span.end!=='number'){throw new Error('Invalid span in spannable json object: start or end not a number');}
const serializeInfo=serializableSpansByName.get(span.type);const value=serializeInfo.fromJson(span.value);return{value,start:span.start,end:span.end};});return result;}
static registerSerializableSpan(constructor,name,fromJson,toJson){const obj={name,fromJson,toJson};serializableSpansByName.set(name,obj);serializableSpansByConstructor.set(constructor,obj);}
static registerStatelessSerializableSpan(constructor,name){const obj={name,toJson:undefined};obj.fromJson=function(obj){return new constructor();};serializableSpansByName.set(name,obj);serializableSpansByConstructor.set(constructor,obj);}};MultiSpannable=class extends Spannable{constructor(opt_string,opt_annotation){super(opt_string,opt_annotation);}
setSpan(value,start,end){this.setSpanInternal(value,start,end);}
substring(start,opt_end){const ret=Spannable.prototype.substring.call(this,start,opt_end);return new MultiSpannable(ret);}};let SpanStruct;let SerializeInfo;let SerializedSpannable;let SerializedSpan;const serializableSpansByName=new Map();const serializableSpansByConstructor=new Map();function spanInstanceOf(constructor){return function(span){return span.value instanceof constructor;};}
function spanCoversPosition(position){return function(span){return span.start<=position&&position<span.end;};}
function spanValueIs(value){return function(span){return span.value===value;};}
function valueOfSpan(span){return span?span.value:undefined;}
goog.provide('QueueMode');goog.provide('TtsCapturingEventListener');goog.provide('TtsCategory');goog.provide('TtsInterface');TtsCategory={LIVE:'live',NAV:'nav',};QueueMode={INTERJECT:0,FLUSH:1,CATEGORY_FLUSH:2,QUEUE:3,};TtsCapturingEventListener=class{onTtsStart(){}
onTtsEnd(){}
onTtsInterrupted(){}};TtsInterface=class{constructor(){}
speak(textString,queueMode,properties){}
isSpeaking(){}
stop(){}
addCapturingEventListener(listener){}
removeCapturingEventListener(listener){}
increaseOrDecreaseProperty(propertyName,increase){}
propertyToPercentage(property){}
getDefaultProperty(property){}
toggleSpeechOnOrOff(){}
resetTextToSpeechSettings(){}};goog.provide('SimpleAutomationNode');goog.provide('TreeDumper');const AutomationNode=chrome.automation.AutomationNode;SimpleAutomationNode=class{constructor(node){this.name=node.name;this.role=node.role;this.value=node.value;this.url=node.url;this.location=Object.assign({},node.location);this.children=[];for(let i=0;i<node.children.length;i++){this.children.push(new SimpleAutomationNode(node.children[i]));}
this.logStr='';this.toString=function(){if(this.logStr.length){return this.logStr;}
if(node.name){this.logStr+='name='+node.name+' ';}
if(node.role){this.logStr+='role='+node.role+' ';}
if(node.value){this.logStr+='value='+node.value+' ';}
if(node.location){this.logStr+='location=('+node.location.left+', '+node.location.top+') ';this.logStr+='size=('+node.location.width+', '+node.location.height+') ';}
if(node.url){this.logStr+='url='+node.url+' ';}
return this.logStr;};}};TreeDumper=class{constructor(root){this.rootNode=new SimpleAutomationNode(root);this.treeStr_;}
treeToString(){if(!this.treeStr_){this.treeStr_=this.formatTree_();}
return this.treeStr_;}
createTreeRecursive_(node,rank){let nodeStr='';nodeStr+='++'.repeat(rank);nodeStr+=node.toString();nodeStr+='\n';for(let i=0;i<node.children.length;i++){const nextNode=node.children[i];nodeStr+=this.createTreeRecursive_(nextNode,rank+1);}
return nodeStr;}
formatTree_(){const treeStr=this.createTreeRecursive_(this.rootNode,0);return treeStr;}};goog.provide('BaseLog');goog.provide('EventLog');goog.provide('LogType');goog.provide('SpeechLog');goog.provide('TextLog');goog.provide('TreeLog');goog.require('QueueMode');goog.require('TreeDumper');LogType={SPEECH:'speech',SPEECH_RULE:'speechRule',BRAILLE:'braille',BRAILLE_RULE:'brailleRule',EARCON:'earcon',EVENT:'event',TEXT:'text',TREE:'tree',};BaseLog=class{constructor(logType){this.logType=logType;this.date=new Date();}
toString(){return'';}};EventLog=class extends BaseLog{constructor(event){super(LogType.EVENT);this.type_=event.type;this.targetName_=event.target.name;this.rootName_=event.target.root.name;this.docUrl_=event.target.docUrl;}
toString(){return`EventType = ${this.type_}, TargetName = ${this.targetName_}, `+`RootName = ${this.rootName_}, DocumentURL = ${this.docUrl_}`;}};SpeechLog=class extends BaseLog{constructor(textString,queueMode,category){super(LogType.SPEECH);this.textString_=textString;this.queueMode_=queueMode;this.category_=category;}
toString(){let logStr='Speak';if(this.queueMode_===QueueMode.FLUSH){logStr+=' (F)';}else if(this.queueMode_===QueueMode.CATEGORY_FLUSH){logStr+=' (C)';}else if(this.queueMode_===QueueMode.INTERJECT){logStr+=' (I)';}else{logStr+=' (Q)';}
if(this.category_){logStr+=' category='+this.category_;}
logStr+=' "'+this.textString_+'"';return logStr;}};TextLog=class extends BaseLog{constructor(logStr,logType){super(logType);this.logStr_=logStr;}
toString(){return this.logStr_;}};TreeLog=class extends BaseLog{constructor(logTree){super(LogType.TREE);this.logTree_=logTree;}
toString(){return this.logTree_.treeToString();}};goog.provide('constants');constants.Dir={FORWARD:'forward',BACKWARD:'backward',};constants.Point;constants.OBJECT_MAX_CHARCOUNT=1500;constants.SYSTEM_VOICE='chromeos_system_voice';constants.FOCUS_COLOR='#F7983A';constants.InteractionMedium={NONE:'none',KEYBOARD:'keyboard',TOUCH:'touch',BRAILLE:'braille',};goog.provide('goog.debug.Error');goog.debug.Error=function(opt_msg){if(Error.captureStackTrace){Error.captureStackTrace(this,goog.debug.Error);}else{var stack=new Error().stack;if(stack){this.stack=stack;}}
if(opt_msg){this.message=String(opt_msg);}};goog.inherits(goog.debug.Error,Error);goog.debug.Error.prototype.name='CustomError';goog.provide('goog.dom.NodeType');goog.dom.NodeType={ELEMENT:1,ATTRIBUTE:2,TEXT:3,CDATA_SECTION:4,ENTITY_REFERENCE:5,ENTITY:6,PROCESSING_INSTRUCTION:7,COMMENT:8,DOCUMENT:9,DOCUMENT_TYPE:10,DOCUMENT_FRAGMENT:11,NOTATION:12};goog.provide('goog.string');goog.string.subs=function(str,var_args){var splitParts=str.split('%s');var returnString='';var subsArguments=Array.prototype.slice.call(arguments,1);while(subsArguments.length&&splitParts.length>1){returnString+=splitParts.shift()+subsArguments.shift();}
return returnString+splitParts.join('%s');};goog.provide('goog.asserts');goog.provide('goog.asserts.AssertionError');goog.require('goog.debug.Error');goog.require('goog.dom.NodeType');goog.require('goog.string');goog.asserts.ENABLE_ASSERTS=goog.define('goog.asserts.ENABLE_ASSERTS',goog.DEBUG);goog.asserts.AssertionError=function(messagePattern,messageArgs){messageArgs.unshift(messagePattern);goog.debug.Error.call(this,goog.string.subs.apply(null,messageArgs));messageArgs.shift();this.messagePattern=messagePattern;};goog.inherits(goog.asserts.AssertionError,goog.debug.Error);goog.asserts.AssertionError.prototype.name='AssertionError';goog.asserts.doAssertFailure_=function(defaultMessage,defaultArgs,givenMessage,givenArgs){var message='Assertion failed';if(givenMessage){message+=': '+givenMessage;var args=givenArgs;}else if(defaultMessage){message+=': '+defaultMessage;args=defaultArgs;}
throw new goog.asserts.AssertionError(''+message,args||[]);};goog.asserts.assert=function(condition,opt_message,var_args){if(goog.asserts.ENABLE_ASSERTS&&!condition){goog.asserts.doAssertFailure_('',null,opt_message,Array.prototype.slice.call(arguments,2));}
return condition;};goog.asserts.fail=function(opt_message,var_args){if(goog.asserts.ENABLE_ASSERTS){throw new goog.asserts.AssertionError('Failure'+(opt_message?': '+opt_message:''),Array.prototype.slice.call(arguments,1));}};goog.asserts.assertNumber=function(value,opt_message,var_args){if(goog.asserts.ENABLE_ASSERTS&&!goog.isNumber(value)){goog.asserts.doAssertFailure_('Expected number but got %s: %s.',[goog.typeOf(value),value],opt_message,Array.prototype.slice.call(arguments,2));}
return(value);};goog.asserts.assertString=function(value,opt_message,var_args){if(goog.asserts.ENABLE_ASSERTS&&!goog.isString(value)){goog.asserts.doAssertFailure_('Expected string but got %s: %s.',[goog.typeOf(value),value],opt_message,Array.prototype.slice.call(arguments,2));}
return(value);};goog.asserts.assertFunction=function(value,opt_message,var_args){if(goog.asserts.ENABLE_ASSERTS&&!goog.isFunction(value)){goog.asserts.doAssertFailure_('Expected function but got %s: %s.',[goog.typeOf(value),value],opt_message,Array.prototype.slice.call(arguments,2));}
return(value);};goog.asserts.assertObject=function(value,opt_message,var_args){if(goog.asserts.ENABLE_ASSERTS&&!goog.isObject(value)){goog.asserts.doAssertFailure_('Expected object but got %s: %s.',[goog.typeOf(value),value],opt_message,Array.prototype.slice.call(arguments,2));}
return(value);};goog.asserts.assertArray=function(value,opt_message,var_args){if(goog.asserts.ENABLE_ASSERTS&&!goog.isArray(value)){goog.asserts.doAssertFailure_('Expected array but got %s: %s.',[goog.typeOf(value),value],opt_message,Array.prototype.slice.call(arguments,2));}
return(value);};goog.asserts.assertBoolean=function(value,opt_message,var_args){if(goog.asserts.ENABLE_ASSERTS&&!goog.isBoolean(value)){goog.asserts.doAssertFailure_('Expected boolean but got %s: %s.',[goog.typeOf(value),value],opt_message,Array.prototype.slice.call(arguments,2));}
return(value);};goog.asserts.assertElement=function(value,opt_message,var_args){if(goog.asserts.ENABLE_ASSERTS&&(!goog.isObject(value)||value.nodeType!=goog.dom.NodeType.ELEMENT)){goog.asserts.doAssertFailure_('Expected Element but got %s: %s.',[goog.typeOf(value),value],opt_message,Array.prototype.slice.call(arguments,2));}
return(value);};goog.asserts.assertInstanceof=function(value,type,opt_message,var_args){if(goog.asserts.ENABLE_ASSERTS&&!(value instanceof type)){goog.asserts.doAssertFailure_('instanceof check failed.',null,opt_message,Array.prototype.slice.call(arguments,3));}
return value;};goog.asserts.assertObjectPrototypeIsIntact=function(){for(var key in Object.prototype){goog.asserts.fail(key+' should not be enumerable in Object.prototype.');}};goog.provide('goog.i18n.ordinalRules');goog.i18n.ordinalRules.Keyword={ZERO:'zero',ONE:'one',TWO:'two',FEW:'few',MANY:'many',OTHER:'other'};goog.i18n.ordinalRules.defaultSelect_=function(n,opt_precision){return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.decimals_=function(n){var str=n+'';var result=str.indexOf('.');return(result==-1)?0:str.length-result-1;};goog.i18n.ordinalRules.get_vf_=function(n,opt_precision){var DEFAULT_DIGITS=3;if(undefined===opt_precision){var v=Math.min(goog.i18n.ordinalRules.decimals_(n),DEFAULT_DIGITS);}else{var v=opt_precision;}
var base=Math.pow(10,v);var f=((n*base)|0)%base;return{v:v,f:f};};goog.i18n.ordinalRules.get_wt_=function(v,f){if(f===0){return{w:0,t:0};}
while((f%10)===0){f/=10;v--;}
return{w:v,t:f};};goog.i18n.ordinalRules.enSelect_=function(n,opt_precision){if(n%10==1&&n%100!=11){return goog.i18n.ordinalRules.Keyword.ONE;}
if(n%10==2&&n%100!=12){return goog.i18n.ordinalRules.Keyword.TWO;}
if(n%10==3&&n%100!=13){return goog.i18n.ordinalRules.Keyword.FEW;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.svSelect_=function(n,opt_precision){if((n%10==1||n%10==2)&&n%100!=11&&n%100!=12){return goog.i18n.ordinalRules.Keyword.ONE;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.huSelect_=function(n,opt_precision){if(n==1||n==5){return goog.i18n.ordinalRules.Keyword.ONE;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.kkSelect_=function(n,opt_precision){if(n%10==6||n%10==9||n%10==0&&n!=0){return goog.i18n.ordinalRules.Keyword.MANY;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.mrSelect_=function(n,opt_precision){if(n==1){return goog.i18n.ordinalRules.Keyword.ONE;}
if(n==2||n==3){return goog.i18n.ordinalRules.Keyword.TWO;}
if(n==4){return goog.i18n.ordinalRules.Keyword.FEW;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.sqSelect_=function(n,opt_precision){if(n==1){return goog.i18n.ordinalRules.Keyword.ONE;}
if(n%10==4&&n%100!=14){return goog.i18n.ordinalRules.Keyword.MANY;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.bnSelect_=function(n,opt_precision){if(n==1||n==5||n==7||n==8||n==9||n==10){return goog.i18n.ordinalRules.Keyword.ONE;}
if(n==2||n==3){return goog.i18n.ordinalRules.Keyword.TWO;}
if(n==4){return goog.i18n.ordinalRules.Keyword.FEW;}
if(n==6){return goog.i18n.ordinalRules.Keyword.MANY;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.guSelect_=function(n,opt_precision){if(n==1){return goog.i18n.ordinalRules.Keyword.ONE;}
if(n==2||n==3){return goog.i18n.ordinalRules.Keyword.TWO;}
if(n==4){return goog.i18n.ordinalRules.Keyword.FEW;}
if(n==6){return goog.i18n.ordinalRules.Keyword.MANY;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.kaSelect_=function(n,opt_precision){var i=n|0;if(i==1){return goog.i18n.ordinalRules.Keyword.ONE;}
if(i==0||(i%100>=2&&i%100<=20||i%100==40||i%100==60||i%100==80)){return goog.i18n.ordinalRules.Keyword.MANY;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.frSelect_=function(n,opt_precision){if(n==1){return goog.i18n.ordinalRules.Keyword.ONE;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.neSelect_=function(n,opt_precision){if(n>=1&&n<=4){return goog.i18n.ordinalRules.Keyword.ONE;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.cySelect_=function(n,opt_precision){if(n==0||n==7||n==8||n==9){return goog.i18n.ordinalRules.Keyword.ZERO;}
if(n==1){return goog.i18n.ordinalRules.Keyword.ONE;}
if(n==2){return goog.i18n.ordinalRules.Keyword.TWO;}
if(n==3||n==4){return goog.i18n.ordinalRules.Keyword.FEW;}
if(n==5||n==6){return goog.i18n.ordinalRules.Keyword.MANY;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.azSelect_=function(n,opt_precision){var i=n|0;if((i%10==1||i%10==2||i%10==5||i%10==7||i%10==8)||(i%100==20||i%100==50||i%100==70||i%100==80)){return goog.i18n.ordinalRules.Keyword.ONE;}
if((i%10==3||i%10==4)||(i%1000==100||i%1000==200||i%1000==300||i%1000==400||i%1000==500||i%1000==600||i%1000==700||i%1000==800||i%1000==900)){return goog.i18n.ordinalRules.Keyword.FEW;}
if(i==0||i%10==6||(i%100==40||i%100==60||i%100==90)){return goog.i18n.ordinalRules.Keyword.MANY;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.caSelect_=function(n,opt_precision){if(n==1||n==3){return goog.i18n.ordinalRules.Keyword.ONE;}
if(n==2){return goog.i18n.ordinalRules.Keyword.TWO;}
if(n==4){return goog.i18n.ordinalRules.Keyword.FEW;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.itSelect_=function(n,opt_precision){if(n==11||n==8||n==80||n==800){return goog.i18n.ordinalRules.Keyword.MANY;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.mkSelect_=function(n,opt_precision){var i=n|0;if(i%10==1&&i%100!=11){return goog.i18n.ordinalRules.Keyword.ONE;}
if(i%10==2&&i%100!=12){return goog.i18n.ordinalRules.Keyword.TWO;}
if((i%10==7||i%10==8)&&i%100!=17&&i%100!=18){return goog.i18n.ordinalRules.Keyword.MANY;}
return goog.i18n.ordinalRules.Keyword.OTHER;};goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.enSelect_;if(goog.LOCALE=='af'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='am'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ar'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='az'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.azSelect_;}
if(goog.LOCALE=='bg'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='bn'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.bnSelect_;}
if(goog.LOCALE=='br'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ca'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.caSelect_;}
if(goog.LOCALE=='chr'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='cs'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='cy'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.cySelect_;}
if(goog.LOCALE=='da'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='de'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='de_AT'||goog.LOCALE=='de-AT'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='de_CH'||goog.LOCALE=='de-CH'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='el'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='en'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.enSelect_;}
if(goog.LOCALE=='en_AU'||goog.LOCALE=='en-AU'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.enSelect_;}
if(goog.LOCALE=='en_GB'||goog.LOCALE=='en-GB'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.enSelect_;}
if(goog.LOCALE=='en_IE'||goog.LOCALE=='en-IE'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.enSelect_;}
if(goog.LOCALE=='en_IN'||goog.LOCALE=='en-IN'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.enSelect_;}
if(goog.LOCALE=='en_ISO'||goog.LOCALE=='en-ISO'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.enSelect_;}
if(goog.LOCALE=='en_SG'||goog.LOCALE=='en-SG'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.enSelect_;}
if(goog.LOCALE=='en_US'||goog.LOCALE=='en-US'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.enSelect_;}
if(goog.LOCALE=='en_ZA'||goog.LOCALE=='en-ZA'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.enSelect_;}
if(goog.LOCALE=='es'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='es_419'||goog.LOCALE=='es-419'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='es_ES'||goog.LOCALE=='es-ES'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='et'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='eu'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='fa'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='fi'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='fil'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.frSelect_;}
if(goog.LOCALE=='fr'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.frSelect_;}
if(goog.LOCALE=='fr_CA'||goog.LOCALE=='fr-CA'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.frSelect_;}
if(goog.LOCALE=='gl'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='gsw'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='gu'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.guSelect_;}
if(goog.LOCALE=='haw'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='he'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='hi'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.guSelect_;}
if(goog.LOCALE=='hr'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='hu'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.huSelect_;}
if(goog.LOCALE=='hy'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.frSelect_;}
if(goog.LOCALE=='id'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='in'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='is'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='it'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.itSelect_;}
if(goog.LOCALE=='iw'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ja'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ka'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.kaSelect_;}
if(goog.LOCALE=='kk'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.kkSelect_;}
if(goog.LOCALE=='km'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='kn'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ko'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ky'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ln'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='lo'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.frSelect_;}
if(goog.LOCALE=='lt'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='lv'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='mk'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.mkSelect_;}
if(goog.LOCALE=='ml'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='mn'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='mo'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.frSelect_;}
if(goog.LOCALE=='mr'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.mrSelect_;}
if(goog.LOCALE=='ms'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.frSelect_;}
if(goog.LOCALE=='mt'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='my'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='nb'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ne'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.neSelect_;}
if(goog.LOCALE=='nl'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='no'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='no_NO'||goog.LOCALE=='no-NO'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='or'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='pa'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='pl'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='pt'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='pt_BR'||goog.LOCALE=='pt-BR'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='pt_PT'||goog.LOCALE=='pt-PT'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ro'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.frSelect_;}
if(goog.LOCALE=='ru'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='sh'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='si'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='sk'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='sl'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='sq'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.sqSelect_;}
if(goog.LOCALE=='sr'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='sv'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.svSelect_;}
if(goog.LOCALE=='sw'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ta'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='te'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='th'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='tl'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.frSelect_;}
if(goog.LOCALE=='tr'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='uk'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='ur'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='uz'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='vi'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.frSelect_;}
if(goog.LOCALE=='zh'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='zh_CN'||goog.LOCALE=='zh-CN'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='zh_HK'||goog.LOCALE=='zh-HK'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='zh_TW'||goog.LOCALE=='zh-TW'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
if(goog.LOCALE=='zu'){goog.i18n.ordinalRules.select=goog.i18n.ordinalRules.defaultSelect_;}
goog.provide('goog.i18n.pluralRules');goog.i18n.pluralRules.Keyword={ZERO:'zero',ONE:'one',TWO:'two',FEW:'few',MANY:'many',OTHER:'other'};goog.i18n.pluralRules.defaultSelect_=function(n,opt_precision){return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.decimals_=function(n){var str=n+'';var result=str.indexOf('.');return(result==-1)?0:str.length-result-1;};goog.i18n.pluralRules.get_vf_=function(n,opt_precision){var DEFAULT_DIGITS=3;if(undefined===opt_precision){var v=Math.min(goog.i18n.pluralRules.decimals_(n),DEFAULT_DIGITS);}else{var v=opt_precision;}
var base=Math.pow(10,v);var f=((n*base)|0)%base;return{v:v,f:f};};goog.i18n.pluralRules.get_wt_=function(v,f){if(f===0){return{w:0,t:0};}
while((f%10)===0){f/=10;v--;}
return{w:v,t:f};};goog.i18n.pluralRules.gaSelect_=function(n,opt_precision){if(n==1){return goog.i18n.pluralRules.Keyword.ONE;}
if(n==2){return goog.i18n.pluralRules.Keyword.TWO;}
if(n>=3&&n<=6){return goog.i18n.pluralRules.Keyword.FEW;}
if(n>=7&&n<=10){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.roSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(i==1&&vf.v==0){return goog.i18n.pluralRules.Keyword.ONE;}
if(vf.v!=0||n==0||n!=1&&n%100>=1&&n%100<=19){return goog.i18n.pluralRules.Keyword.FEW;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.filSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(vf.v==0&&(i==1||i==2||i==3)||vf.v==0&&i%10!=4&&i%10!=6&&i%10!=9||vf.v!=0&&vf.f%10!=4&&vf.f%10!=6&&vf.f%10!=9){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.frSelect_=function(n,opt_precision){var i=n|0;if(i==0||i==1){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.enSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(i==1&&vf.v==0){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.mtSelect_=function(n,opt_precision){if(n==1){return goog.i18n.pluralRules.Keyword.ONE;}
if(n==0||n%100>=2&&n%100<=10){return goog.i18n.pluralRules.Keyword.FEW;}
if(n%100>=11&&n%100<=19){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.daSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);var wt=goog.i18n.pluralRules.get_wt_(vf.v,vf.f);if(n==1||wt.t!=0&&(i==0||i==1)){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.gvSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(vf.v==0&&i%10==1){return goog.i18n.pluralRules.Keyword.ONE;}
if(vf.v==0&&i%10==2){return goog.i18n.pluralRules.Keyword.TWO;}
if(vf.v==0&&(i%100==0||i%100==20||i%100==40||i%100==60||i%100==80)){return goog.i18n.pluralRules.Keyword.FEW;}
if(vf.v!=0){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.cySelect_=function(n,opt_precision){if(n==0){return goog.i18n.pluralRules.Keyword.ZERO;}
if(n==1){return goog.i18n.pluralRules.Keyword.ONE;}
if(n==2){return goog.i18n.pluralRules.Keyword.TWO;}
if(n==3){return goog.i18n.pluralRules.Keyword.FEW;}
if(n==6){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.brSelect_=function(n,opt_precision){if(n%10==1&&n%100!=11&&n%100!=71&&n%100!=91){return goog.i18n.pluralRules.Keyword.ONE;}
if(n%10==2&&n%100!=12&&n%100!=72&&n%100!=92){return goog.i18n.pluralRules.Keyword.TWO;}
if((n%10>=3&&n%10<=4||n%10==9)&&(n%100<10||n%100>19)&&(n%100<70||n%100>79)&&(n%100<90||n%100>99)){return goog.i18n.pluralRules.Keyword.FEW;}
if(n!=0&&n%1000000==0){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.esSelect_=function(n,opt_precision){if(n==1){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.siSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if((n==0||n==1)||i==0&&vf.f==1){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.slSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(vf.v==0&&i%100==1){return goog.i18n.pluralRules.Keyword.ONE;}
if(vf.v==0&&i%100==2){return goog.i18n.pluralRules.Keyword.TWO;}
if(vf.v==0&&i%100>=3&&i%100<=4||vf.v!=0){return goog.i18n.pluralRules.Keyword.FEW;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.tzmSelect_=function(n,opt_precision){if(n>=0&&n<=1||n>=11&&n<=99){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.srSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(vf.v==0&&i%10==1&&i%100!=11||vf.f%10==1&&vf.f%100!=11){return goog.i18n.pluralRules.Keyword.ONE;}
if(vf.v==0&&i%10>=2&&i%10<=4&&(i%100<12||i%100>14)||vf.f%10>=2&&vf.f%10<=4&&(vf.f%100<12||vf.f%100>14)){return goog.i18n.pluralRules.Keyword.FEW;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.hiSelect_=function(n,opt_precision){var i=n|0;if(i==0||n==1){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.mkSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(vf.v==0&&i%10==1||vf.f%10==1){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.arSelect_=function(n,opt_precision){if(n==0){return goog.i18n.pluralRules.Keyword.ZERO;}
if(n==1){return goog.i18n.pluralRules.Keyword.ONE;}
if(n==2){return goog.i18n.pluralRules.Keyword.TWO;}
if(n%100>=3&&n%100<=10){return goog.i18n.pluralRules.Keyword.FEW;}
if(n%100>=11&&n%100<=99){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.iuSelect_=function(n,opt_precision){if(n==1){return goog.i18n.pluralRules.Keyword.ONE;}
if(n==2){return goog.i18n.pluralRules.Keyword.TWO;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.csSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(i==1&&vf.v==0){return goog.i18n.pluralRules.Keyword.ONE;}
if(i>=2&&i<=4&&vf.v==0){return goog.i18n.pluralRules.Keyword.FEW;}
if(vf.v!=0){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.pt_PTSelect_=function(n,opt_precision){var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(n==1&&vf.v==0){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.beSelect_=function(n,opt_precision){if(n%10==1&&n%100!=11){return goog.i18n.pluralRules.Keyword.ONE;}
if(n%10>=2&&n%10<=4&&(n%100<12||n%100>14)){return goog.i18n.pluralRules.Keyword.FEW;}
if(n%10==0||n%10>=5&&n%10<=9||n%100>=11&&n%100<=14){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.akSelect_=function(n,opt_precision){if(n>=0&&n<=1){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.ptSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);var wt=goog.i18n.pluralRules.get_wt_(vf.v,vf.f);if(i==1&&vf.v==0||i==0&&wt.t==1){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.plSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(i==1&&vf.v==0){return goog.i18n.pluralRules.Keyword.ONE;}
if(vf.v==0&&i%10>=2&&i%10<=4&&(i%100<12||i%100>14)){return goog.i18n.pluralRules.Keyword.FEW;}
if(vf.v==0&&i!=1&&i%10>=0&&i%10<=1||vf.v==0&&i%10>=5&&i%10<=9||vf.v==0&&i%100>=12&&i%100<=14){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.ruSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(vf.v==0&&i%10==1&&i%100!=11){return goog.i18n.pluralRules.Keyword.ONE;}
if(vf.v==0&&i%10>=2&&i%10<=4&&(i%100<12||i%100>14)){return goog.i18n.pluralRules.Keyword.FEW;}
if(vf.v==0&&i%10==0||vf.v==0&&i%10>=5&&i%10<=9||vf.v==0&&i%100>=11&&i%100<=14){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.lagSelect_=function(n,opt_precision){var i=n|0;if(n==0){return goog.i18n.pluralRules.Keyword.ZERO;}
if((i==0||i==1)&&n!=0){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.shiSelect_=function(n,opt_precision){var i=n|0;if(i==0||n==1){return goog.i18n.pluralRules.Keyword.ONE;}
if(n>=2&&n<=10){return goog.i18n.pluralRules.Keyword.FEW;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.heSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(i==1&&vf.v==0){return goog.i18n.pluralRules.Keyword.ONE;}
if(i==2&&vf.v==0){return goog.i18n.pluralRules.Keyword.TWO;}
if(vf.v==0&&(n<0||n>10)&&n%10==0){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.isSelect_=function(n,opt_precision){var i=n|0;var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);var wt=goog.i18n.pluralRules.get_wt_(vf.v,vf.f);if(wt.t==0&&i%10==1&&i%100!=11||wt.t!=0){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.ltSelect_=function(n,opt_precision){var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(n%10==1&&(n%100<11||n%100>19)){return goog.i18n.pluralRules.Keyword.ONE;}
if(n%10>=2&&n%10<=9&&(n%100<11||n%100>19)){return goog.i18n.pluralRules.Keyword.FEW;}
if(vf.f!=0){return goog.i18n.pluralRules.Keyword.MANY;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.gdSelect_=function(n,opt_precision){if(n==1||n==11){return goog.i18n.pluralRules.Keyword.ONE;}
if(n==2||n==12){return goog.i18n.pluralRules.Keyword.TWO;}
if(n>=3&&n<=10||n>=13&&n<=19){return goog.i18n.pluralRules.Keyword.FEW;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.lvSelect_=function(n,opt_precision){var vf=goog.i18n.pluralRules.get_vf_(n,opt_precision);if(n%10==0||n%100>=11&&n%100<=19||vf.v==2&&vf.f%100>=11&&vf.f%100<=19){return goog.i18n.pluralRules.Keyword.ZERO;}
if(n%10==1&&n%100!=11||vf.v==2&&vf.f%10==1&&vf.f%100!=11||vf.v!=2&&vf.f%10==1){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.kshSelect_=function(n,opt_precision){if(n==0){return goog.i18n.pluralRules.Keyword.ZERO;}
if(n==1){return goog.i18n.pluralRules.Keyword.ONE;}
return goog.i18n.pluralRules.Keyword.OTHER;};goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;if(goog.LOCALE=='af'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='am'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.hiSelect_;}
if(goog.LOCALE=='ar'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.arSelect_;}
if(goog.LOCALE=='az'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='bg'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='bn'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.hiSelect_;}
if(goog.LOCALE=='br'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.brSelect_;}
if(goog.LOCALE=='ca'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='chr'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='cs'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.csSelect_;}
if(goog.LOCALE=='cy'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.cySelect_;}
if(goog.LOCALE=='da'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.daSelect_;}
if(goog.LOCALE=='de'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='de_AT'||goog.LOCALE=='de-AT'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='de_CH'||goog.LOCALE=='de-CH'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='el'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='en'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='en_AU'||goog.LOCALE=='en-AU'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='en_GB'||goog.LOCALE=='en-GB'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='en_IE'||goog.LOCALE=='en-IE'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='en_IN'||goog.LOCALE=='en-IN'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='en_ISO'||goog.LOCALE=='en-ISO'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='en_SG'||goog.LOCALE=='en-SG'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='en_US'||goog.LOCALE=='en-US'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='en_ZA'||goog.LOCALE=='en-ZA'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='es'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='es_419'||goog.LOCALE=='es-419'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='es_ES'||goog.LOCALE=='es-ES'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='et'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='eu'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='fa'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.hiSelect_;}
if(goog.LOCALE=='fi'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='fil'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.filSelect_;}
if(goog.LOCALE=='fr'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.frSelect_;}
if(goog.LOCALE=='fr_CA'||goog.LOCALE=='fr-CA'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.frSelect_;}
if(goog.LOCALE=='gl'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='gsw'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='gu'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.hiSelect_;}
if(goog.LOCALE=='haw'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='he'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.heSelect_;}
if(goog.LOCALE=='hi'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.hiSelect_;}
if(goog.LOCALE=='hr'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.srSelect_;}
if(goog.LOCALE=='hu'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='hy'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.frSelect_;}
if(goog.LOCALE=='id'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='in'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='is'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.isSelect_;}
if(goog.LOCALE=='it'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='iw'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.heSelect_;}
if(goog.LOCALE=='ja'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='ka'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='kk'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='km'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='kn'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.hiSelect_;}
if(goog.LOCALE=='ko'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='ky'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='ln'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.akSelect_;}
if(goog.LOCALE=='lo'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='lt'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.ltSelect_;}
if(goog.LOCALE=='lv'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.lvSelect_;}
if(goog.LOCALE=='mk'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.mkSelect_;}
if(goog.LOCALE=='ml'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='mn'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='mo'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.roSelect_;}
if(goog.LOCALE=='mr'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.hiSelect_;}
if(goog.LOCALE=='ms'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='mt'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.mtSelect_;}
if(goog.LOCALE=='my'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='nb'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='ne'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='nl'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='no'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='no_NO'||goog.LOCALE=='no-NO'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='or'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='pa'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.akSelect_;}
if(goog.LOCALE=='pl'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.plSelect_;}
if(goog.LOCALE=='pt'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.ptSelect_;}
if(goog.LOCALE=='pt_BR'||goog.LOCALE=='pt-BR'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.ptSelect_;}
if(goog.LOCALE=='pt_PT'||goog.LOCALE=='pt-PT'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.pt_PTSelect_;}
if(goog.LOCALE=='ro'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.roSelect_;}
if(goog.LOCALE=='ru'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.ruSelect_;}
if(goog.LOCALE=='sh'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.srSelect_;}
if(goog.LOCALE=='si'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.siSelect_;}
if(goog.LOCALE=='sk'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.csSelect_;}
if(goog.LOCALE=='sl'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.slSelect_;}
if(goog.LOCALE=='sq'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='sr'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.srSelect_;}
if(goog.LOCALE=='sv'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='sw'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='ta'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='te'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='th'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='tl'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.filSelect_;}
if(goog.LOCALE=='tr'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='uk'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.ruSelect_;}
if(goog.LOCALE=='ur'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.enSelect_;}
if(goog.LOCALE=='uz'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.esSelect_;}
if(goog.LOCALE=='vi'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='zh'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='zh_CN'||goog.LOCALE=='zh-CN'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='zh_HK'||goog.LOCALE=='zh-HK'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='zh_TW'||goog.LOCALE=='zh-TW'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.defaultSelect_;}
if(goog.LOCALE=='zu'){goog.i18n.pluralRules.select=goog.i18n.pluralRules.hiSelect_;}
goog.provide('goog.i18n.MessageFormat');goog.require('goog.asserts');goog.require('goog.i18n.ordinalRules');goog.require('goog.i18n.pluralRules');goog.i18n.MessageFormat=function(pattern){this.literals_=[];this.parsedPattern_=[];this.parsePattern_(pattern);};goog.i18n.MessageFormat.LITERAL_PLACEHOLDER_='\uFDDF_';goog.i18n.MessageFormat.Element_={STRING:0,BLOCK:1};goog.i18n.MessageFormat.BlockType_={PLURAL:0,ORDINAL:1,SELECT:2,SIMPLE:3,STRING:4,UNKNOWN:5};goog.i18n.MessageFormat.OTHER_='other';goog.i18n.MessageFormat.REGEX_LITERAL_=new RegExp("'([{}#].*?)'",'g');goog.i18n.MessageFormat.REGEX_DOUBLE_APOSTROPHE_=new RegExp("''",'g');goog.i18n.MessageFormat.prototype.format=function(namedParameters){return this.format_(namedParameters,false);};goog.i18n.MessageFormat.prototype.formatIgnoringPound=function(namedParameters){return this.format_(namedParameters,true);};goog.i18n.MessageFormat.prototype.format_=function(namedParameters,ignorePound){if(this.parsedPattern_.length==0){return'';}
var result=[];this.formatBlock_(this.parsedPattern_,namedParameters,ignorePound,result);var message=result.join('');if(!ignorePound){goog.asserts.assert(message.search('#')==-1,'Not all # were replaced.');}
while(this.literals_.length>0){message=message.replace(this.buildPlaceholder_(this.literals_),this.literals_.pop());}
return message;};goog.i18n.MessageFormat.prototype.formatBlock_=function(parsedPattern,namedParameters,ignorePound,result){for(var i=0;i<parsedPattern.length;i++){switch(parsedPattern[i].type){case goog.i18n.MessageFormat.BlockType_.STRING:result.push(parsedPattern[i].value);break;case goog.i18n.MessageFormat.BlockType_.SIMPLE:var pattern=parsedPattern[i].value;this.formatSimplePlaceholder_(pattern,namedParameters,result);break;case goog.i18n.MessageFormat.BlockType_.SELECT:var pattern=parsedPattern[i].value;this.formatSelectBlock_(pattern,namedParameters,ignorePound,result);break;case goog.i18n.MessageFormat.BlockType_.PLURAL:var pattern=parsedPattern[i].value;this.formatPluralOrdinalBlock_(pattern,namedParameters,goog.i18n.pluralRules.select,ignorePound,result);break;case goog.i18n.MessageFormat.BlockType_.ORDINAL:var pattern=parsedPattern[i].value;this.formatPluralOrdinalBlock_(pattern,namedParameters,goog.i18n.ordinalRules.select,ignorePound,result);break;default:goog.asserts.fail('Unrecognized block type.');}}};goog.i18n.MessageFormat.prototype.formatSimplePlaceholder_=function(parsedPattern,namedParameters,result){var value=namedParameters[parsedPattern];if(!goog.isDef(value)){result.push('Undefined parameter - '+parsedPattern);return;}
this.literals_.push(value);result.push(this.buildPlaceholder_(this.literals_));};goog.i18n.MessageFormat.prototype.formatSelectBlock_=function(parsedPattern,namedParameters,ignorePound,result){var argumentIndex=parsedPattern.argumentIndex;if(!goog.isDef(namedParameters[argumentIndex])){result.push('Undefined parameter - '+argumentIndex);return;}
var option=parsedPattern[namedParameters[argumentIndex]];if(!goog.isDef(option)){option=parsedPattern[goog.i18n.MessageFormat.OTHER_];goog.asserts.assertArray(option,'Invalid option or missing other option for select block.');}
this.formatBlock_(option,namedParameters,ignorePound,result);};goog.i18n.MessageFormat.prototype.formatPluralOrdinalBlock_=function(parsedPattern,namedParameters,pluralSelector,ignorePound,result){var argumentIndex=parsedPattern.argumentIndex;var argumentOffset=parsedPattern.argumentOffset;var pluralValue=+namedParameters[argumentIndex];if(isNaN(pluralValue)){result.push('Undefined or invalid parameter - '+argumentIndex);return;}
var diff=pluralValue-argumentOffset;var option=parsedPattern[namedParameters[argumentIndex]];if(!goog.isDef(option)){goog.asserts.assert(diff>=0,'Argument index smaller than offset.');var item;item=pluralSelector(diff);goog.asserts.assertString(item,'Invalid plural key.');option=parsedPattern[item];if(!goog.isDef(option)){option=parsedPattern[goog.i18n.MessageFormat.OTHER_];}
goog.asserts.assertArray(option,'Invalid option or missing other option for plural block.');}
var pluralResult=[];this.formatBlock_(option,namedParameters,ignorePound,pluralResult);var plural=pluralResult.join('');goog.asserts.assertString(plural,'Empty block in plural.');if(ignorePound){result.push(plural);}else{var localeAwareDiff=diff.toLocaleString();result.push(plural.replace(/#/g,localeAwareDiff));}};goog.i18n.MessageFormat.prototype.parsePattern_=function(pattern){if(pattern){pattern=this.insertPlaceholders_(pattern);this.parsedPattern_=this.parseBlock_(pattern);}};goog.i18n.MessageFormat.prototype.insertPlaceholders_=function(pattern){var literals=this.literals_;var buildPlaceholder=goog.bind(this.buildPlaceholder_,this);pattern=pattern.replace(goog.i18n.MessageFormat.REGEX_DOUBLE_APOSTROPHE_,function(){literals.push("'");return buildPlaceholder(literals);});pattern=pattern.replace(goog.i18n.MessageFormat.REGEX_LITERAL_,function(match,text){literals.push(text);return buildPlaceholder(literals);});return pattern;};goog.i18n.MessageFormat.prototype.extractParts_=function(pattern){var prevPos=0;var inBlock=false;var braceStack=[];var results=[];var braces=/[{}]/g;braces.lastIndex=0;var match;while(match=braces.exec(pattern)){var pos=match.index;if(match[0]=='}'){var brace=braceStack.pop();goog.asserts.assert(goog.isDef(brace)&&brace=='{','No matching { for }.');if(braceStack.length==0){var part={};part.type=goog.i18n.MessageFormat.Element_.BLOCK;part.value=pattern.substring(prevPos,pos);results.push(part);prevPos=pos+1;inBlock=false;}}else{if(braceStack.length==0){inBlock=true;var substring=pattern.substring(prevPos,pos);if(substring!=''){results.push({type:goog.i18n.MessageFormat.Element_.STRING,value:substring});}
prevPos=pos+1;}
braceStack.push('{');}}
goog.asserts.assert(braceStack.length==0,'There are mismatched { or } in the pattern.');var substring=pattern.substring(prevPos);if(substring!=''){results.push({type:goog.i18n.MessageFormat.Element_.STRING,value:substring});}
return results;};goog.i18n.MessageFormat.PLURAL_BLOCK_RE_=/^\s*(\w+)\s*,\s*plural\s*,(?:\s*offset:(\d+))?/;goog.i18n.MessageFormat.ORDINAL_BLOCK_RE_=/^\s*(\w+)\s*,\s*selectordinal\s*,/;goog.i18n.MessageFormat.SELECT_BLOCK_RE_=/^\s*(\w+)\s*,\s*select\s*,/;goog.i18n.MessageFormat.prototype.parseBlockType_=function(pattern){if(goog.i18n.MessageFormat.PLURAL_BLOCK_RE_.test(pattern)){return goog.i18n.MessageFormat.BlockType_.PLURAL;}
if(goog.i18n.MessageFormat.ORDINAL_BLOCK_RE_.test(pattern)){return goog.i18n.MessageFormat.BlockType_.ORDINAL;}
if(goog.i18n.MessageFormat.SELECT_BLOCK_RE_.test(pattern)){return goog.i18n.MessageFormat.BlockType_.SELECT;}
if(/^\s*\w+\s*/.test(pattern)){return goog.i18n.MessageFormat.BlockType_.SIMPLE;}
return goog.i18n.MessageFormat.BlockType_.UNKNOWN;};goog.i18n.MessageFormat.prototype.parseBlock_=function(pattern){var result=[];var parts=this.extractParts_(pattern);for(var i=0;i<parts.length;i++){var block={};if(goog.i18n.MessageFormat.Element_.STRING==parts[i].type){block.type=goog.i18n.MessageFormat.BlockType_.STRING;block.value=parts[i].value;}else if(goog.i18n.MessageFormat.Element_.BLOCK==parts[i].type){var blockType=this.parseBlockType_(parts[i].value);switch(blockType){case goog.i18n.MessageFormat.BlockType_.SELECT:block.type=goog.i18n.MessageFormat.BlockType_.SELECT;block.value=this.parseSelectBlock_(parts[i].value);break;case goog.i18n.MessageFormat.BlockType_.PLURAL:block.type=goog.i18n.MessageFormat.BlockType_.PLURAL;block.value=this.parsePluralBlock_(parts[i].value);break;case goog.i18n.MessageFormat.BlockType_.ORDINAL:block.type=goog.i18n.MessageFormat.BlockType_.ORDINAL;block.value=this.parseOrdinalBlock_(parts[i].value);break;case goog.i18n.MessageFormat.BlockType_.SIMPLE:block.type=goog.i18n.MessageFormat.BlockType_.SIMPLE;block.value=parts[i].value;break;default:goog.asserts.fail('Unknown block type.');}}else{goog.asserts.fail('Unknown part of the pattern.');}
result.push(block);}
return result;};goog.i18n.MessageFormat.prototype.parseSelectBlock_=function(pattern){var argumentIndex='';var replaceRegex=goog.i18n.MessageFormat.SELECT_BLOCK_RE_;pattern=pattern.replace(replaceRegex,function(string,name){argumentIndex=name;return'';});var result={};result.argumentIndex=argumentIndex;var parts=this.extractParts_(pattern);var pos=0;while(pos<parts.length){var key=parts[pos].value;goog.asserts.assertString(key,'Missing select key element.');pos++;goog.asserts.assert(pos<parts.length,'Missing or invalid select value element.');if(goog.i18n.MessageFormat.Element_.BLOCK==parts[pos].type){var value=this.parseBlock_(parts[pos].value);}else{goog.asserts.fail('Expected block type.');}
result[key.replace(/\s/g,'')]=value;pos++;}
goog.asserts.assertArray(result[goog.i18n.MessageFormat.OTHER_],'Missing other key in select statement.');return result;};goog.i18n.MessageFormat.prototype.parsePluralBlock_=function(pattern){var argumentIndex='';var argumentOffset=0;var replaceRegex=goog.i18n.MessageFormat.PLURAL_BLOCK_RE_;pattern=pattern.replace(replaceRegex,function(string,name,offset){argumentIndex=name;if(offset){argumentOffset=parseInt(offset,10);}
return'';});var result={};result.argumentIndex=argumentIndex;result.argumentOffset=argumentOffset;var parts=this.extractParts_(pattern);var pos=0;while(pos<parts.length){var key=parts[pos].value;goog.asserts.assertString(key,'Missing plural key element.');pos++;goog.asserts.assert(pos<parts.length,'Missing or invalid plural value element.');if(goog.i18n.MessageFormat.Element_.BLOCK==parts[pos].type){var value=this.parseBlock_(parts[pos].value);}else{goog.asserts.fail('Expected block type.');}
result[key.replace(/\s*(?:=)?(\w+)\s*/,'$1')]=value;pos++;}
goog.asserts.assertArray(result[goog.i18n.MessageFormat.OTHER_],'Missing other key in plural statement.');return result;};goog.i18n.MessageFormat.prototype.parseOrdinalBlock_=function(pattern){var argumentIndex='';var replaceRegex=goog.i18n.MessageFormat.ORDINAL_BLOCK_RE_;pattern=pattern.replace(replaceRegex,function(string,name){argumentIndex=name;return'';});var result={};result.argumentIndex=argumentIndex;result.argumentOffset=0;var parts=this.extractParts_(pattern);var pos=0;while(pos<parts.length){var key=parts[pos].value;goog.asserts.assertString(key,'Missing ordinal key element.');pos++;goog.asserts.assert(pos<parts.length,'Missing or invalid ordinal value element.');if(goog.i18n.MessageFormat.Element_.BLOCK==parts[pos].type){var value=this.parseBlock_(parts[pos].value);}else{goog.asserts.fail('Expected block type.');}
result[key.replace(/\s*(?:=)?(\w+)\s*/,'$1')]=value;pos++;}
goog.asserts.assertArray(result[goog.i18n.MessageFormat.OTHER_],'Missing other key in selectordinal statement.');return result;};goog.i18n.MessageFormat.prototype.buildPlaceholder_=function(literals){goog.asserts.assert(literals.length>0,'Literal array is empty.');var index=(literals.length-1).toString(10);return goog.i18n.MessageFormat.LITERAL_PLACEHOLDER_+index+'_';};goog.require('AbstractEarcons');goog.require('BluetoothBrailleDisplayListener');goog.require('BluetoothBrailleDisplayManager');goog.require('BrailleKeyCommand');goog.require('BrailleKeyEvent');goog.require('Spannable');goog.require('SpeechLog');goog.require('TtsInterface');goog.require('constants');goog.require('goog.i18n.MessageFormat');
