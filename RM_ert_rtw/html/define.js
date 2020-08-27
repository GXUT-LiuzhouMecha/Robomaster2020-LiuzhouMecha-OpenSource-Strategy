function CodeDefine() { 
this.def = new Array();
this.def["ert_main.cpp:RM_Obj"] = {file: "ert_main_cpp.html",line:24,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_cpp.html",line:38,type:"fcn"};
this.def["main"] = {file: "ert_main_cpp.html",line:75,type:"fcn"};
this.def["RM_USU"] = {file: "RM_cpp.html",line:35,type:"fcn"};
this.def["step"] = {file: "RM_cpp.html",line:54,type:"fcn"};
this.def["initialize"] = {file: "RM_cpp.html",line:97,type:"fcn"};
this.def["terminate"] = {file: "RM_cpp.html",line:115,type:"fcn"};
this.def["getRTM"] = {file: "RM_cpp.html",line:133,type:"fcn"};
this.def["DW_RM_T"] = {file: "RM_h.html",line:44,type:"type"};
this.def["initialize"] = {file: "RM_h.html",line:56,type:"fcn"};
this.def["RT_MODEL_RM_T"] = {file: "RM_types_h.html",line:23,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:82,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:87,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:92,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:99,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:106,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:113,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:120,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:127,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:134,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:152,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_cpp.html"] = "../ert_main.cpp";
	this.html2Root["ert_main_cpp.html"] = "ert_main_cpp.html";
	this.html2SrcPath["RM_cpp.html"] = "../RM.cpp";
	this.html2Root["RM_cpp.html"] = "RM_cpp.html";
	this.html2SrcPath["RM_h.html"] = "../RM.h";
	this.html2Root["RM_h.html"] = "RM_h.html";
	this.html2SrcPath["RM_private_h.html"] = "../RM_private.h";
	this.html2Root["RM_private_h.html"] = "RM_private_h.html";
	this.html2SrcPath["RM_types_h.html"] = "../RM_types.h";
	this.html2Root["RM_types_h.html"] = "RM_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_cpp.html","RM_cpp.html","RM_h.html","RM_private_h.html","RM_types_h.html","rtwtypes_h.html"];
