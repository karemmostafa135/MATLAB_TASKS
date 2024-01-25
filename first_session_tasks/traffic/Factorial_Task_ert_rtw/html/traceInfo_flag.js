function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Factorial_Task.c:34c39"]=1;
    this.traceFlag["Factorial_Task.c:34c52"]=1;
    this.traceFlag["Factorial_Task.c:39c29"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Factorial_Task.c:34"]=1;
    this.lineTraceFlag["Factorial_Task.c:39"]=1;
    this.lineTraceFlag["Factorial_Task.h:37"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
