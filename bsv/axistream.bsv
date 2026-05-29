package axistream;

interface IfcAxiStream#(
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

(*default_clock_osc="ACLK", default_reset="ARESETn"*)
module mkAxistream#(
    parameter Integer datawidth, 
    parameter Integer tid_width,
    parameter Integer tdest_width,
    parameter Integer tuser_width
)(IfcAxiStream#(datawidth, tid_width, tdest_width, tuser_width));

endmodule

(*synthesize, default_clock_osc="ACLK", default_reset="ARESETn"*)
module mkAxistream32(IfcAxiStream#(32, 1, 1, 1));
    let core <- mkAxistream(32, 1, 1, 1);
    return core;
endmodule

endpackage: axistream