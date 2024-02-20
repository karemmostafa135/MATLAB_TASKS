function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Factorial_Task.c:37c39"]=1;
    this.traceFlag["Factorial_Task.c:37c52"]=1;
    this.traceFlag["Factorial_Task.c:42c39"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Factorial_Task.c:37"]=1;
    this.lineTraceFlag["Factorial_Task.c:42"]=1;
    this.lineTraceFlag["Factorial_Task.c:47"]=1;
    this.lineTraceFlag["Factorial_Task.c:70"]=1;
    this.lineTraceFlag["Factorial_Task.h:38"]=1;
    this.lineTraceFlag["Factorial_Task.h:43"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
