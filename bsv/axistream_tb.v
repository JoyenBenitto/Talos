/* verilator lint_off TIMESCALEMOD */
`timescale 1ns/1ns

module axistream_tb;

  reg         ACLK;
  reg         ARESETn;
  reg         tREADY;

  wire        tVALID;
  wire [31:0] tDATA;
  wire [3:0]  tSTRB;
  wire [3:0]  tKEEP;
  wire        tLAST;
  wire        tID;
  wire        tDEST;
  wire        tUSER;
  wire        tWAKEUP;

  mkAxistream32 dut (
    .ACLK    (ACLK),
    .ARESETn (ARESETn),
    .tVALID  (tVALID),
    .tREADY  (tREADY),
    .tDATA   (tDATA),
    .tSTRB   (tSTRB),
    .tKEEP   (tKEEP),
    .tLAST   (tLAST),
    .tID     (tID),
    .tDEST   (tDEST),
    .tUSER   (tUSER),
    .tWAKEUP (tWAKEUP)
  );

  // 10 ns clock
  initial ACLK = 0;
  always #5 ACLK = ~ACLK;

  // VCD dump
  initial begin
    $dumpfile("sim_build/axistream.vcd");
    $dumpvars(0, axistream_tb);
  end

  // stimulus
  initial begin
    ARESETn = 0;
    tREADY  = 0;
    repeat (4) @(posedge ACLK);

    ARESETn = 1;
    @(posedge ACLK);

    // cycle 1: receiver not ready
    tREADY = 0;
    @(posedge ACLK);
    $display("[%0t] tVALID=%b tDATA=%h tSTRB=%h tKEEP=%h tLAST=%b tREADY=%b",
             $time, tVALID, tDATA, tSTRB, tKEEP, tLAST, tREADY);

    // cycle 2: receiver ready — a transfer completes when VALID & READY
    tREADY = 1;
    @(posedge ACLK);
    $display("[%0t] tVALID=%b tDATA=%h tSTRB=%h tKEEP=%h tLAST=%b tREADY=%b",
             $time, tVALID, tDATA, tSTRB, tKEEP, tLAST, tREADY);

    repeat (4) @(posedge ACLK);
    $display("[%0t] simulation done", $time);
    $finish;
  end

endmodule
