package axistream;

// Transmitter-side interface: drives all data signals, accepts tREADY
interface IfcAxiStreamTx#(
    numeric type dataWidth, numeric type tid_width,
    numeric type tdest_width, numeric type tuser_width);
    (*always_enabled, always_ready, prefix=""*)
    method Bit#(1) tVALID();
    (*always_enabled, prefix=""*)
    method Action tready(Bit#(1) tREADY);
    (*always_enabled, always_ready, prefix=""*)
    method Bit#(dataWidth) tDATA();
    (*always_enabled, always_ready, prefix=""*)
    method Bit#(TDiv#(dataWidth, 8)) tSTRB();
    (*always_enabled, always_ready, prefix=""*)
    method Bit#(TDiv#(dataWidth, 8)) tKEEP();
    (*always_enabled, always_ready, prefix=""*)
    method Bit#(1) tLAST();
    (*always_enabled, always_ready, prefix=""*)
    method Bit#(tid_width) tID();
    (*always_enabled, always_ready, prefix=""*)
    method Bit#(tdest_width) tDEST();
    (*always_enabled, always_ready, prefix=""*)
    method Bit#(tuser_width) tUSER();
    (*always_enabled, always_ready, prefix=""*)
    method Bit#(1) tWAKEUP();
endinterface

// Receiver-side interface: accepts all data signals, drives tREADY
interface IfcAxiStreamRx#(
    numeric type dataWidth, numeric type tid_width,
    numeric type tdest_width, numeric type tuser_width);
    (*always_enabled, always_ready, prefix=""*)
    method Bit#(1) tREADY();
    (*always_enabled, prefix=""*)
    method Action tvalid(Bit#(1) tVALID);
    (*always_enabled, prefix=""*)
    method Action tdata(Bit#(dataWidth) tDATA);
    (*always_enabled, prefix=""*)
    method Action tstrb(Bit#(TDiv#(dataWidth, 8)) tSTRB);
    (*always_enabled, prefix=""*)
    method Action tkeep(Bit#(TDiv#(dataWidth, 8)) tKEEP);
    (*always_enabled, prefix=""*)
    method Action tlast(Bit#(1) tLAST);
    (*always_enabled, prefix=""*)
    method Action tid(Bit#(tid_width) tID);
    (*always_enabled, prefix=""*)
    method Action tdest(Bit#(tdest_width) tDEST);
    (*always_enabled, prefix=""*)
    method Action tuser(Bit#(tuser_width) tUSER);
    (*always_enabled, prefix=""*)
    method Action twakeup(Bit#(1) tWAKEUP);
endinterface

// Combined bus interface: sub-interfaces both Tx and Rx (e.g. for a bridge/passthrough)
interface IfcAxiStreamBus#(
    numeric type dataWidth, numeric type tid_width,
    numeric type tdest_width, numeric type tuser_width);
    interface IfcAxiStreamTx#(dataWidth, tid_width, tdest_width, tuser_width) tx;
    interface IfcAxiStreamRx#(dataWidth, tid_width, tdest_width, tuser_width) rx;
endinterface

(*default_clock_osc="ACLK", default_reset="ARESETn"*)
module mkAxistream#(
    parameter Integer datawidth,
    parameter Integer tid_width,
    parameter Integer tdest_width,
    parameter Integer tuser_width
)(IfcAxiStreamBus#(datawidth, tid_width, tdest_width, tuser_width));

endmodule

(*synthesize, default_clock_osc="ACLK", default_reset="ARESETn"*)
module mkAxistream32(IfcAxiStreamBus#(32, 1, 1, 1));
    let core <- mkAxistream(32, 1, 1, 1);
    return core;
endmodule

endpackage: axistream
