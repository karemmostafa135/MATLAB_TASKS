function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:33,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:70,type:"fcn"};
this.def["average_func_B"] = {file: "average_func_c.html",line:20,type:"var"};
this.def["average_func_U"] = {file: "average_func_c.html",line:23,type:"var"};
this.def["average_func_Y"] = {file: "average_func_c.html",line:26,type:"var"};
this.def["average_func.c:average_func_M_"] = {file: "average_func_c.html",line:29,type:"var"};
this.def["average_func_M"] = {file: "average_func_c.html",line:30,type:"var"};
this.def["average_func_MATLABFunction"] = {file: "average_func_c.html",line:37,type:"fcn"};
this.def["average_func_step"] = {file: "average_func_c.html",line:46,type:"fcn"};
this.def["average_func_initialize"] = {file: "average_func_c.html",line:83,type:"fcn"};
this.def["average_func_terminate"] = {file: "average_func_c.html",line:109,type:"fcn"};
this.def["B_MATLABFunction_average_func_T"] = {file: "average_func_h.html",line:39,type:"type"};
this.def["B_average_func_T"] = {file: "average_func_h.html",line:45,type:"type"};
this.def["ConstB_average_func_T"] = {file: "average_func_h.html",line:50,type:"type"};
this.def["ExtU_average_func_T"] = {file: "average_func_h.html",line:55,type:"type"};
this.def["ExtY_average_func_T"] = {file: "average_func_h.html",line:66,type:"type"};
this.def["RT_MODEL_average_func_T"] = {file: "average_func_types_h.html",line:22,type:"type"};
this.def["average_func_ConstB"] = {file: "average_func_data_c.html",line:20,type:"var"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["average_func_c.html"] = "../average_func.c";
	this.html2Root["average_func_c.html"] = "average_func_c.html";
	this.html2SrcPath["average_func_h.html"] = "../average_func.h";
	this.html2Root["average_func_h.html"] = "average_func_h.html";
	this.html2SrcPath["average_func_private_h.html"] = "../average_func_private.h";
	this.html2Root["average_func_private_h.html"] = "average_func_private_h.html";
	this.html2SrcPath["average_func_types_h.html"] = "../average_func_types.h";
	this.html2Root["average_func_types_h.html"] = "average_func_types_h.html";
	this.html2SrcPath["average_func_data_c.html"] = "../average_func_data.c";
	this.html2Root["average_func_data_c.html"] = "average_func_data_c.html";
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
"ert_main_c.html","average_func_c.html","average_func_h.html","average_func_private_h.html","average_func_types_h.html","average_func_data_c.html","rtwtypes_h.html"];
