module Queue(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input  [63:0] io_enq_bits_addr,
  input  [63:0] io_enq_bits_PTBR,
  input  [1:0]  io_enq_bits_source,
  input         io_deq_ready,
  output        io_deq_valid,
  output [63:0] io_deq_bits_addr,
  output [63:0] io_deq_bits_PTBR,
  output [1:0]  io_deq_bits_source
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] ram_addr [0:0]; // @[Decoupled.scala 275:95]
  wire  ram_addr_io_deq_bits_MPORT_en; // @[Decoupled.scala 275:95]
  wire  ram_addr_io_deq_bits_MPORT_addr; // @[Decoupled.scala 275:95]
  wire [63:0] ram_addr_io_deq_bits_MPORT_data; // @[Decoupled.scala 275:95]
  wire [63:0] ram_addr_MPORT_data; // @[Decoupled.scala 275:95]
  wire  ram_addr_MPORT_addr; // @[Decoupled.scala 275:95]
  wire  ram_addr_MPORT_mask; // @[Decoupled.scala 275:95]
  wire  ram_addr_MPORT_en; // @[Decoupled.scala 275:95]
  reg [63:0] ram_PTBR [0:0]; // @[Decoupled.scala 275:95]
  wire  ram_PTBR_io_deq_bits_MPORT_en; // @[Decoupled.scala 275:95]
  wire  ram_PTBR_io_deq_bits_MPORT_addr; // @[Decoupled.scala 275:95]
  wire [63:0] ram_PTBR_io_deq_bits_MPORT_data; // @[Decoupled.scala 275:95]
  wire [63:0] ram_PTBR_MPORT_data; // @[Decoupled.scala 275:95]
  wire  ram_PTBR_MPORT_addr; // @[Decoupled.scala 275:95]
  wire  ram_PTBR_MPORT_mask; // @[Decoupled.scala 275:95]
  wire  ram_PTBR_MPORT_en; // @[Decoupled.scala 275:95]
  reg [1:0] ram_source [0:0]; // @[Decoupled.scala 275:95]
  wire  ram_source_io_deq_bits_MPORT_en; // @[Decoupled.scala 275:95]
  wire  ram_source_io_deq_bits_MPORT_addr; // @[Decoupled.scala 275:95]
  wire [1:0] ram_source_io_deq_bits_MPORT_data; // @[Decoupled.scala 275:95]
  wire [1:0] ram_source_MPORT_data; // @[Decoupled.scala 275:95]
  wire  ram_source_MPORT_addr; // @[Decoupled.scala 275:95]
  wire  ram_source_MPORT_mask; // @[Decoupled.scala 275:95]
  wire  ram_source_MPORT_en; // @[Decoupled.scala 275:95]
  reg  maybe_full; // @[Decoupled.scala 278:27]
  wire  empty = ~maybe_full; // @[Decoupled.scala 280:28]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 52:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 52:35]
  assign ram_addr_io_deq_bits_MPORT_en = 1'h1;
  assign ram_addr_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_addr_io_deq_bits_MPORT_data = ram_addr[ram_addr_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 275:95]
  assign ram_addr_MPORT_data = io_enq_bits_addr;
  assign ram_addr_MPORT_addr = 1'h0;
  assign ram_addr_MPORT_mask = 1'h1;
  assign ram_addr_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_PTBR_io_deq_bits_MPORT_en = 1'h1;
  assign ram_PTBR_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_PTBR_io_deq_bits_MPORT_data = ram_PTBR[ram_PTBR_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 275:95]
  assign ram_PTBR_MPORT_data = io_enq_bits_PTBR;
  assign ram_PTBR_MPORT_addr = 1'h0;
  assign ram_PTBR_MPORT_mask = 1'h1;
  assign ram_PTBR_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_source_io_deq_bits_MPORT_en = 1'h1;
  assign ram_source_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_source_io_deq_bits_MPORT_data = ram_source[ram_source_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 275:95]
  assign ram_source_MPORT_data = io_enq_bits_source;
  assign ram_source_MPORT_addr = 1'h0;
  assign ram_source_MPORT_mask = 1'h1;
  assign ram_source_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~maybe_full; // @[Decoupled.scala 305:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 304:19]
  assign io_deq_bits_addr = ram_addr_io_deq_bits_MPORT_data; // @[Decoupled.scala 312:17]
  assign io_deq_bits_PTBR = ram_PTBR_io_deq_bits_MPORT_data; // @[Decoupled.scala 312:17]
  assign io_deq_bits_source = ram_source_io_deq_bits_MPORT_data; // @[Decoupled.scala 312:17]
  always @(posedge clock) begin
    if (ram_addr_MPORT_en & ram_addr_MPORT_mask) begin
      ram_addr[ram_addr_MPORT_addr] <= ram_addr_MPORT_data; // @[Decoupled.scala 275:95]
    end
    if (ram_PTBR_MPORT_en & ram_PTBR_MPORT_mask) begin
      ram_PTBR[ram_PTBR_MPORT_addr] <= ram_PTBR_MPORT_data; // @[Decoupled.scala 275:95]
    end
    if (ram_source_MPORT_en & ram_source_MPORT_mask) begin
      ram_source[ram_source_MPORT_addr] <= ram_source_MPORT_data; // @[Decoupled.scala 275:95]
    end
    if (reset) begin // @[Decoupled.scala 278:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 278:27]
    end else if (do_enq != do_deq) begin // @[Decoupled.scala 295:27]
      maybe_full <= do_enq; // @[Decoupled.scala 296:16]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_addr[initvar] = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_PTBR[initvar] = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_source[initvar] = _RAND_2[1:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  maybe_full = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Queue_1(
  input         clock,
  input         reset,
  output        io_enq_ready,
  input         io_enq_valid,
  input  [63:0] io_enq_bits_addr,
  input  [1:0]  io_enq_bits_source,
  input         io_deq_ready,
  output        io_deq_valid,
  output [63:0] io_deq_bits_addr,
  output [1:0]  io_deq_bits_source
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] ram_addr [0:0]; // @[Decoupled.scala 275:95]
  wire  ram_addr_io_deq_bits_MPORT_en; // @[Decoupled.scala 275:95]
  wire  ram_addr_io_deq_bits_MPORT_addr; // @[Decoupled.scala 275:95]
  wire [63:0] ram_addr_io_deq_bits_MPORT_data; // @[Decoupled.scala 275:95]
  wire [63:0] ram_addr_MPORT_data; // @[Decoupled.scala 275:95]
  wire  ram_addr_MPORT_addr; // @[Decoupled.scala 275:95]
  wire  ram_addr_MPORT_mask; // @[Decoupled.scala 275:95]
  wire  ram_addr_MPORT_en; // @[Decoupled.scala 275:95]
  reg [1:0] ram_source [0:0]; // @[Decoupled.scala 275:95]
  wire  ram_source_io_deq_bits_MPORT_en; // @[Decoupled.scala 275:95]
  wire  ram_source_io_deq_bits_MPORT_addr; // @[Decoupled.scala 275:95]
  wire [1:0] ram_source_io_deq_bits_MPORT_data; // @[Decoupled.scala 275:95]
  wire [1:0] ram_source_MPORT_data; // @[Decoupled.scala 275:95]
  wire  ram_source_MPORT_addr; // @[Decoupled.scala 275:95]
  wire  ram_source_MPORT_mask; // @[Decoupled.scala 275:95]
  wire  ram_source_MPORT_en; // @[Decoupled.scala 275:95]
  reg  maybe_full; // @[Decoupled.scala 278:27]
  wire  empty = ~maybe_full; // @[Decoupled.scala 280:28]
  wire  do_enq = io_enq_ready & io_enq_valid; // @[Decoupled.scala 52:35]
  wire  do_deq = io_deq_ready & io_deq_valid; // @[Decoupled.scala 52:35]
  assign ram_addr_io_deq_bits_MPORT_en = 1'h1;
  assign ram_addr_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_addr_io_deq_bits_MPORT_data = ram_addr[ram_addr_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 275:95]
  assign ram_addr_MPORT_data = io_enq_bits_addr;
  assign ram_addr_MPORT_addr = 1'h0;
  assign ram_addr_MPORT_mask = 1'h1;
  assign ram_addr_MPORT_en = io_enq_ready & io_enq_valid;
  assign ram_source_io_deq_bits_MPORT_en = 1'h1;
  assign ram_source_io_deq_bits_MPORT_addr = 1'h0;
  assign ram_source_io_deq_bits_MPORT_data = ram_source[ram_source_io_deq_bits_MPORT_addr]; // @[Decoupled.scala 275:95]
  assign ram_source_MPORT_data = io_enq_bits_source;
  assign ram_source_MPORT_addr = 1'h0;
  assign ram_source_MPORT_mask = 1'h1;
  assign ram_source_MPORT_en = io_enq_ready & io_enq_valid;
  assign io_enq_ready = ~maybe_full; // @[Decoupled.scala 305:19]
  assign io_deq_valid = ~empty; // @[Decoupled.scala 304:19]
  assign io_deq_bits_addr = ram_addr_io_deq_bits_MPORT_data; // @[Decoupled.scala 312:17]
  assign io_deq_bits_source = ram_source_io_deq_bits_MPORT_data; // @[Decoupled.scala 312:17]
  always @(posedge clock) begin
    if (ram_addr_MPORT_en & ram_addr_MPORT_mask) begin
      ram_addr[ram_addr_MPORT_addr] <= ram_addr_MPORT_data; // @[Decoupled.scala 275:95]
    end
    if (ram_source_MPORT_en & ram_source_MPORT_mask) begin
      ram_source[ram_source_MPORT_addr] <= ram_source_MPORT_data; // @[Decoupled.scala 275:95]
    end
    if (reset) begin // @[Decoupled.scala 278:27]
      maybe_full <= 1'h0; // @[Decoupled.scala 278:27]
    end else if (do_enq != do_deq) begin // @[Decoupled.scala 295:27]
      maybe_full <= do_enq; // @[Decoupled.scala 296:16]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_addr[initvar] = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1; initvar = initvar+1)
    ram_source[initvar] = _RAND_1[1:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  maybe_full = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module TLB(
  input         clock,
  input         reset,
  output        io_tlb_req_ready,
  input         io_tlb_req_valid,
  input  [63:0] io_tlb_req_bits_addr,
  input  [63:0] io_tlb_req_bits_PTBR,
  input  [1:0]  io_tlb_req_bits_source,
  input         io_tlb_rsp_ready,
  output        io_tlb_rsp_valid,
  output [63:0] io_tlb_rsp_bits_addr,
  output [1:0]  io_tlb_rsp_bits_source,
  output        io_l2tlb_rsp_ready,
  input         io_l2tlb_rsp_valid,
  input  [63:0] io_l2tlb_rsp_bits_addr,
  input  [1:0]  io_l2tlb_rsp_bits_source,
  input         io_l2tlb_req_ready,
  output        io_l2tlb_req_valid,
  output [63:0] io_l2tlb_req_bits_addr,
  output [63:0] io_l2tlb_req_bits_PTBR,
  output [1:0]  io_l2tlb_req_bits_source
);
  wire  l2tlb_req_fifo_clock; // @[mmu.scala 233:28]
  wire  l2tlb_req_fifo_reset; // @[mmu.scala 233:28]
  wire  l2tlb_req_fifo_io_enq_ready; // @[mmu.scala 233:28]
  wire  l2tlb_req_fifo_io_enq_valid; // @[mmu.scala 233:28]
  wire [63:0] l2tlb_req_fifo_io_enq_bits_addr; // @[mmu.scala 233:28]
  wire [63:0] l2tlb_req_fifo_io_enq_bits_PTBR; // @[mmu.scala 233:28]
  wire [1:0] l2tlb_req_fifo_io_enq_bits_source; // @[mmu.scala 233:28]
  wire  l2tlb_req_fifo_io_deq_ready; // @[mmu.scala 233:28]
  wire  l2tlb_req_fifo_io_deq_valid; // @[mmu.scala 233:28]
  wire [63:0] l2tlb_req_fifo_io_deq_bits_addr; // @[mmu.scala 233:28]
  wire [63:0] l2tlb_req_fifo_io_deq_bits_PTBR; // @[mmu.scala 233:28]
  wire [1:0] l2tlb_req_fifo_io_deq_bits_source; // @[mmu.scala 233:28]
  wire  tlb_rsp_fifo_clock; // @[mmu.scala 234:26]
  wire  tlb_rsp_fifo_reset; // @[mmu.scala 234:26]
  wire  tlb_rsp_fifo_io_enq_ready; // @[mmu.scala 234:26]
  wire  tlb_rsp_fifo_io_enq_valid; // @[mmu.scala 234:26]
  wire [63:0] tlb_rsp_fifo_io_enq_bits_addr; // @[mmu.scala 234:26]
  wire [1:0] tlb_rsp_fifo_io_enq_bits_source; // @[mmu.scala 234:26]
  wire  tlb_rsp_fifo_io_deq_ready; // @[mmu.scala 234:26]
  wire  tlb_rsp_fifo_io_deq_valid; // @[mmu.scala 234:26]
  wire [63:0] tlb_rsp_fifo_io_deq_bits_addr; // @[mmu.scala 234:26]
  wire [1:0] tlb_rsp_fifo_io_deq_bits_source; // @[mmu.scala 234:26]
  Queue l2tlb_req_fifo ( // @[mmu.scala 233:28]
    .clock(l2tlb_req_fifo_clock),
    .reset(l2tlb_req_fifo_reset),
    .io_enq_ready(l2tlb_req_fifo_io_enq_ready),
    .io_enq_valid(l2tlb_req_fifo_io_enq_valid),
    .io_enq_bits_addr(l2tlb_req_fifo_io_enq_bits_addr),
    .io_enq_bits_PTBR(l2tlb_req_fifo_io_enq_bits_PTBR),
    .io_enq_bits_source(l2tlb_req_fifo_io_enq_bits_source),
    .io_deq_ready(l2tlb_req_fifo_io_deq_ready),
    .io_deq_valid(l2tlb_req_fifo_io_deq_valid),
    .io_deq_bits_addr(l2tlb_req_fifo_io_deq_bits_addr),
    .io_deq_bits_PTBR(l2tlb_req_fifo_io_deq_bits_PTBR),
    .io_deq_bits_source(l2tlb_req_fifo_io_deq_bits_source)
  );
  Queue_1 tlb_rsp_fifo ( // @[mmu.scala 234:26]
    .clock(tlb_rsp_fifo_clock),
    .reset(tlb_rsp_fifo_reset),
    .io_enq_ready(tlb_rsp_fifo_io_enq_ready),
    .io_enq_valid(tlb_rsp_fifo_io_enq_valid),
    .io_enq_bits_addr(tlb_rsp_fifo_io_enq_bits_addr),
    .io_enq_bits_source(tlb_rsp_fifo_io_enq_bits_source),
    .io_deq_ready(tlb_rsp_fifo_io_deq_ready),
    .io_deq_valid(tlb_rsp_fifo_io_deq_valid),
    .io_deq_bits_addr(tlb_rsp_fifo_io_deq_bits_addr),
    .io_deq_bits_source(tlb_rsp_fifo_io_deq_bits_source)
  );
  assign io_tlb_req_ready = l2tlb_req_fifo_io_enq_ready; // @[mmu.scala 235:13]
  assign io_tlb_rsp_valid = tlb_rsp_fifo_io_deq_valid; // @[mmu.scala 237:13]
  assign io_tlb_rsp_bits_addr = tlb_rsp_fifo_io_deq_bits_addr; // @[mmu.scala 237:13]
  assign io_tlb_rsp_bits_source = tlb_rsp_fifo_io_deq_bits_source; // @[mmu.scala 237:13]
  assign io_l2tlb_rsp_ready = tlb_rsp_fifo_io_enq_ready; // @[mmu.scala 238:15]
  assign io_l2tlb_req_valid = l2tlb_req_fifo_io_deq_valid; // @[mmu.scala 236:15]
  assign io_l2tlb_req_bits_addr = l2tlb_req_fifo_io_deq_bits_addr; // @[mmu.scala 236:15]
  assign io_l2tlb_req_bits_PTBR = l2tlb_req_fifo_io_deq_bits_PTBR; // @[mmu.scala 236:15]
  assign io_l2tlb_req_bits_source = l2tlb_req_fifo_io_deq_bits_source; // @[mmu.scala 236:15]
  assign l2tlb_req_fifo_clock = clock;
  assign l2tlb_req_fifo_reset = reset;
  assign l2tlb_req_fifo_io_enq_valid = io_tlb_req_valid; // @[mmu.scala 235:13]
  assign l2tlb_req_fifo_io_enq_bits_addr = io_tlb_req_bits_addr; // @[mmu.scala 235:13]
  assign l2tlb_req_fifo_io_enq_bits_PTBR = io_tlb_req_bits_PTBR; // @[mmu.scala 235:13]
  assign l2tlb_req_fifo_io_enq_bits_source = io_tlb_req_bits_source; // @[mmu.scala 235:13]
  assign l2tlb_req_fifo_io_deq_ready = io_l2tlb_req_ready; // @[mmu.scala 236:15]
  assign tlb_rsp_fifo_clock = clock;
  assign tlb_rsp_fifo_reset = reset;
  assign tlb_rsp_fifo_io_enq_valid = io_l2tlb_rsp_valid; // @[mmu.scala 238:15]
  assign tlb_rsp_fifo_io_enq_bits_addr = io_l2tlb_rsp_bits_addr; // @[mmu.scala 238:15]
  assign tlb_rsp_fifo_io_enq_bits_source = io_l2tlb_rsp_bits_source; // @[mmu.scala 238:15]
  assign tlb_rsp_fifo_io_deq_ready = io_tlb_rsp_ready; // @[mmu.scala 237:13]
endmodule
module L2TLB(
  input         clock,
  input         reset,
  output        io_l2tlb_req_ready,
  input         io_l2tlb_req_valid,
  input  [63:0] io_l2tlb_req_bits_addr,
  input  [63:0] io_l2tlb_req_bits_PTBR,
  input  [1:0]  io_l2tlb_req_bits_source,
  input         io_l2tlb_rsp_ready,
  output        io_l2tlb_rsp_valid,
  output [63:0] io_l2tlb_rsp_bits_addr,
  output [1:0]  io_l2tlb_rsp_bits_source,
  output        io_ptw_rsp_ready,
  input         io_ptw_rsp_valid,
  input  [63:0] io_ptw_rsp_bits_addr,
  input  [1:0]  io_ptw_rsp_bits_source,
  input         io_ptw_req_ready,
  output        io_ptw_req_valid,
  output [63:0] io_ptw_req_bits_addr,
  output [63:0] io_ptw_req_bits_PTBR,
  output [1:0]  io_ptw_req_bits_source
);
  wire  ptw_req_fifo_clock; // @[mmu.scala 247:26]
  wire  ptw_req_fifo_reset; // @[mmu.scala 247:26]
  wire  ptw_req_fifo_io_enq_ready; // @[mmu.scala 247:26]
  wire  ptw_req_fifo_io_enq_valid; // @[mmu.scala 247:26]
  wire [63:0] ptw_req_fifo_io_enq_bits_addr; // @[mmu.scala 247:26]
  wire [63:0] ptw_req_fifo_io_enq_bits_PTBR; // @[mmu.scala 247:26]
  wire [1:0] ptw_req_fifo_io_enq_bits_source; // @[mmu.scala 247:26]
  wire  ptw_req_fifo_io_deq_ready; // @[mmu.scala 247:26]
  wire  ptw_req_fifo_io_deq_valid; // @[mmu.scala 247:26]
  wire [63:0] ptw_req_fifo_io_deq_bits_addr; // @[mmu.scala 247:26]
  wire [63:0] ptw_req_fifo_io_deq_bits_PTBR; // @[mmu.scala 247:26]
  wire [1:0] ptw_req_fifo_io_deq_bits_source; // @[mmu.scala 247:26]
  wire  l2tlb_rsp_fifo_clock; // @[mmu.scala 248:28]
  wire  l2tlb_rsp_fifo_reset; // @[mmu.scala 248:28]
  wire  l2tlb_rsp_fifo_io_enq_ready; // @[mmu.scala 248:28]
  wire  l2tlb_rsp_fifo_io_enq_valid; // @[mmu.scala 248:28]
  wire [63:0] l2tlb_rsp_fifo_io_enq_bits_addr; // @[mmu.scala 248:28]
  wire [1:0] l2tlb_rsp_fifo_io_enq_bits_source; // @[mmu.scala 248:28]
  wire  l2tlb_rsp_fifo_io_deq_ready; // @[mmu.scala 248:28]
  wire  l2tlb_rsp_fifo_io_deq_valid; // @[mmu.scala 248:28]
  wire [63:0] l2tlb_rsp_fifo_io_deq_bits_addr; // @[mmu.scala 248:28]
  wire [1:0] l2tlb_rsp_fifo_io_deq_bits_source; // @[mmu.scala 248:28]
  Queue ptw_req_fifo ( // @[mmu.scala 247:26]
    .clock(ptw_req_fifo_clock),
    .reset(ptw_req_fifo_reset),
    .io_enq_ready(ptw_req_fifo_io_enq_ready),
    .io_enq_valid(ptw_req_fifo_io_enq_valid),
    .io_enq_bits_addr(ptw_req_fifo_io_enq_bits_addr),
    .io_enq_bits_PTBR(ptw_req_fifo_io_enq_bits_PTBR),
    .io_enq_bits_source(ptw_req_fifo_io_enq_bits_source),
    .io_deq_ready(ptw_req_fifo_io_deq_ready),
    .io_deq_valid(ptw_req_fifo_io_deq_valid),
    .io_deq_bits_addr(ptw_req_fifo_io_deq_bits_addr),
    .io_deq_bits_PTBR(ptw_req_fifo_io_deq_bits_PTBR),
    .io_deq_bits_source(ptw_req_fifo_io_deq_bits_source)
  );
  Queue_1 l2tlb_rsp_fifo ( // @[mmu.scala 248:28]
    .clock(l2tlb_rsp_fifo_clock),
    .reset(l2tlb_rsp_fifo_reset),
    .io_enq_ready(l2tlb_rsp_fifo_io_enq_ready),
    .io_enq_valid(l2tlb_rsp_fifo_io_enq_valid),
    .io_enq_bits_addr(l2tlb_rsp_fifo_io_enq_bits_addr),
    .io_enq_bits_source(l2tlb_rsp_fifo_io_enq_bits_source),
    .io_deq_ready(l2tlb_rsp_fifo_io_deq_ready),
    .io_deq_valid(l2tlb_rsp_fifo_io_deq_valid),
    .io_deq_bits_addr(l2tlb_rsp_fifo_io_deq_bits_addr),
    .io_deq_bits_source(l2tlb_rsp_fifo_io_deq_bits_source)
  );
  assign io_l2tlb_req_ready = ptw_req_fifo_io_enq_ready; // @[mmu.scala 249:15]
  assign io_l2tlb_rsp_valid = l2tlb_rsp_fifo_io_deq_valid; // @[mmu.scala 252:15]
  assign io_l2tlb_rsp_bits_addr = l2tlb_rsp_fifo_io_deq_bits_addr; // @[mmu.scala 252:15]
  assign io_l2tlb_rsp_bits_source = l2tlb_rsp_fifo_io_deq_bits_source; // @[mmu.scala 252:15]
  assign io_ptw_rsp_ready = l2tlb_rsp_fifo_io_enq_ready; // @[mmu.scala 251:13]
  assign io_ptw_req_valid = ptw_req_fifo_io_deq_valid; // @[mmu.scala 250:13]
  assign io_ptw_req_bits_addr = ptw_req_fifo_io_deq_bits_addr; // @[mmu.scala 250:13]
  assign io_ptw_req_bits_PTBR = ptw_req_fifo_io_deq_bits_PTBR; // @[mmu.scala 250:13]
  assign io_ptw_req_bits_source = ptw_req_fifo_io_deq_bits_source; // @[mmu.scala 250:13]
  assign ptw_req_fifo_clock = clock;
  assign ptw_req_fifo_reset = reset;
  assign ptw_req_fifo_io_enq_valid = io_l2tlb_req_valid; // @[mmu.scala 249:15]
  assign ptw_req_fifo_io_enq_bits_addr = io_l2tlb_req_bits_addr; // @[mmu.scala 249:15]
  assign ptw_req_fifo_io_enq_bits_PTBR = io_l2tlb_req_bits_PTBR; // @[mmu.scala 249:15]
  assign ptw_req_fifo_io_enq_bits_source = io_l2tlb_req_bits_source; // @[mmu.scala 249:15]
  assign ptw_req_fifo_io_deq_ready = io_ptw_req_ready; // @[mmu.scala 250:13]
  assign l2tlb_rsp_fifo_clock = clock;
  assign l2tlb_rsp_fifo_reset = reset;
  assign l2tlb_rsp_fifo_io_enq_valid = io_ptw_rsp_valid; // @[mmu.scala 251:13]
  assign l2tlb_rsp_fifo_io_enq_bits_addr = io_ptw_rsp_bits_addr; // @[mmu.scala 251:13]
  assign l2tlb_rsp_fifo_io_enq_bits_source = io_ptw_rsp_bits_source; // @[mmu.scala 251:13]
  assign l2tlb_rsp_fifo_io_deq_ready = io_l2tlb_rsp_ready; // @[mmu.scala 252:15]
endmodule
module RRArbiter(
  input         clock,
  input         io_in_0_valid,
  input  [43:0] io_in_0_bits_ppn,
  input  [26:0] io_in_0_bits_vpn,
  input  [1:0]  io_in_0_bits_cur_level,
  input  [1:0]  io_in_0_bits_source,
  input         io_in_1_valid,
  input  [43:0] io_in_1_bits_ppn,
  input  [26:0] io_in_1_bits_vpn,
  input  [1:0]  io_in_1_bits_cur_level,
  input  [1:0]  io_in_1_bits_source,
  input         io_in_2_valid,
  input  [43:0] io_in_2_bits_ppn,
  input  [26:0] io_in_2_bits_vpn,
  input  [1:0]  io_in_2_bits_cur_level,
  input  [1:0]  io_in_2_bits_source,
  input         io_in_3_valid,
  input  [43:0] io_in_3_bits_ppn,
  input  [26:0] io_in_3_bits_vpn,
  input  [1:0]  io_in_3_bits_cur_level,
  input  [1:0]  io_in_3_bits_source,
  input         io_out_ready,
  output        io_out_valid,
  output [43:0] io_out_bits_ppn,
  output [26:0] io_out_bits_vpn,
  output [1:0]  io_out_bits_cur_level,
  output [1:0]  io_out_bits_source,
  output [1:0]  io_chosen
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  _GEN_1 = 2'h1 == io_chosen ? io_in_1_valid : io_in_0_valid; // @[Arbiter.scala 55:{16,16}]
  wire  _GEN_2 = 2'h2 == io_chosen ? io_in_2_valid : _GEN_1; // @[Arbiter.scala 55:{16,16}]
  wire [43:0] _GEN_5 = 2'h1 == io_chosen ? io_in_1_bits_ppn : io_in_0_bits_ppn; // @[Arbiter.scala 56:{15,15}]
  wire [43:0] _GEN_6 = 2'h2 == io_chosen ? io_in_2_bits_ppn : _GEN_5; // @[Arbiter.scala 56:{15,15}]
  wire [26:0] _GEN_9 = 2'h1 == io_chosen ? io_in_1_bits_vpn : io_in_0_bits_vpn; // @[Arbiter.scala 56:{15,15}]
  wire [26:0] _GEN_10 = 2'h2 == io_chosen ? io_in_2_bits_vpn : _GEN_9; // @[Arbiter.scala 56:{15,15}]
  wire [1:0] _GEN_13 = 2'h1 == io_chosen ? io_in_1_bits_cur_level : io_in_0_bits_cur_level; // @[Arbiter.scala 56:{15,15}]
  wire [1:0] _GEN_14 = 2'h2 == io_chosen ? io_in_2_bits_cur_level : _GEN_13; // @[Arbiter.scala 56:{15,15}]
  wire [1:0] _GEN_17 = 2'h1 == io_chosen ? io_in_1_bits_source : io_in_0_bits_source; // @[Arbiter.scala 56:{15,15}]
  wire [1:0] _GEN_18 = 2'h2 == io_chosen ? io_in_2_bits_source : _GEN_17; // @[Arbiter.scala 56:{15,15}]
  wire  _ctrl_validMask_grantMask_lastGrant_T = io_out_ready & io_out_valid; // @[Decoupled.scala 52:35]
  reg [1:0] lastGrant; // @[Reg.scala 19:16]
  wire  grantMask_1 = 2'h1 > lastGrant; // @[Arbiter.scala 81:49]
  wire  grantMask_2 = 2'h2 > lastGrant; // @[Arbiter.scala 81:49]
  wire  grantMask_3 = 2'h3 > lastGrant; // @[Arbiter.scala 81:49]
  wire  validMask_1 = io_in_1_valid & grantMask_1; // @[Arbiter.scala 82:76]
  wire  validMask_2 = io_in_2_valid & grantMask_2; // @[Arbiter.scala 82:76]
  wire  validMask_3 = io_in_3_valid & grantMask_3; // @[Arbiter.scala 82:76]
  wire [1:0] _GEN_21 = io_in_2_valid ? 2'h2 : 2'h3; // @[Arbiter.scala 91:{26,35}]
  wire [1:0] _GEN_22 = io_in_1_valid ? 2'h1 : _GEN_21; // @[Arbiter.scala 91:{26,35}]
  wire [1:0] _GEN_23 = io_in_0_valid ? 2'h0 : _GEN_22; // @[Arbiter.scala 91:{26,35}]
  wire [1:0] _GEN_24 = validMask_3 ? 2'h3 : _GEN_23; // @[Arbiter.scala 93:{24,33}]
  wire [1:0] _GEN_25 = validMask_2 ? 2'h2 : _GEN_24; // @[Arbiter.scala 93:{24,33}]
  assign io_out_valid = 2'h3 == io_chosen ? io_in_3_valid : _GEN_2; // @[Arbiter.scala 55:{16,16}]
  assign io_out_bits_ppn = 2'h3 == io_chosen ? io_in_3_bits_ppn : _GEN_6; // @[Arbiter.scala 56:{15,15}]
  assign io_out_bits_vpn = 2'h3 == io_chosen ? io_in_3_bits_vpn : _GEN_10; // @[Arbiter.scala 56:{15,15}]
  assign io_out_bits_cur_level = 2'h3 == io_chosen ? io_in_3_bits_cur_level : _GEN_14; // @[Arbiter.scala 56:{15,15}]
  assign io_out_bits_source = 2'h3 == io_chosen ? io_in_3_bits_source : _GEN_18; // @[Arbiter.scala 56:{15,15}]
  assign io_chosen = validMask_1 ? 2'h1 : _GEN_25; // @[Arbiter.scala 93:{24,33}]
  always @(posedge clock) begin
    if (_ctrl_validMask_grantMask_lastGrant_T) begin // @[Reg.scala 20:18]
      lastGrant <= io_chosen; // @[Reg.scala 20:22]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  lastGrant = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module FistLevelPTW(
  input         clock,
  input         reset,
  output        io_ptw_req_ready,
  input         io_ptw_req_valid,
  input  [63:0] io_ptw_req_bits_addr,
  input  [63:0] io_ptw_req_bits_PTBR,
  input  [1:0]  io_ptw_req_bits_source,
  input         io_mem_req_ready,
  output        io_mem_req_valid,
  output [63:0] io_mem_req_bits_addr,
  output [1:0]  io_mem_req_bits_source,
  output        io_mem_rsp_ready,
  input         io_mem_rsp_valid,
  input  [63:0] io_mem_rsp_bits_addr,
  input  [1:0]  io_mem_rsp_bits_source,
  input         io_ll_req_ready,
  output        io_ll_req_valid,
  output [63:0] io_ll_req_bits_addr,
  output [1:0]  io_ll_req_bits_source
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
`endif // RANDOMIZE_REG_INIT
  wire  memreq_arb_clock; // @[mmu.scala 114:26]
  wire  memreq_arb_io_in_0_valid; // @[mmu.scala 114:26]
  wire [43:0] memreq_arb_io_in_0_bits_ppn; // @[mmu.scala 114:26]
  wire [26:0] memreq_arb_io_in_0_bits_vpn; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_in_0_bits_cur_level; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_in_0_bits_source; // @[mmu.scala 114:26]
  wire  memreq_arb_io_in_1_valid; // @[mmu.scala 114:26]
  wire [43:0] memreq_arb_io_in_1_bits_ppn; // @[mmu.scala 114:26]
  wire [26:0] memreq_arb_io_in_1_bits_vpn; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_in_1_bits_cur_level; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_in_1_bits_source; // @[mmu.scala 114:26]
  wire  memreq_arb_io_in_2_valid; // @[mmu.scala 114:26]
  wire [43:0] memreq_arb_io_in_2_bits_ppn; // @[mmu.scala 114:26]
  wire [26:0] memreq_arb_io_in_2_bits_vpn; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_in_2_bits_cur_level; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_in_2_bits_source; // @[mmu.scala 114:26]
  wire  memreq_arb_io_in_3_valid; // @[mmu.scala 114:26]
  wire [43:0] memreq_arb_io_in_3_bits_ppn; // @[mmu.scala 114:26]
  wire [26:0] memreq_arb_io_in_3_bits_vpn; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_in_3_bits_cur_level; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_in_3_bits_source; // @[mmu.scala 114:26]
  wire  memreq_arb_io_out_ready; // @[mmu.scala 114:26]
  wire  memreq_arb_io_out_valid; // @[mmu.scala 114:26]
  wire [43:0] memreq_arb_io_out_bits_ppn; // @[mmu.scala 114:26]
  wire [26:0] memreq_arb_io_out_bits_vpn; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_out_bits_cur_level; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_out_bits_source; // @[mmu.scala 114:26]
  wire [1:0] memreq_arb_io_chosen; // @[mmu.scala 114:26]
  wire  llreq_arb_clock; // @[mmu.scala 144:25]
  wire  llreq_arb_io_in_0_valid; // @[mmu.scala 144:25]
  wire [43:0] llreq_arb_io_in_0_bits_ppn; // @[mmu.scala 144:25]
  wire [26:0] llreq_arb_io_in_0_bits_vpn; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_in_0_bits_cur_level; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_in_0_bits_source; // @[mmu.scala 144:25]
  wire  llreq_arb_io_in_1_valid; // @[mmu.scala 144:25]
  wire [43:0] llreq_arb_io_in_1_bits_ppn; // @[mmu.scala 144:25]
  wire [26:0] llreq_arb_io_in_1_bits_vpn; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_in_1_bits_cur_level; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_in_1_bits_source; // @[mmu.scala 144:25]
  wire  llreq_arb_io_in_2_valid; // @[mmu.scala 144:25]
  wire [43:0] llreq_arb_io_in_2_bits_ppn; // @[mmu.scala 144:25]
  wire [26:0] llreq_arb_io_in_2_bits_vpn; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_in_2_bits_cur_level; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_in_2_bits_source; // @[mmu.scala 144:25]
  wire  llreq_arb_io_in_3_valid; // @[mmu.scala 144:25]
  wire [43:0] llreq_arb_io_in_3_bits_ppn; // @[mmu.scala 144:25]
  wire [26:0] llreq_arb_io_in_3_bits_vpn; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_in_3_bits_cur_level; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_in_3_bits_source; // @[mmu.scala 144:25]
  wire  llreq_arb_io_out_ready; // @[mmu.scala 144:25]
  wire  llreq_arb_io_out_valid; // @[mmu.scala 144:25]
  wire [43:0] llreq_arb_io_out_bits_ppn; // @[mmu.scala 144:25]
  wire [26:0] llreq_arb_io_out_bits_vpn; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_out_bits_cur_level; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_out_bits_source; // @[mmu.scala 144:25]
  wire [1:0] llreq_arb_io_chosen; // @[mmu.scala 144:25]
  reg [43:0] entries_0_ppn; // @[mmu.scala 94:24]
  reg [26:0] entries_0_vpn; // @[mmu.scala 94:24]
  reg [1:0] entries_0_cur_level; // @[mmu.scala 94:24]
  reg [1:0] entries_0_source; // @[mmu.scala 94:24]
  reg [43:0] entries_1_ppn; // @[mmu.scala 94:24]
  reg [26:0] entries_1_vpn; // @[mmu.scala 94:24]
  reg [1:0] entries_1_cur_level; // @[mmu.scala 94:24]
  reg [1:0] entries_1_source; // @[mmu.scala 94:24]
  reg [43:0] entries_2_ppn; // @[mmu.scala 94:24]
  reg [26:0] entries_2_vpn; // @[mmu.scala 94:24]
  reg [1:0] entries_2_cur_level; // @[mmu.scala 94:24]
  reg [1:0] entries_2_source; // @[mmu.scala 94:24]
  reg [43:0] entries_3_ppn; // @[mmu.scala 94:24]
  reg [26:0] entries_3_vpn; // @[mmu.scala 94:24]
  reg [1:0] entries_3_cur_level; // @[mmu.scala 94:24]
  reg [1:0] entries_3_source; // @[mmu.scala 94:24]
  reg [1:0] state_0; // @[mmu.scala 96:22]
  reg [1:0] state_1; // @[mmu.scala 96:22]
  reg [1:0] state_2; // @[mmu.scala 96:22]
  reg [1:0] state_3; // @[mmu.scala 96:22]
  wire  is_idle_0 = state_0 == 2'h0; // @[mmu.scala 97:29]
  wire  is_idle_1 = state_1 == 2'h0; // @[mmu.scala 97:29]
  wire  is_idle_2 = state_2 == 2'h0; // @[mmu.scala 97:29]
  wire  is_idle_3 = state_3 == 2'h0; // @[mmu.scala 97:29]
  wire [1:0] _enq_ptr_T = is_idle_2 ? 2'h2 : 2'h3; // @[Mux.scala 47:70]
  wire [1:0] _enq_ptr_T_1 = is_idle_1 ? 2'h1 : _enq_ptr_T; // @[Mux.scala 47:70]
  wire [1:0] enq_ptr = is_idle_0 ? 2'h0 : _enq_ptr_T_1; // @[Mux.scala 47:70]
  wire  is_memwait_0 = state_0 == 2'h2; // @[mmu.scala 103:32]
  wire  is_memwait_1 = state_1 == 2'h2; // @[mmu.scala 103:32]
  wire  is_memwait_2 = state_2 == 2'h2; // @[mmu.scala 103:32]
  wire  is_memwait_3 = state_3 == 2'h2; // @[mmu.scala 103:32]
  wire  is_llreq_0 = state_0 == 2'h3; // @[mmu.scala 104:30]
  wire  is_llreq_1 = state_1 == 2'h3; // @[mmu.scala 104:30]
  wire  is_llreq_2 = state_2 == 2'h3; // @[mmu.scala 104:30]
  wire  _T = io_ptw_req_ready & io_ptw_req_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _GEN_0 = 2'h0 == enq_ptr ? 2'h1 : state_0; // @[mmu.scala 108:{20,20} 96:22]
  wire [1:0] _GEN_1 = 2'h1 == enq_ptr ? 2'h1 : state_1; // @[mmu.scala 108:{20,20} 96:22]
  wire [1:0] _GEN_2 = 2'h2 == enq_ptr ? 2'h1 : state_2; // @[mmu.scala 108:{20,20} 96:22]
  wire [1:0] _GEN_3 = 2'h3 == enq_ptr ? 2'h1 : state_3; // @[mmu.scala 108:{20,20} 96:22]
  wire [1:0] _entries_cur_level_T_1 = 2'h3 - 2'h1; // @[mmu.scala 109:44]
  wire [1:0] _GEN_4 = 2'h0 == enq_ptr ? _entries_cur_level_T_1 : entries_0_cur_level; // @[mmu.scala 109:{32,32} 94:24]
  wire [1:0] _GEN_5 = 2'h1 == enq_ptr ? _entries_cur_level_T_1 : entries_1_cur_level; // @[mmu.scala 109:{32,32} 94:24]
  wire [1:0] _GEN_6 = 2'h2 == enq_ptr ? _entries_cur_level_T_1 : entries_2_cur_level; // @[mmu.scala 109:{32,32} 94:24]
  wire [1:0] _GEN_7 = 2'h3 == enq_ptr ? _entries_cur_level_T_1 : entries_3_cur_level; // @[mmu.scala 109:{32,32} 94:24]
  wire [26:0] _GEN_8 = 2'h0 == enq_ptr ? io_ptw_req_bits_addr[38:12] : entries_0_vpn; // @[mmu.scala 110:{26,26} 94:24]
  wire [26:0] _GEN_9 = 2'h1 == enq_ptr ? io_ptw_req_bits_addr[38:12] : entries_1_vpn; // @[mmu.scala 110:{26,26} 94:24]
  wire [26:0] _GEN_10 = 2'h2 == enq_ptr ? io_ptw_req_bits_addr[38:12] : entries_2_vpn; // @[mmu.scala 110:{26,26} 94:24]
  wire [26:0] _GEN_11 = 2'h3 == enq_ptr ? io_ptw_req_bits_addr[38:12] : entries_3_vpn; // @[mmu.scala 110:{26,26} 94:24]
  wire [43:0] _GEN_12 = 2'h0 == enq_ptr ? io_ptw_req_bits_PTBR[43:0] : entries_0_ppn; // @[mmu.scala 111:{26,26} 94:24]
  wire [43:0] _GEN_13 = 2'h1 == enq_ptr ? io_ptw_req_bits_PTBR[43:0] : entries_1_ppn; // @[mmu.scala 111:{26,26} 94:24]
  wire [43:0] _GEN_14 = 2'h2 == enq_ptr ? io_ptw_req_bits_PTBR[43:0] : entries_2_ppn; // @[mmu.scala 111:{26,26} 94:24]
  wire [43:0] _GEN_15 = 2'h3 == enq_ptr ? io_ptw_req_bits_PTBR[43:0] : entries_3_ppn; // @[mmu.scala 111:{26,26} 94:24]
  wire [1:0] _GEN_16 = 2'h0 == enq_ptr ? io_ptw_req_bits_source : entries_0_source; // @[mmu.scala 112:{29,29} 94:24]
  wire [1:0] _GEN_17 = 2'h1 == enq_ptr ? io_ptw_req_bits_source : entries_1_source; // @[mmu.scala 112:{29,29} 94:24]
  wire [1:0] _GEN_18 = 2'h2 == enq_ptr ? io_ptw_req_bits_source : entries_2_source; // @[mmu.scala 112:{29,29} 94:24]
  wire [1:0] _GEN_19 = 2'h3 == enq_ptr ? io_ptw_req_bits_source : entries_3_source; // @[mmu.scala 112:{29,29} 94:24]
  wire [1:0] _GEN_20 = _T ? _GEN_0 : state_0; // @[mmu.scala 107:24 96:22]
  wire [1:0] _GEN_21 = _T ? _GEN_1 : state_1; // @[mmu.scala 107:24 96:22]
  wire [1:0] _GEN_22 = _T ? _GEN_2 : state_2; // @[mmu.scala 107:24 96:22]
  wire [1:0] _GEN_23 = _T ? _GEN_3 : state_3; // @[mmu.scala 107:24 96:22]
  wire [1:0] _GEN_24 = _T ? _GEN_4 : entries_0_cur_level; // @[mmu.scala 107:24 94:24]
  wire [1:0] _GEN_25 = _T ? _GEN_5 : entries_1_cur_level; // @[mmu.scala 107:24 94:24]
  wire [1:0] _GEN_26 = _T ? _GEN_6 : entries_2_cur_level; // @[mmu.scala 107:24 94:24]
  wire [1:0] _GEN_27 = _T ? _GEN_7 : entries_3_cur_level; // @[mmu.scala 107:24 94:24]
  wire [26:0] _GEN_28 = _T ? _GEN_8 : entries_0_vpn; // @[mmu.scala 107:24 94:24]
  wire [26:0] _GEN_29 = _T ? _GEN_9 : entries_1_vpn; // @[mmu.scala 107:24 94:24]
  wire [26:0] _GEN_30 = _T ? _GEN_10 : entries_2_vpn; // @[mmu.scala 107:24 94:24]
  wire [26:0] _GEN_31 = _T ? _GEN_11 : entries_3_vpn; // @[mmu.scala 107:24 94:24]
  wire [43:0] _GEN_32 = _T ? _GEN_12 : entries_0_ppn; // @[mmu.scala 107:24 94:24]
  wire [43:0] _GEN_33 = _T ? _GEN_13 : entries_1_ppn; // @[mmu.scala 107:24 94:24]
  wire [43:0] _GEN_34 = _T ? _GEN_14 : entries_2_ppn; // @[mmu.scala 107:24 94:24]
  wire [43:0] _GEN_35 = _T ? _GEN_15 : entries_3_ppn; // @[mmu.scala 107:24 94:24]
  wire [1:0] _GEN_36 = _T ? _GEN_16 : entries_0_source; // @[mmu.scala 107:24 94:24]
  wire [1:0] _GEN_37 = _T ? _GEN_17 : entries_1_source; // @[mmu.scala 107:24 94:24]
  wire [1:0] _GEN_38 = _T ? _GEN_18 : entries_2_source; // @[mmu.scala 107:24 94:24]
  wire [1:0] _GEN_39 = _T ? _GEN_19 : entries_3_source; // @[mmu.scala 107:24 94:24]
  wire [5:0] _io_mem_req_bits_addr_vpnidx_T = memreq_arb_io_out_bits_cur_level * 4'h9; // @[mmu.scala 29:64]
  wire [26:0] _io_mem_req_bits_addr_vpnidx_T_1 = memreq_arb_io_out_bits_vpn >> _io_mem_req_bits_addr_vpnidx_T; // @[mmu.scala 29:54]
  wire [8:0] io_mem_req_bits_addr_vpnidx = _io_mem_req_bits_addr_vpnidx_T_1[8:0]; // @[mmu.scala 29:76]
  wire [55:0] _GEN_112 = {memreq_arb_io_out_bits_ppn, 12'h0}; // @[mmu.scala 32:10]
  wire [58:0] _io_mem_req_bits_addr_T = {{3'd0}, _GEN_112}; // @[mmu.scala 32:10]
  wire [11:0] _io_mem_req_bits_addr_T_1 = {io_mem_req_bits_addr_vpnidx, 3'h0}; // @[mmu.scala 32:40]
  wire [58:0] _GEN_113 = {{47'd0}, _io_mem_req_bits_addr_T_1}; // @[mmu.scala 32:33]
  wire [58:0] _io_mem_req_bits_addr_T_3 = _io_mem_req_bits_addr_T + _GEN_113; // @[mmu.scala 32:33]
  wire [58:0] _io_mem_req_bits_addr_T_4 = _io_mem_req_bits_addr_T_3 & 59'hffffffffffffff; // @[mmu.scala 32:55]
  wire  _T_1 = io_mem_req_ready & io_mem_req_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _GEN_40 = 2'h0 == memreq_arb_io_chosen ? 2'h2 : _GEN_20; // @[mmu.scala 125:{33,33}]
  wire [1:0] _GEN_41 = 2'h1 == memreq_arb_io_chosen ? 2'h2 : _GEN_21; // @[mmu.scala 125:{33,33}]
  wire [1:0] _GEN_42 = 2'h2 == memreq_arb_io_chosen ? 2'h2 : _GEN_22; // @[mmu.scala 125:{33,33}]
  wire [1:0] _GEN_43 = 2'h3 == memreq_arb_io_chosen ? 2'h2 : _GEN_23; // @[mmu.scala 125:{33,33}]
  wire [1:0] _GEN_44 = _T_1 ? _GEN_40 : _GEN_20; // @[mmu.scala 124:24]
  wire [1:0] _GEN_45 = _T_1 ? _GEN_41 : _GEN_21; // @[mmu.scala 124:24]
  wire [1:0] _GEN_46 = _T_1 ? _GEN_42 : _GEN_22; // @[mmu.scala 124:24]
  wire [1:0] _GEN_47 = _T_1 ? _GEN_43 : _GEN_23; // @[mmu.scala 124:24]
  wire  _T_2 = io_mem_rsp_ready & io_mem_rsp_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _state_0_T_1 = entries_0_cur_level > 2'h1 ? 2'h1 : 2'h3; // @[mmu.scala 132:24]
  wire [1:0] _entries_0_cur_level_T_1 = entries_0_cur_level - 2'h1; // @[mmu.scala 133:54]
  wire [1:0] _GEN_48 = is_memwait_0 & entries_0_source == io_mem_rsp_bits_source ? _state_0_T_1 : _GEN_44; // @[mmu.scala 131:74 132:18]
  wire [1:0] _GEN_49 = is_memwait_0 & entries_0_source == io_mem_rsp_bits_source ? _entries_0_cur_level_T_1 : _GEN_24; // @[mmu.scala 131:74 133:30]
  wire [43:0] _GEN_50 = is_memwait_0 & entries_0_source == io_mem_rsp_bits_source ? io_mem_rsp_bits_addr[53:10] :
    _GEN_32; // @[mmu.scala 131:74 134:24]
  wire [1:0] _state_1_T_1 = entries_1_cur_level > 2'h1 ? 2'h1 : 2'h3; // @[mmu.scala 132:24]
  wire [1:0] _entries_1_cur_level_T_1 = entries_1_cur_level - 2'h1; // @[mmu.scala 133:54]
  wire [1:0] _GEN_51 = is_memwait_1 & entries_1_source == io_mem_rsp_bits_source ? _state_1_T_1 : _GEN_45; // @[mmu.scala 131:74 132:18]
  wire [1:0] _GEN_52 = is_memwait_1 & entries_1_source == io_mem_rsp_bits_source ? _entries_1_cur_level_T_1 : _GEN_25; // @[mmu.scala 131:74 133:30]
  wire [43:0] _GEN_53 = is_memwait_1 & entries_1_source == io_mem_rsp_bits_source ? io_mem_rsp_bits_addr[53:10] :
    _GEN_33; // @[mmu.scala 131:74 134:24]
  wire [1:0] _state_2_T_1 = entries_2_cur_level > 2'h1 ? 2'h1 : 2'h3; // @[mmu.scala 132:24]
  wire [1:0] _entries_2_cur_level_T_1 = entries_2_cur_level - 2'h1; // @[mmu.scala 133:54]
  wire [1:0] _GEN_54 = is_memwait_2 & entries_2_source == io_mem_rsp_bits_source ? _state_2_T_1 : _GEN_46; // @[mmu.scala 131:74 132:18]
  wire [1:0] _GEN_55 = is_memwait_2 & entries_2_source == io_mem_rsp_bits_source ? _entries_2_cur_level_T_1 : _GEN_26; // @[mmu.scala 131:74 133:30]
  wire [43:0] _GEN_56 = is_memwait_2 & entries_2_source == io_mem_rsp_bits_source ? io_mem_rsp_bits_addr[53:10] :
    _GEN_34; // @[mmu.scala 131:74 134:24]
  wire [1:0] _state_3_T_1 = entries_3_cur_level > 2'h1 ? 2'h1 : 2'h3; // @[mmu.scala 132:24]
  wire [1:0] _entries_3_cur_level_T_1 = entries_3_cur_level - 2'h1; // @[mmu.scala 133:54]
  wire [1:0] _GEN_57 = is_memwait_3 & entries_3_source == io_mem_rsp_bits_source ? _state_3_T_1 : _GEN_47; // @[mmu.scala 131:74 132:18]
  wire [1:0] _GEN_58 = is_memwait_3 & entries_3_source == io_mem_rsp_bits_source ? _entries_3_cur_level_T_1 : _GEN_27; // @[mmu.scala 131:74 133:30]
  wire [43:0] _GEN_59 = is_memwait_3 & entries_3_source == io_mem_rsp_bits_source ? io_mem_rsp_bits_addr[53:10] :
    _GEN_35; // @[mmu.scala 131:74 134:24]
  wire [1:0] _GEN_60 = _T_2 ? _GEN_48 : _GEN_44; // @[mmu.scala 129:24]
  wire [1:0] _GEN_61 = _T_2 ? _GEN_49 : _GEN_24; // @[mmu.scala 129:24]
  wire [43:0] _GEN_62 = _T_2 ? _GEN_50 : _GEN_32; // @[mmu.scala 129:24]
  wire [1:0] _GEN_63 = _T_2 ? _GEN_51 : _GEN_45; // @[mmu.scala 129:24]
  wire [1:0] _GEN_64 = _T_2 ? _GEN_52 : _GEN_25; // @[mmu.scala 129:24]
  wire [43:0] _GEN_65 = _T_2 ? _GEN_53 : _GEN_33; // @[mmu.scala 129:24]
  wire [1:0] _GEN_66 = _T_2 ? _GEN_54 : _GEN_46; // @[mmu.scala 129:24]
  wire [1:0] _GEN_67 = _T_2 ? _GEN_55 : _GEN_26; // @[mmu.scala 129:24]
  wire [43:0] _GEN_68 = _T_2 ? _GEN_56 : _GEN_34; // @[mmu.scala 129:24]
  wire [1:0] _GEN_69 = _T_2 ? _GEN_57 : _GEN_47; // @[mmu.scala 129:24]
  wire [1:0] _GEN_70 = _T_2 ? _GEN_58 : _GEN_27; // @[mmu.scala 129:24]
  wire [43:0] _GEN_71 = _T_2 ? _GEN_59 : _GEN_35; // @[mmu.scala 129:24]
  wire [1:0] _deq_ptr_T = is_llreq_2 ? 2'h2 : 2'h3; // @[Mux.scala 47:70]
  wire [1:0] _deq_ptr_T_1 = is_llreq_1 ? 2'h1 : _deq_ptr_T; // @[Mux.scala 47:70]
  wire [1:0] deq_ptr = is_llreq_0 ? 2'h0 : _deq_ptr_T_1; // @[Mux.scala 47:70]
  wire  _T_11 = io_ll_req_ready & io_ll_req_valid; // @[Decoupled.scala 52:35]
  wire [5:0] _io_ll_req_bits_addr_vpnidx_T = llreq_arb_io_out_bits_cur_level * 4'h9; // @[mmu.scala 29:64]
  wire [26:0] _io_ll_req_bits_addr_vpnidx_T_1 = llreq_arb_io_out_bits_vpn >> _io_ll_req_bits_addr_vpnidx_T; // @[mmu.scala 29:54]
  wire [8:0] io_ll_req_bits_addr_vpnidx = _io_ll_req_bits_addr_vpnidx_T_1[8:0]; // @[mmu.scala 29:76]
  wire [55:0] _GEN_114 = {llreq_arb_io_out_bits_ppn, 12'h0}; // @[mmu.scala 32:10]
  wire [58:0] _io_ll_req_bits_addr_T = {{3'd0}, _GEN_114}; // @[mmu.scala 32:10]
  wire [11:0] _io_ll_req_bits_addr_T_1 = {io_ll_req_bits_addr_vpnidx, 3'h0}; // @[mmu.scala 32:40]
  wire [58:0] _GEN_115 = {{47'd0}, _io_ll_req_bits_addr_T_1}; // @[mmu.scala 32:33]
  wire [58:0] _io_ll_req_bits_addr_T_3 = _io_ll_req_bits_addr_T + _GEN_115; // @[mmu.scala 32:33]
  wire [58:0] _io_ll_req_bits_addr_T_4 = _io_ll_req_bits_addr_T_3 & 59'hffffffffffffff; // @[mmu.scala 32:55]
  RRArbiter memreq_arb ( // @[mmu.scala 114:26]
    .clock(memreq_arb_clock),
    .io_in_0_valid(memreq_arb_io_in_0_valid),
    .io_in_0_bits_ppn(memreq_arb_io_in_0_bits_ppn),
    .io_in_0_bits_vpn(memreq_arb_io_in_0_bits_vpn),
    .io_in_0_bits_cur_level(memreq_arb_io_in_0_bits_cur_level),
    .io_in_0_bits_source(memreq_arb_io_in_0_bits_source),
    .io_in_1_valid(memreq_arb_io_in_1_valid),
    .io_in_1_bits_ppn(memreq_arb_io_in_1_bits_ppn),
    .io_in_1_bits_vpn(memreq_arb_io_in_1_bits_vpn),
    .io_in_1_bits_cur_level(memreq_arb_io_in_1_bits_cur_level),
    .io_in_1_bits_source(memreq_arb_io_in_1_bits_source),
    .io_in_2_valid(memreq_arb_io_in_2_valid),
    .io_in_2_bits_ppn(memreq_arb_io_in_2_bits_ppn),
    .io_in_2_bits_vpn(memreq_arb_io_in_2_bits_vpn),
    .io_in_2_bits_cur_level(memreq_arb_io_in_2_bits_cur_level),
    .io_in_2_bits_source(memreq_arb_io_in_2_bits_source),
    .io_in_3_valid(memreq_arb_io_in_3_valid),
    .io_in_3_bits_ppn(memreq_arb_io_in_3_bits_ppn),
    .io_in_3_bits_vpn(memreq_arb_io_in_3_bits_vpn),
    .io_in_3_bits_cur_level(memreq_arb_io_in_3_bits_cur_level),
    .io_in_3_bits_source(memreq_arb_io_in_3_bits_source),
    .io_out_ready(memreq_arb_io_out_ready),
    .io_out_valid(memreq_arb_io_out_valid),
    .io_out_bits_ppn(memreq_arb_io_out_bits_ppn),
    .io_out_bits_vpn(memreq_arb_io_out_bits_vpn),
    .io_out_bits_cur_level(memreq_arb_io_out_bits_cur_level),
    .io_out_bits_source(memreq_arb_io_out_bits_source),
    .io_chosen(memreq_arb_io_chosen)
  );
  RRArbiter llreq_arb ( // @[mmu.scala 144:25]
    .clock(llreq_arb_clock),
    .io_in_0_valid(llreq_arb_io_in_0_valid),
    .io_in_0_bits_ppn(llreq_arb_io_in_0_bits_ppn),
    .io_in_0_bits_vpn(llreq_arb_io_in_0_bits_vpn),
    .io_in_0_bits_cur_level(llreq_arb_io_in_0_bits_cur_level),
    .io_in_0_bits_source(llreq_arb_io_in_0_bits_source),
    .io_in_1_valid(llreq_arb_io_in_1_valid),
    .io_in_1_bits_ppn(llreq_arb_io_in_1_bits_ppn),
    .io_in_1_bits_vpn(llreq_arb_io_in_1_bits_vpn),
    .io_in_1_bits_cur_level(llreq_arb_io_in_1_bits_cur_level),
    .io_in_1_bits_source(llreq_arb_io_in_1_bits_source),
    .io_in_2_valid(llreq_arb_io_in_2_valid),
    .io_in_2_bits_ppn(llreq_arb_io_in_2_bits_ppn),
    .io_in_2_bits_vpn(llreq_arb_io_in_2_bits_vpn),
    .io_in_2_bits_cur_level(llreq_arb_io_in_2_bits_cur_level),
    .io_in_2_bits_source(llreq_arb_io_in_2_bits_source),
    .io_in_3_valid(llreq_arb_io_in_3_valid),
    .io_in_3_bits_ppn(llreq_arb_io_in_3_bits_ppn),
    .io_in_3_bits_vpn(llreq_arb_io_in_3_bits_vpn),
    .io_in_3_bits_cur_level(llreq_arb_io_in_3_bits_cur_level),
    .io_in_3_bits_source(llreq_arb_io_in_3_bits_source),
    .io_out_ready(llreq_arb_io_out_ready),
    .io_out_valid(llreq_arb_io_out_valid),
    .io_out_bits_ppn(llreq_arb_io_out_bits_ppn),
    .io_out_bits_vpn(llreq_arb_io_out_bits_vpn),
    .io_out_bits_cur_level(llreq_arb_io_out_bits_cur_level),
    .io_out_bits_source(llreq_arb_io_out_bits_source),
    .io_chosen(llreq_arb_io_chosen)
  );
  assign io_ptw_req_ready = is_idle_0 | is_idle_1 | is_idle_2 | is_idle_3; // @[mmu.scala 99:32]
  assign io_mem_req_valid = memreq_arb_io_out_valid; // @[mmu.scala 121:20]
  assign io_mem_req_bits_addr = {{5'd0}, _io_mem_req_bits_addr_T_4}; // @[mmu.scala 119:24]
  assign io_mem_req_bits_source = memreq_arb_io_out_bits_source; // @[mmu.scala 120:26]
  assign io_mem_rsp_ready = is_memwait_0 | is_memwait_1 | is_memwait_2 | is_memwait_3; // @[mmu.scala 128:43]
  assign io_ll_req_valid = llreq_arb_io_out_valid; // @[mmu.scala 149:19]
  assign io_ll_req_bits_addr = {{5'd0}, _io_ll_req_bits_addr_T_4}; // @[mmu.scala 152:23]
  assign io_ll_req_bits_source = llreq_arb_io_out_bits_source; // @[mmu.scala 151:25]
  assign memreq_arb_clock = clock;
  assign memreq_arb_io_in_0_valid = state_0 == 2'h1; // @[mmu.scala 102:31]
  assign memreq_arb_io_in_0_bits_ppn = entries_0_ppn; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_0_bits_vpn = entries_0_vpn; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_0_bits_cur_level = entries_0_cur_level; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_0_bits_source = entries_0_source; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_1_valid = state_1 == 2'h1; // @[mmu.scala 102:31]
  assign memreq_arb_io_in_1_bits_ppn = entries_1_ppn; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_1_bits_vpn = entries_1_vpn; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_1_bits_cur_level = entries_1_cur_level; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_1_bits_source = entries_1_source; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_2_valid = state_2 == 2'h1; // @[mmu.scala 102:31]
  assign memreq_arb_io_in_2_bits_ppn = entries_2_ppn; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_2_bits_vpn = entries_2_vpn; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_2_bits_cur_level = entries_2_cur_level; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_2_bits_source = entries_2_source; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_3_valid = state_3 == 2'h1; // @[mmu.scala 102:31]
  assign memreq_arb_io_in_3_bits_ppn = entries_3_ppn; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_3_bits_vpn = entries_3_vpn; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_3_bits_cur_level = entries_3_cur_level; // @[mmu.scala 116:30]
  assign memreq_arb_io_in_3_bits_source = entries_3_source; // @[mmu.scala 116:30]
  assign memreq_arb_io_out_ready = io_mem_req_ready; // @[mmu.scala 122:27]
  assign llreq_arb_clock = clock;
  assign llreq_arb_io_in_0_valid = state_0 == 2'h3; // @[mmu.scala 104:30]
  assign llreq_arb_io_in_0_bits_ppn = entries_0_ppn; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_0_bits_vpn = entries_0_vpn; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_0_bits_cur_level = entries_0_cur_level; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_0_bits_source = entries_0_source; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_1_valid = state_1 == 2'h3; // @[mmu.scala 104:30]
  assign llreq_arb_io_in_1_bits_ppn = entries_1_ppn; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_1_bits_vpn = entries_1_vpn; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_1_bits_cur_level = entries_1_cur_level; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_1_bits_source = entries_1_source; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_2_valid = state_2 == 2'h3; // @[mmu.scala 104:30]
  assign llreq_arb_io_in_2_bits_ppn = entries_2_ppn; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_2_bits_vpn = entries_2_vpn; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_2_bits_cur_level = entries_2_cur_level; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_2_bits_source = entries_2_source; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_3_valid = state_3 == 2'h3; // @[mmu.scala 104:30]
  assign llreq_arb_io_in_3_bits_ppn = entries_3_ppn; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_3_bits_vpn = entries_3_vpn; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_3_bits_cur_level = entries_3_cur_level; // @[mmu.scala 146:29]
  assign llreq_arb_io_in_3_bits_source = entries_3_source; // @[mmu.scala 146:29]
  assign llreq_arb_io_out_ready = io_ll_req_ready; // @[mmu.scala 150:26]
  always @(posedge clock) begin
    if (reset) begin // @[mmu.scala 94:24]
      entries_0_ppn <= 44'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h0 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_0_ppn <= 44'h0; // @[mmu.scala 142:22]
      end else begin
        entries_0_ppn <= _GEN_62;
      end
    end else begin
      entries_0_ppn <= _GEN_62;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_0_vpn <= 27'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h0 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_0_vpn <= 27'h0; // @[mmu.scala 142:22]
      end else begin
        entries_0_vpn <= _GEN_28;
      end
    end else begin
      entries_0_vpn <= _GEN_28;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_0_cur_level <= 2'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h0 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_0_cur_level <= 2'h0; // @[mmu.scala 142:22]
      end else begin
        entries_0_cur_level <= _GEN_61;
      end
    end else begin
      entries_0_cur_level <= _GEN_61;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_0_source <= 2'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h0 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_0_source <= 2'h0; // @[mmu.scala 142:22]
      end else begin
        entries_0_source <= _GEN_36;
      end
    end else begin
      entries_0_source <= _GEN_36;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_1_ppn <= 44'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h1 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_1_ppn <= 44'h0; // @[mmu.scala 142:22]
      end else begin
        entries_1_ppn <= _GEN_65;
      end
    end else begin
      entries_1_ppn <= _GEN_65;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_1_vpn <= 27'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h1 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_1_vpn <= 27'h0; // @[mmu.scala 142:22]
      end else begin
        entries_1_vpn <= _GEN_29;
      end
    end else begin
      entries_1_vpn <= _GEN_29;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_1_cur_level <= 2'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h1 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_1_cur_level <= 2'h0; // @[mmu.scala 142:22]
      end else begin
        entries_1_cur_level <= _GEN_64;
      end
    end else begin
      entries_1_cur_level <= _GEN_64;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_1_source <= 2'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h1 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_1_source <= 2'h0; // @[mmu.scala 142:22]
      end else begin
        entries_1_source <= _GEN_37;
      end
    end else begin
      entries_1_source <= _GEN_37;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_2_ppn <= 44'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h2 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_2_ppn <= 44'h0; // @[mmu.scala 142:22]
      end else begin
        entries_2_ppn <= _GEN_68;
      end
    end else begin
      entries_2_ppn <= _GEN_68;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_2_vpn <= 27'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h2 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_2_vpn <= 27'h0; // @[mmu.scala 142:22]
      end else begin
        entries_2_vpn <= _GEN_30;
      end
    end else begin
      entries_2_vpn <= _GEN_30;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_2_cur_level <= 2'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h2 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_2_cur_level <= 2'h0; // @[mmu.scala 142:22]
      end else begin
        entries_2_cur_level <= _GEN_67;
      end
    end else begin
      entries_2_cur_level <= _GEN_67;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_2_source <= 2'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h2 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_2_source <= 2'h0; // @[mmu.scala 142:22]
      end else begin
        entries_2_source <= _GEN_38;
      end
    end else begin
      entries_2_source <= _GEN_38;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_3_ppn <= 44'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h3 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_3_ppn <= 44'h0; // @[mmu.scala 142:22]
      end else begin
        entries_3_ppn <= _GEN_71;
      end
    end else begin
      entries_3_ppn <= _GEN_71;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_3_vpn <= 27'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h3 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_3_vpn <= 27'h0; // @[mmu.scala 142:22]
      end else begin
        entries_3_vpn <= _GEN_31;
      end
    end else begin
      entries_3_vpn <= _GEN_31;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_3_cur_level <= 2'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h3 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_3_cur_level <= 2'h0; // @[mmu.scala 142:22]
      end else begin
        entries_3_cur_level <= _GEN_70;
      end
    end else begin
      entries_3_cur_level <= _GEN_70;
    end
    if (reset) begin // @[mmu.scala 94:24]
      entries_3_source <= 2'h0; // @[mmu.scala 94:24]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h3 == deq_ptr) begin // @[mmu.scala 142:22]
        entries_3_source <= 2'h0; // @[mmu.scala 142:22]
      end else begin
        entries_3_source <= _GEN_39;
      end
    end else begin
      entries_3_source <= _GEN_39;
    end
    if (reset) begin // @[mmu.scala 96:22]
      state_0 <= 2'h0; // @[mmu.scala 96:22]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h0 == deq_ptr) begin // @[mmu.scala 141:20]
        state_0 <= 2'h0; // @[mmu.scala 141:20]
      end else begin
        state_0 <= _GEN_60;
      end
    end else begin
      state_0 <= _GEN_60;
    end
    if (reset) begin // @[mmu.scala 96:22]
      state_1 <= 2'h0; // @[mmu.scala 96:22]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h1 == deq_ptr) begin // @[mmu.scala 141:20]
        state_1 <= 2'h0; // @[mmu.scala 141:20]
      end else begin
        state_1 <= _GEN_63;
      end
    end else begin
      state_1 <= _GEN_63;
    end
    if (reset) begin // @[mmu.scala 96:22]
      state_2 <= 2'h0; // @[mmu.scala 96:22]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h2 == deq_ptr) begin // @[mmu.scala 141:20]
        state_2 <= 2'h0; // @[mmu.scala 141:20]
      end else begin
        state_2 <= _GEN_66;
      end
    end else begin
      state_2 <= _GEN_66;
    end
    if (reset) begin // @[mmu.scala 96:22]
      state_3 <= 2'h0; // @[mmu.scala 96:22]
    end else if (_T_11) begin // @[mmu.scala 140:23]
      if (2'h3 == deq_ptr) begin // @[mmu.scala 141:20]
        state_3 <= 2'h0; // @[mmu.scala 141:20]
      end else begin
        state_3 <= _GEN_69;
      end
    end else begin
      state_3 <= _GEN_69;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  entries_0_ppn = _RAND_0[43:0];
  _RAND_1 = {1{`RANDOM}};
  entries_0_vpn = _RAND_1[26:0];
  _RAND_2 = {1{`RANDOM}};
  entries_0_cur_level = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  entries_0_source = _RAND_3[1:0];
  _RAND_4 = {2{`RANDOM}};
  entries_1_ppn = _RAND_4[43:0];
  _RAND_5 = {1{`RANDOM}};
  entries_1_vpn = _RAND_5[26:0];
  _RAND_6 = {1{`RANDOM}};
  entries_1_cur_level = _RAND_6[1:0];
  _RAND_7 = {1{`RANDOM}};
  entries_1_source = _RAND_7[1:0];
  _RAND_8 = {2{`RANDOM}};
  entries_2_ppn = _RAND_8[43:0];
  _RAND_9 = {1{`RANDOM}};
  entries_2_vpn = _RAND_9[26:0];
  _RAND_10 = {1{`RANDOM}};
  entries_2_cur_level = _RAND_10[1:0];
  _RAND_11 = {1{`RANDOM}};
  entries_2_source = _RAND_11[1:0];
  _RAND_12 = {2{`RANDOM}};
  entries_3_ppn = _RAND_12[43:0];
  _RAND_13 = {1{`RANDOM}};
  entries_3_vpn = _RAND_13[26:0];
  _RAND_14 = {1{`RANDOM}};
  entries_3_cur_level = _RAND_14[1:0];
  _RAND_15 = {1{`RANDOM}};
  entries_3_source = _RAND_15[1:0];
  _RAND_16 = {1{`RANDOM}};
  state_0 = _RAND_16[1:0];
  _RAND_17 = {1{`RANDOM}};
  state_1 = _RAND_17[1:0];
  _RAND_18 = {1{`RANDOM}};
  state_2 = _RAND_18[1:0];
  _RAND_19 = {1{`RANDOM}};
  state_3 = _RAND_19[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RRArbiter_2(
  input         clock,
  input         io_in_0_valid,
  input  [63:0] io_in_0_bits_addr,
  input  [1:0]  io_in_0_bits_source,
  input         io_in_1_valid,
  input  [63:0] io_in_1_bits_addr,
  input  [1:0]  io_in_1_bits_source,
  input         io_in_2_valid,
  input  [63:0] io_in_2_bits_addr,
  input  [1:0]  io_in_2_bits_source,
  input         io_in_3_valid,
  input  [63:0] io_in_3_bits_addr,
  input  [1:0]  io_in_3_bits_source,
  input         io_out_ready,
  output        io_out_valid,
  output [63:0] io_out_bits_addr,
  output [1:0]  io_out_bits_source,
  output [1:0]  io_chosen
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  _GEN_1 = 2'h1 == io_chosen ? io_in_1_valid : io_in_0_valid; // @[Arbiter.scala 55:{16,16}]
  wire  _GEN_2 = 2'h2 == io_chosen ? io_in_2_valid : _GEN_1; // @[Arbiter.scala 55:{16,16}]
  wire [63:0] _GEN_5 = 2'h1 == io_chosen ? io_in_1_bits_addr : io_in_0_bits_addr; // @[Arbiter.scala 56:{15,15}]
  wire [63:0] _GEN_6 = 2'h2 == io_chosen ? io_in_2_bits_addr : _GEN_5; // @[Arbiter.scala 56:{15,15}]
  wire [1:0] _GEN_9 = 2'h1 == io_chosen ? io_in_1_bits_source : io_in_0_bits_source; // @[Arbiter.scala 56:{15,15}]
  wire [1:0] _GEN_10 = 2'h2 == io_chosen ? io_in_2_bits_source : _GEN_9; // @[Arbiter.scala 56:{15,15}]
  wire  _ctrl_validMask_grantMask_lastGrant_T = io_out_ready & io_out_valid; // @[Decoupled.scala 52:35]
  reg [1:0] lastGrant; // @[Reg.scala 19:16]
  wire  grantMask_1 = 2'h1 > lastGrant; // @[Arbiter.scala 81:49]
  wire  grantMask_2 = 2'h2 > lastGrant; // @[Arbiter.scala 81:49]
  wire  grantMask_3 = 2'h3 > lastGrant; // @[Arbiter.scala 81:49]
  wire  validMask_1 = io_in_1_valid & grantMask_1; // @[Arbiter.scala 82:76]
  wire  validMask_2 = io_in_2_valid & grantMask_2; // @[Arbiter.scala 82:76]
  wire  validMask_3 = io_in_3_valid & grantMask_3; // @[Arbiter.scala 82:76]
  wire [1:0] _GEN_13 = io_in_2_valid ? 2'h2 : 2'h3; // @[Arbiter.scala 91:{26,35}]
  wire [1:0] _GEN_14 = io_in_1_valid ? 2'h1 : _GEN_13; // @[Arbiter.scala 91:{26,35}]
  wire [1:0] _GEN_15 = io_in_0_valid ? 2'h0 : _GEN_14; // @[Arbiter.scala 91:{26,35}]
  wire [1:0] _GEN_16 = validMask_3 ? 2'h3 : _GEN_15; // @[Arbiter.scala 93:{24,33}]
  wire [1:0] _GEN_17 = validMask_2 ? 2'h2 : _GEN_16; // @[Arbiter.scala 93:{24,33}]
  assign io_out_valid = 2'h3 == io_chosen ? io_in_3_valid : _GEN_2; // @[Arbiter.scala 55:{16,16}]
  assign io_out_bits_addr = 2'h3 == io_chosen ? io_in_3_bits_addr : _GEN_6; // @[Arbiter.scala 56:{15,15}]
  assign io_out_bits_source = 2'h3 == io_chosen ? io_in_3_bits_source : _GEN_10; // @[Arbiter.scala 56:{15,15}]
  assign io_chosen = validMask_1 ? 2'h1 : _GEN_17; // @[Arbiter.scala 93:{24,33}]
  always @(posedge clock) begin
    if (_ctrl_validMask_grantMask_lastGrant_T) begin // @[Reg.scala 20:18]
      lastGrant <= io_chosen; // @[Reg.scala 20:22]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  lastGrant = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module LastLevelPTW(
  input         clock,
  input         reset,
  output        io_ll_req_ready,
  input         io_ll_req_valid,
  input  [63:0] io_ll_req_bits_addr,
  input  [1:0]  io_ll_req_bits_source,
  input         io_mem_req_ready,
  output        io_mem_req_valid,
  output [63:0] io_mem_req_bits_addr,
  output [1:0]  io_mem_req_bits_source,
  output        io_mem_rsp_ready,
  input         io_mem_rsp_valid,
  input  [63:0] io_mem_rsp_bits_addr,
  input  [1:0]  io_mem_rsp_bits_source,
  input         io_ptw_rsp_ready,
  output        io_ptw_rsp_valid,
  output [63:0] io_ptw_rsp_bits_addr,
  output [1:0]  io_ptw_rsp_bits_source
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
`endif // RANDOMIZE_REG_INIT
  wire  memreq_arb_clock; // @[mmu.scala 185:26]
  wire  memreq_arb_io_in_0_valid; // @[mmu.scala 185:26]
  wire [63:0] memreq_arb_io_in_0_bits_addr; // @[mmu.scala 185:26]
  wire [1:0] memreq_arb_io_in_0_bits_source; // @[mmu.scala 185:26]
  wire  memreq_arb_io_in_1_valid; // @[mmu.scala 185:26]
  wire [63:0] memreq_arb_io_in_1_bits_addr; // @[mmu.scala 185:26]
  wire [1:0] memreq_arb_io_in_1_bits_source; // @[mmu.scala 185:26]
  wire  memreq_arb_io_in_2_valid; // @[mmu.scala 185:26]
  wire [63:0] memreq_arb_io_in_2_bits_addr; // @[mmu.scala 185:26]
  wire [1:0] memreq_arb_io_in_2_bits_source; // @[mmu.scala 185:26]
  wire  memreq_arb_io_in_3_valid; // @[mmu.scala 185:26]
  wire [63:0] memreq_arb_io_in_3_bits_addr; // @[mmu.scala 185:26]
  wire [1:0] memreq_arb_io_in_3_bits_source; // @[mmu.scala 185:26]
  wire  memreq_arb_io_out_ready; // @[mmu.scala 185:26]
  wire  memreq_arb_io_out_valid; // @[mmu.scala 185:26]
  wire [63:0] memreq_arb_io_out_bits_addr; // @[mmu.scala 185:26]
  wire [1:0] memreq_arb_io_out_bits_source; // @[mmu.scala 185:26]
  wire [1:0] memreq_arb_io_chosen; // @[mmu.scala 185:26]
  wire  ptwrsp_arb_clock; // @[mmu.scala 213:26]
  wire  ptwrsp_arb_io_in_0_valid; // @[mmu.scala 213:26]
  wire [63:0] ptwrsp_arb_io_in_0_bits_addr; // @[mmu.scala 213:26]
  wire [1:0] ptwrsp_arb_io_in_0_bits_source; // @[mmu.scala 213:26]
  wire  ptwrsp_arb_io_in_1_valid; // @[mmu.scala 213:26]
  wire [63:0] ptwrsp_arb_io_in_1_bits_addr; // @[mmu.scala 213:26]
  wire [1:0] ptwrsp_arb_io_in_1_bits_source; // @[mmu.scala 213:26]
  wire  ptwrsp_arb_io_in_2_valid; // @[mmu.scala 213:26]
  wire [63:0] ptwrsp_arb_io_in_2_bits_addr; // @[mmu.scala 213:26]
  wire [1:0] ptwrsp_arb_io_in_2_bits_source; // @[mmu.scala 213:26]
  wire  ptwrsp_arb_io_in_3_valid; // @[mmu.scala 213:26]
  wire [63:0] ptwrsp_arb_io_in_3_bits_addr; // @[mmu.scala 213:26]
  wire [1:0] ptwrsp_arb_io_in_3_bits_source; // @[mmu.scala 213:26]
  wire  ptwrsp_arb_io_out_ready; // @[mmu.scala 213:26]
  wire  ptwrsp_arb_io_out_valid; // @[mmu.scala 213:26]
  wire [63:0] ptwrsp_arb_io_out_bits_addr; // @[mmu.scala 213:26]
  wire [1:0] ptwrsp_arb_io_out_bits_source; // @[mmu.scala 213:26]
  wire [1:0] ptwrsp_arb_io_chosen; // @[mmu.scala 213:26]
  reg [63:0] entries_0_addr; // @[mmu.scala 167:24]
  reg [1:0] entries_0_source; // @[mmu.scala 167:24]
  reg [63:0] entries_1_addr; // @[mmu.scala 167:24]
  reg [1:0] entries_1_source; // @[mmu.scala 167:24]
  reg [63:0] entries_2_addr; // @[mmu.scala 167:24]
  reg [1:0] entries_2_source; // @[mmu.scala 167:24]
  reg [63:0] entries_3_addr; // @[mmu.scala 167:24]
  reg [1:0] entries_3_source; // @[mmu.scala 167:24]
  reg [1:0] state_0; // @[mmu.scala 169:22]
  reg [1:0] state_1; // @[mmu.scala 169:22]
  reg [1:0] state_2; // @[mmu.scala 169:22]
  reg [1:0] state_3; // @[mmu.scala 169:22]
  wire  is_idle_0 = state_0 == 2'h0; // @[mmu.scala 170:29]
  wire  is_idle_1 = state_1 == 2'h0; // @[mmu.scala 170:29]
  wire  is_idle_2 = state_2 == 2'h0; // @[mmu.scala 170:29]
  wire  is_idle_3 = state_3 == 2'h0; // @[mmu.scala 170:29]
  wire [1:0] _enq_ptr_T = is_idle_2 ? 2'h2 : 2'h3; // @[Mux.scala 47:70]
  wire [1:0] _enq_ptr_T_1 = is_idle_1 ? 2'h1 : _enq_ptr_T; // @[Mux.scala 47:70]
  wire [1:0] enq_ptr = is_idle_0 ? 2'h0 : _enq_ptr_T_1; // @[Mux.scala 47:70]
  wire  is_memwait_0 = state_0 == 2'h2; // @[mmu.scala 176:32]
  wire  is_memwait_1 = state_1 == 2'h2; // @[mmu.scala 176:32]
  wire  is_memwait_2 = state_2 == 2'h2; // @[mmu.scala 176:32]
  wire  is_memwait_3 = state_3 == 2'h2; // @[mmu.scala 176:32]
  wire  is_ptwrsp_0 = state_0 == 2'h3; // @[mmu.scala 177:31]
  wire  is_ptwrsp_1 = state_1 == 2'h3; // @[mmu.scala 177:31]
  wire  is_ptwrsp_2 = state_2 == 2'h3; // @[mmu.scala 177:31]
  wire  _T = io_ll_req_ready & io_ll_req_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _GEN_0 = 2'h0 == enq_ptr ? 2'h1 : state_0; // @[mmu.scala 181:{20,20} 169:22]
  wire [1:0] _GEN_1 = 2'h1 == enq_ptr ? 2'h1 : state_1; // @[mmu.scala 181:{20,20} 169:22]
  wire [1:0] _GEN_2 = 2'h2 == enq_ptr ? 2'h1 : state_2; // @[mmu.scala 181:{20,20} 169:22]
  wire [1:0] _GEN_3 = 2'h3 == enq_ptr ? 2'h1 : state_3; // @[mmu.scala 181:{20,20} 169:22]
  wire [63:0] _GEN_4 = 2'h0 == enq_ptr ? io_ll_req_bits_addr : entries_0_addr; // @[mmu.scala 182:{22,22} 167:24]
  wire [63:0] _GEN_5 = 2'h1 == enq_ptr ? io_ll_req_bits_addr : entries_1_addr; // @[mmu.scala 182:{22,22} 167:24]
  wire [63:0] _GEN_6 = 2'h2 == enq_ptr ? io_ll_req_bits_addr : entries_2_addr; // @[mmu.scala 182:{22,22} 167:24]
  wire [63:0] _GEN_7 = 2'h3 == enq_ptr ? io_ll_req_bits_addr : entries_3_addr; // @[mmu.scala 182:{22,22} 167:24]
  wire [1:0] _GEN_8 = 2'h0 == enq_ptr ? io_ll_req_bits_source : entries_0_source; // @[mmu.scala 182:{22,22} 167:24]
  wire [1:0] _GEN_9 = 2'h1 == enq_ptr ? io_ll_req_bits_source : entries_1_source; // @[mmu.scala 182:{22,22} 167:24]
  wire [1:0] _GEN_10 = 2'h2 == enq_ptr ? io_ll_req_bits_source : entries_2_source; // @[mmu.scala 182:{22,22} 167:24]
  wire [1:0] _GEN_11 = 2'h3 == enq_ptr ? io_ll_req_bits_source : entries_3_source; // @[mmu.scala 182:{22,22} 167:24]
  wire [1:0] _GEN_12 = _T ? _GEN_0 : state_0; // @[mmu.scala 169:22 180:23]
  wire [1:0] _GEN_13 = _T ? _GEN_1 : state_1; // @[mmu.scala 169:22 180:23]
  wire [1:0] _GEN_14 = _T ? _GEN_2 : state_2; // @[mmu.scala 169:22 180:23]
  wire [1:0] _GEN_15 = _T ? _GEN_3 : state_3; // @[mmu.scala 169:22 180:23]
  wire [63:0] _GEN_16 = _T ? _GEN_4 : entries_0_addr; // @[mmu.scala 180:23 167:24]
  wire [63:0] _GEN_17 = _T ? _GEN_5 : entries_1_addr; // @[mmu.scala 180:23 167:24]
  wire [63:0] _GEN_18 = _T ? _GEN_6 : entries_2_addr; // @[mmu.scala 180:23 167:24]
  wire [63:0] _GEN_19 = _T ? _GEN_7 : entries_3_addr; // @[mmu.scala 180:23 167:24]
  wire [1:0] _GEN_20 = _T ? _GEN_8 : entries_0_source; // @[mmu.scala 180:23 167:24]
  wire [1:0] _GEN_21 = _T ? _GEN_9 : entries_1_source; // @[mmu.scala 180:23 167:24]
  wire [1:0] _GEN_22 = _T ? _GEN_10 : entries_2_source; // @[mmu.scala 180:23 167:24]
  wire [1:0] _GEN_23 = _T ? _GEN_11 : entries_3_source; // @[mmu.scala 180:23 167:24]
  wire  _T_1 = io_mem_req_ready & io_mem_req_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _GEN_24 = 2'h0 == memreq_arb_io_chosen ? 2'h2 : _GEN_12; // @[mmu.scala 195:{33,33}]
  wire [1:0] _GEN_25 = 2'h1 == memreq_arb_io_chosen ? 2'h2 : _GEN_13; // @[mmu.scala 195:{33,33}]
  wire [1:0] _GEN_26 = 2'h2 == memreq_arb_io_chosen ? 2'h2 : _GEN_14; // @[mmu.scala 195:{33,33}]
  wire [1:0] _GEN_27 = 2'h3 == memreq_arb_io_chosen ? 2'h2 : _GEN_15; // @[mmu.scala 195:{33,33}]
  wire [1:0] _GEN_28 = _T_1 ? _GEN_24 : _GEN_12; // @[mmu.scala 194:24]
  wire [1:0] _GEN_29 = _T_1 ? _GEN_25 : _GEN_13; // @[mmu.scala 194:24]
  wire [1:0] _GEN_30 = _T_1 ? _GEN_26 : _GEN_14; // @[mmu.scala 194:24]
  wire [1:0] _GEN_31 = _T_1 ? _GEN_27 : _GEN_15; // @[mmu.scala 194:24]
  wire  _T_2 = io_mem_rsp_ready & io_mem_rsp_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _GEN_32 = is_memwait_0 & entries_0_source == io_mem_rsp_bits_source ? 2'h3 : _GEN_28; // @[mmu.scala 201:74 202:18]
  wire [63:0] _GEN_33 = is_memwait_0 & entries_0_source == io_mem_rsp_bits_source ? io_mem_rsp_bits_addr : _GEN_16; // @[mmu.scala 201:74 203:25]
  wire [1:0] _GEN_34 = is_memwait_1 & entries_1_source == io_mem_rsp_bits_source ? 2'h3 : _GEN_29; // @[mmu.scala 201:74 202:18]
  wire [63:0] _GEN_35 = is_memwait_1 & entries_1_source == io_mem_rsp_bits_source ? io_mem_rsp_bits_addr : _GEN_17; // @[mmu.scala 201:74 203:25]
  wire [1:0] _GEN_36 = is_memwait_2 & entries_2_source == io_mem_rsp_bits_source ? 2'h3 : _GEN_30; // @[mmu.scala 201:74 202:18]
  wire [63:0] _GEN_37 = is_memwait_2 & entries_2_source == io_mem_rsp_bits_source ? io_mem_rsp_bits_addr : _GEN_18; // @[mmu.scala 201:74 203:25]
  wire [1:0] _GEN_38 = is_memwait_3 & entries_3_source == io_mem_rsp_bits_source ? 2'h3 : _GEN_31; // @[mmu.scala 201:74 202:18]
  wire [63:0] _GEN_39 = is_memwait_3 & entries_3_source == io_mem_rsp_bits_source ? io_mem_rsp_bits_addr : _GEN_19; // @[mmu.scala 201:74 203:25]
  wire [1:0] _GEN_40 = _T_2 ? _GEN_32 : _GEN_28; // @[mmu.scala 199:24]
  wire [63:0] _GEN_41 = _T_2 ? _GEN_33 : _GEN_16; // @[mmu.scala 199:24]
  wire [1:0] _GEN_42 = _T_2 ? _GEN_34 : _GEN_29; // @[mmu.scala 199:24]
  wire [63:0] _GEN_43 = _T_2 ? _GEN_35 : _GEN_17; // @[mmu.scala 199:24]
  wire [1:0] _GEN_44 = _T_2 ? _GEN_36 : _GEN_30; // @[mmu.scala 199:24]
  wire [63:0] _GEN_45 = _T_2 ? _GEN_37 : _GEN_18; // @[mmu.scala 199:24]
  wire [1:0] _GEN_46 = _T_2 ? _GEN_38 : _GEN_31; // @[mmu.scala 199:24]
  wire [63:0] _GEN_47 = _T_2 ? _GEN_39 : _GEN_19; // @[mmu.scala 199:24]
  wire [1:0] _deq_ptr_T = is_ptwrsp_2 ? 2'h2 : 2'h3; // @[Mux.scala 47:70]
  wire [1:0] _deq_ptr_T_1 = is_ptwrsp_1 ? 2'h1 : _deq_ptr_T; // @[Mux.scala 47:70]
  wire [1:0] deq_ptr = is_ptwrsp_0 ? 2'h0 : _deq_ptr_T_1; // @[Mux.scala 47:70]
  wire  _T_11 = io_ptw_rsp_ready & io_ptw_rsp_valid; // @[Decoupled.scala 52:35]
  RRArbiter_2 memreq_arb ( // @[mmu.scala 185:26]
    .clock(memreq_arb_clock),
    .io_in_0_valid(memreq_arb_io_in_0_valid),
    .io_in_0_bits_addr(memreq_arb_io_in_0_bits_addr),
    .io_in_0_bits_source(memreq_arb_io_in_0_bits_source),
    .io_in_1_valid(memreq_arb_io_in_1_valid),
    .io_in_1_bits_addr(memreq_arb_io_in_1_bits_addr),
    .io_in_1_bits_source(memreq_arb_io_in_1_bits_source),
    .io_in_2_valid(memreq_arb_io_in_2_valid),
    .io_in_2_bits_addr(memreq_arb_io_in_2_bits_addr),
    .io_in_2_bits_source(memreq_arb_io_in_2_bits_source),
    .io_in_3_valid(memreq_arb_io_in_3_valid),
    .io_in_3_bits_addr(memreq_arb_io_in_3_bits_addr),
    .io_in_3_bits_source(memreq_arb_io_in_3_bits_source),
    .io_out_ready(memreq_arb_io_out_ready),
    .io_out_valid(memreq_arb_io_out_valid),
    .io_out_bits_addr(memreq_arb_io_out_bits_addr),
    .io_out_bits_source(memreq_arb_io_out_bits_source),
    .io_chosen(memreq_arb_io_chosen)
  );
  RRArbiter_2 ptwrsp_arb ( // @[mmu.scala 213:26]
    .clock(ptwrsp_arb_clock),
    .io_in_0_valid(ptwrsp_arb_io_in_0_valid),
    .io_in_0_bits_addr(ptwrsp_arb_io_in_0_bits_addr),
    .io_in_0_bits_source(ptwrsp_arb_io_in_0_bits_source),
    .io_in_1_valid(ptwrsp_arb_io_in_1_valid),
    .io_in_1_bits_addr(ptwrsp_arb_io_in_1_bits_addr),
    .io_in_1_bits_source(ptwrsp_arb_io_in_1_bits_source),
    .io_in_2_valid(ptwrsp_arb_io_in_2_valid),
    .io_in_2_bits_addr(ptwrsp_arb_io_in_2_bits_addr),
    .io_in_2_bits_source(ptwrsp_arb_io_in_2_bits_source),
    .io_in_3_valid(ptwrsp_arb_io_in_3_valid),
    .io_in_3_bits_addr(ptwrsp_arb_io_in_3_bits_addr),
    .io_in_3_bits_source(ptwrsp_arb_io_in_3_bits_source),
    .io_out_ready(ptwrsp_arb_io_out_ready),
    .io_out_valid(ptwrsp_arb_io_out_valid),
    .io_out_bits_addr(ptwrsp_arb_io_out_bits_addr),
    .io_out_bits_source(ptwrsp_arb_io_out_bits_source),
    .io_chosen(ptwrsp_arb_io_chosen)
  );
  assign io_ll_req_ready = is_idle_0 | is_idle_1 | is_idle_2 | is_idle_3; // @[mmu.scala 172:32]
  assign io_mem_req_valid = memreq_arb_io_out_valid; // @[mmu.scala 191:20]
  assign io_mem_req_bits_addr = memreq_arb_io_out_bits_addr; // @[mmu.scala 190:19]
  assign io_mem_req_bits_source = memreq_arb_io_out_bits_source; // @[mmu.scala 190:19]
  assign io_mem_rsp_ready = is_memwait_0 | is_memwait_1 | is_memwait_2 | is_memwait_3; // @[mmu.scala 198:43]
  assign io_ptw_rsp_valid = ptwrsp_arb_io_out_valid; // @[mmu.scala 218:14]
  assign io_ptw_rsp_bits_addr = ptwrsp_arb_io_out_bits_addr; // @[mmu.scala 218:14]
  assign io_ptw_rsp_bits_source = ptwrsp_arb_io_out_bits_source; // @[mmu.scala 218:14]
  assign memreq_arb_clock = clock;
  assign memreq_arb_io_in_0_valid = state_0 == 2'h1; // @[mmu.scala 175:31]
  assign memreq_arb_io_in_0_bits_addr = entries_0_addr; // @[mmu.scala 187:30]
  assign memreq_arb_io_in_0_bits_source = entries_0_source; // @[mmu.scala 187:30]
  assign memreq_arb_io_in_1_valid = state_1 == 2'h1; // @[mmu.scala 175:31]
  assign memreq_arb_io_in_1_bits_addr = entries_1_addr; // @[mmu.scala 187:30]
  assign memreq_arb_io_in_1_bits_source = entries_1_source; // @[mmu.scala 187:30]
  assign memreq_arb_io_in_2_valid = state_2 == 2'h1; // @[mmu.scala 175:31]
  assign memreq_arb_io_in_2_bits_addr = entries_2_addr; // @[mmu.scala 187:30]
  assign memreq_arb_io_in_2_bits_source = entries_2_source; // @[mmu.scala 187:30]
  assign memreq_arb_io_in_3_valid = state_3 == 2'h1; // @[mmu.scala 175:31]
  assign memreq_arb_io_in_3_bits_addr = entries_3_addr; // @[mmu.scala 187:30]
  assign memreq_arb_io_in_3_bits_source = entries_3_source; // @[mmu.scala 187:30]
  assign memreq_arb_io_out_ready = io_mem_req_ready; // @[mmu.scala 192:27]
  assign ptwrsp_arb_clock = clock;
  assign ptwrsp_arb_io_in_0_valid = state_0 == 2'h3; // @[mmu.scala 177:31]
  assign ptwrsp_arb_io_in_0_bits_addr = entries_0_addr; // @[mmu.scala 215:30]
  assign ptwrsp_arb_io_in_0_bits_source = entries_0_source; // @[mmu.scala 215:30]
  assign ptwrsp_arb_io_in_1_valid = state_1 == 2'h3; // @[mmu.scala 177:31]
  assign ptwrsp_arb_io_in_1_bits_addr = entries_1_addr; // @[mmu.scala 215:30]
  assign ptwrsp_arb_io_in_1_bits_source = entries_1_source; // @[mmu.scala 215:30]
  assign ptwrsp_arb_io_in_2_valid = state_2 == 2'h3; // @[mmu.scala 177:31]
  assign ptwrsp_arb_io_in_2_bits_addr = entries_2_addr; // @[mmu.scala 215:30]
  assign ptwrsp_arb_io_in_2_bits_source = entries_2_source; // @[mmu.scala 215:30]
  assign ptwrsp_arb_io_in_3_valid = state_3 == 2'h3; // @[mmu.scala 177:31]
  assign ptwrsp_arb_io_in_3_bits_addr = entries_3_addr; // @[mmu.scala 215:30]
  assign ptwrsp_arb_io_in_3_bits_source = entries_3_source; // @[mmu.scala 215:30]
  assign ptwrsp_arb_io_out_ready = io_ptw_rsp_ready; // @[mmu.scala 218:14]
  always @(posedge clock) begin
    if (reset) begin // @[mmu.scala 167:24]
      entries_0_addr <= 64'h0; // @[mmu.scala 167:24]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h0 == deq_ptr) begin // @[mmu.scala 211:22]
        entries_0_addr <= 64'h0; // @[mmu.scala 211:22]
      end else begin
        entries_0_addr <= _GEN_41;
      end
    end else begin
      entries_0_addr <= _GEN_41;
    end
    if (reset) begin // @[mmu.scala 167:24]
      entries_0_source <= 2'h0; // @[mmu.scala 167:24]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h0 == deq_ptr) begin // @[mmu.scala 211:22]
        entries_0_source <= 2'h0; // @[mmu.scala 211:22]
      end else begin
        entries_0_source <= _GEN_20;
      end
    end else begin
      entries_0_source <= _GEN_20;
    end
    if (reset) begin // @[mmu.scala 167:24]
      entries_1_addr <= 64'h0; // @[mmu.scala 167:24]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h1 == deq_ptr) begin // @[mmu.scala 211:22]
        entries_1_addr <= 64'h0; // @[mmu.scala 211:22]
      end else begin
        entries_1_addr <= _GEN_43;
      end
    end else begin
      entries_1_addr <= _GEN_43;
    end
    if (reset) begin // @[mmu.scala 167:24]
      entries_1_source <= 2'h0; // @[mmu.scala 167:24]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h1 == deq_ptr) begin // @[mmu.scala 211:22]
        entries_1_source <= 2'h0; // @[mmu.scala 211:22]
      end else begin
        entries_1_source <= _GEN_21;
      end
    end else begin
      entries_1_source <= _GEN_21;
    end
    if (reset) begin // @[mmu.scala 167:24]
      entries_2_addr <= 64'h0; // @[mmu.scala 167:24]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h2 == deq_ptr) begin // @[mmu.scala 211:22]
        entries_2_addr <= 64'h0; // @[mmu.scala 211:22]
      end else begin
        entries_2_addr <= _GEN_45;
      end
    end else begin
      entries_2_addr <= _GEN_45;
    end
    if (reset) begin // @[mmu.scala 167:24]
      entries_2_source <= 2'h0; // @[mmu.scala 167:24]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h2 == deq_ptr) begin // @[mmu.scala 211:22]
        entries_2_source <= 2'h0; // @[mmu.scala 211:22]
      end else begin
        entries_2_source <= _GEN_22;
      end
    end else begin
      entries_2_source <= _GEN_22;
    end
    if (reset) begin // @[mmu.scala 167:24]
      entries_3_addr <= 64'h0; // @[mmu.scala 167:24]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h3 == deq_ptr) begin // @[mmu.scala 211:22]
        entries_3_addr <= 64'h0; // @[mmu.scala 211:22]
      end else begin
        entries_3_addr <= _GEN_47;
      end
    end else begin
      entries_3_addr <= _GEN_47;
    end
    if (reset) begin // @[mmu.scala 167:24]
      entries_3_source <= 2'h0; // @[mmu.scala 167:24]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h3 == deq_ptr) begin // @[mmu.scala 211:22]
        entries_3_source <= 2'h0; // @[mmu.scala 211:22]
      end else begin
        entries_3_source <= _GEN_23;
      end
    end else begin
      entries_3_source <= _GEN_23;
    end
    if (reset) begin // @[mmu.scala 169:22]
      state_0 <= 2'h0; // @[mmu.scala 169:22]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h0 == deq_ptr) begin // @[mmu.scala 210:20]
        state_0 <= 2'h0; // @[mmu.scala 210:20]
      end else begin
        state_0 <= _GEN_40;
      end
    end else begin
      state_0 <= _GEN_40;
    end
    if (reset) begin // @[mmu.scala 169:22]
      state_1 <= 2'h0; // @[mmu.scala 169:22]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h1 == deq_ptr) begin // @[mmu.scala 210:20]
        state_1 <= 2'h0; // @[mmu.scala 210:20]
      end else begin
        state_1 <= _GEN_42;
      end
    end else begin
      state_1 <= _GEN_42;
    end
    if (reset) begin // @[mmu.scala 169:22]
      state_2 <= 2'h0; // @[mmu.scala 169:22]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h2 == deq_ptr) begin // @[mmu.scala 210:20]
        state_2 <= 2'h0; // @[mmu.scala 210:20]
      end else begin
        state_2 <= _GEN_44;
      end
    end else begin
      state_2 <= _GEN_44;
    end
    if (reset) begin // @[mmu.scala 169:22]
      state_3 <= 2'h0; // @[mmu.scala 169:22]
    end else if (_T_11) begin // @[mmu.scala 209:24]
      if (2'h3 == deq_ptr) begin // @[mmu.scala 210:20]
        state_3 <= 2'h0; // @[mmu.scala 210:20]
      end else begin
        state_3 <= _GEN_46;
      end
    end else begin
      state_3 <= _GEN_46;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  entries_0_addr = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  entries_0_source = _RAND_1[1:0];
  _RAND_2 = {2{`RANDOM}};
  entries_1_addr = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  entries_1_source = _RAND_3[1:0];
  _RAND_4 = {2{`RANDOM}};
  entries_2_addr = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  entries_2_source = _RAND_5[1:0];
  _RAND_6 = {2{`RANDOM}};
  entries_3_addr = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  entries_3_source = _RAND_7[1:0];
  _RAND_8 = {1{`RANDOM}};
  state_0 = _RAND_8[1:0];
  _RAND_9 = {1{`RANDOM}};
  state_1 = _RAND_9[1:0];
  _RAND_10 = {1{`RANDOM}};
  state_2 = _RAND_10[1:0];
  _RAND_11 = {1{`RANDOM}};
  state_3 = _RAND_11[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PageCache(
  input         clock,
  input         reset,
  output        io_in_req_ready,
  input         io_in_req_valid,
  input  [63:0] io_in_req_bits_addr,
  input  [1:0]  io_in_req_bits_source,
  input         io_in_rsp_ready,
  output        io_in_rsp_valid,
  output [63:0] io_in_rsp_bits_addr,
  output [1:0]  io_in_rsp_bits_source,
  input         io_out_req_ready,
  output        io_out_req_valid,
  output [63:0] io_out_req_bits_addr,
  output [1:0]  io_out_req_bits_source,
  output        io_out_rsp_ready,
  input         io_out_rsp_valid,
  input  [63:0] io_out_rsp_bits_data,
  input  [1:0]  io_out_rsp_bits_source
);
  wire  mem_req_fifo_clock; // @[mmu.scala 262:26]
  wire  mem_req_fifo_reset; // @[mmu.scala 262:26]
  wire  mem_req_fifo_io_enq_ready; // @[mmu.scala 262:26]
  wire  mem_req_fifo_io_enq_valid; // @[mmu.scala 262:26]
  wire [63:0] mem_req_fifo_io_enq_bits_addr; // @[mmu.scala 262:26]
  wire [1:0] mem_req_fifo_io_enq_bits_source; // @[mmu.scala 262:26]
  wire  mem_req_fifo_io_deq_ready; // @[mmu.scala 262:26]
  wire  mem_req_fifo_io_deq_valid; // @[mmu.scala 262:26]
  wire [63:0] mem_req_fifo_io_deq_bits_addr; // @[mmu.scala 262:26]
  wire [1:0] mem_req_fifo_io_deq_bits_source; // @[mmu.scala 262:26]
  wire  mem_rsp_fifo_clock; // @[mmu.scala 263:26]
  wire  mem_rsp_fifo_reset; // @[mmu.scala 263:26]
  wire  mem_rsp_fifo_io_enq_ready; // @[mmu.scala 263:26]
  wire  mem_rsp_fifo_io_enq_valid; // @[mmu.scala 263:26]
  wire [63:0] mem_rsp_fifo_io_enq_bits_addr; // @[mmu.scala 263:26]
  wire [1:0] mem_rsp_fifo_io_enq_bits_source; // @[mmu.scala 263:26]
  wire  mem_rsp_fifo_io_deq_ready; // @[mmu.scala 263:26]
  wire  mem_rsp_fifo_io_deq_valid; // @[mmu.scala 263:26]
  wire [63:0] mem_rsp_fifo_io_deq_bits_addr; // @[mmu.scala 263:26]
  wire [1:0] mem_rsp_fifo_io_deq_bits_source; // @[mmu.scala 263:26]
  Queue_1 mem_req_fifo ( // @[mmu.scala 262:26]
    .clock(mem_req_fifo_clock),
    .reset(mem_req_fifo_reset),
    .io_enq_ready(mem_req_fifo_io_enq_ready),
    .io_enq_valid(mem_req_fifo_io_enq_valid),
    .io_enq_bits_addr(mem_req_fifo_io_enq_bits_addr),
    .io_enq_bits_source(mem_req_fifo_io_enq_bits_source),
    .io_deq_ready(mem_req_fifo_io_deq_ready),
    .io_deq_valid(mem_req_fifo_io_deq_valid),
    .io_deq_bits_addr(mem_req_fifo_io_deq_bits_addr),
    .io_deq_bits_source(mem_req_fifo_io_deq_bits_source)
  );
  Queue_1 mem_rsp_fifo ( // @[mmu.scala 263:26]
    .clock(mem_rsp_fifo_clock),
    .reset(mem_rsp_fifo_reset),
    .io_enq_ready(mem_rsp_fifo_io_enq_ready),
    .io_enq_valid(mem_rsp_fifo_io_enq_valid),
    .io_enq_bits_addr(mem_rsp_fifo_io_enq_bits_addr),
    .io_enq_bits_source(mem_rsp_fifo_io_enq_bits_source),
    .io_deq_ready(mem_rsp_fifo_io_deq_ready),
    .io_deq_valid(mem_rsp_fifo_io_deq_valid),
    .io_deq_bits_addr(mem_rsp_fifo_io_deq_bits_addr),
    .io_deq_bits_source(mem_rsp_fifo_io_deq_bits_source)
  );
  assign io_in_req_ready = mem_req_fifo_io_enq_ready; // @[mmu.scala 265:18]
  assign io_in_rsp_valid = mem_rsp_fifo_io_deq_valid; // @[mmu.scala 269:12]
  assign io_in_rsp_bits_addr = mem_rsp_fifo_io_deq_bits_addr; // @[mmu.scala 269:12]
  assign io_in_rsp_bits_source = mem_rsp_fifo_io_deq_bits_source; // @[mmu.scala 269:12]
  assign io_out_req_valid = mem_req_fifo_io_deq_valid; // @[mmu.scala 268:13]
  assign io_out_req_bits_addr = mem_req_fifo_io_deq_bits_addr; // @[mmu.scala 268:13]
  assign io_out_req_bits_source = mem_req_fifo_io_deq_bits_source; // @[mmu.scala 268:13]
  assign io_out_rsp_ready = mem_rsp_fifo_io_enq_ready; // @[mmu.scala 273:19]
  assign mem_req_fifo_clock = clock;
  assign mem_req_fifo_reset = reset;
  assign mem_req_fifo_io_enq_valid = io_in_req_valid; // @[mmu.scala 264:18]
  assign mem_req_fifo_io_enq_bits_addr = io_in_req_bits_addr; // @[mmu.scala 267:22]
  assign mem_req_fifo_io_enq_bits_source = io_in_req_bits_source; // @[mmu.scala 266:24]
  assign mem_req_fifo_io_deq_ready = io_out_req_ready; // @[mmu.scala 268:13]
  assign mem_rsp_fifo_clock = clock;
  assign mem_rsp_fifo_reset = reset;
  assign mem_rsp_fifo_io_enq_valid = io_out_rsp_valid; // @[mmu.scala 272:19]
  assign mem_rsp_fifo_io_enq_bits_addr = io_out_rsp_bits_data; // @[mmu.scala 271:23]
  assign mem_rsp_fifo_io_enq_bits_source = io_out_rsp_bits_source; // @[mmu.scala 270:25]
  assign mem_rsp_fifo_io_deq_ready = io_in_rsp_ready; // @[mmu.scala 269:12]
endmodule
module Arbiter(
  output        io_in_0_ready,
  input         io_in_0_valid,
  input  [63:0] io_in_0_bits_addr,
  input  [2:0]  io_in_0_bits_source,
  output        io_in_1_ready,
  input         io_in_1_valid,
  input  [63:0] io_in_1_bits_addr,
  input  [2:0]  io_in_1_bits_source,
  input         io_out_ready,
  output        io_out_valid,
  output [63:0] io_out_bits_addr,
  output [2:0]  io_out_bits_source
);
  wire  grant_1 = ~io_in_0_valid; // @[Arbiter.scala 45:78]
  assign io_in_0_ready = io_out_ready; // @[Arbiter.scala 146:19]
  assign io_in_1_ready = grant_1 & io_out_ready; // @[Arbiter.scala 146:19]
  assign io_out_valid = ~grant_1 | io_in_1_valid; // @[Arbiter.scala 147:31]
  assign io_out_bits_addr = io_in_0_valid ? io_in_0_bits_addr : io_in_1_bits_addr; // @[Arbiter.scala 136:15 138:26 140:19]
  assign io_out_bits_source = io_in_0_valid ? io_in_0_bits_source : io_in_1_bits_source; // @[Arbiter.scala 136:15 138:26 140:19]
endmodule
module MMUMemArbiter(
  output        io_memReqVecIn_0_ready,
  input         io_memReqVecIn_0_valid,
  input  [63:0] io_memReqVecIn_0_bits_addr,
  input  [1:0]  io_memReqVecIn_0_bits_source,
  output        io_memReqVecIn_1_ready,
  input         io_memReqVecIn_1_valid,
  input  [63:0] io_memReqVecIn_1_bits_addr,
  input  [1:0]  io_memReqVecIn_1_bits_source,
  input         io_memReqOut_ready,
  output        io_memReqOut_valid,
  output [63:0] io_memReqOut_bits_addr,
  output [2:0]  io_memReqOut_bits_source,
  output        io_memRspIn_ready,
  input         io_memRspIn_valid,
  input  [63:0] io_memRspIn_bits_data,
  input  [2:0]  io_memRspIn_bits_source,
  input         io_memRspVecOut_0_ready,
  output        io_memRspVecOut_0_valid,
  output [63:0] io_memRspVecOut_0_bits_data,
  output [1:0]  io_memRspVecOut_0_bits_source,
  input         io_memRspVecOut_1_ready,
  output        io_memRspVecOut_1_valid,
  output [63:0] io_memRspVecOut_1_bits_data,
  output [1:0]  io_memRspVecOut_1_bits_source
);
  wire  memReqArb_io_in_0_ready; // @[mmu.scala 294:25]
  wire  memReqArb_io_in_0_valid; // @[mmu.scala 294:25]
  wire [63:0] memReqArb_io_in_0_bits_addr; // @[mmu.scala 294:25]
  wire [2:0] memReqArb_io_in_0_bits_source; // @[mmu.scala 294:25]
  wire  memReqArb_io_in_1_ready; // @[mmu.scala 294:25]
  wire  memReqArb_io_in_1_valid; // @[mmu.scala 294:25]
  wire [63:0] memReqArb_io_in_1_bits_addr; // @[mmu.scala 294:25]
  wire [2:0] memReqArb_io_in_1_bits_source; // @[mmu.scala 294:25]
  wire  memReqArb_io_out_ready; // @[mmu.scala 294:25]
  wire  memReqArb_io_out_valid; // @[mmu.scala 294:25]
  wire [63:0] memReqArb_io_out_bits_addr; // @[mmu.scala 294:25]
  wire [2:0] memReqArb_io_out_bits_source; // @[mmu.scala 294:25]
  wire [1:0] _io_memRspIn_ready_T_1 = 2'h1 << io_memRspIn_bits_source[2]; // @[OneHot.scala 57:35]
  wire [1:0] _io_memRspIn_ready_T_2 = {io_memRspVecOut_0_ready,io_memRspVecOut_1_ready}; // @[Cat.scala 33:92]
  wire [1:0] _io_memRspIn_ready_T_5 = {_io_memRspIn_ready_T_2[0],_io_memRspIn_ready_T_2[1]}; // @[Cat.scala 33:92]
  wire [1:0] _io_memRspIn_ready_T_6 = _io_memRspIn_ready_T_1 & _io_memRspIn_ready_T_5; // @[Mux.scala 30:47]
  Arbiter memReqArb ( // @[mmu.scala 294:25]
    .io_in_0_ready(memReqArb_io_in_0_ready),
    .io_in_0_valid(memReqArb_io_in_0_valid),
    .io_in_0_bits_addr(memReqArb_io_in_0_bits_addr),
    .io_in_0_bits_source(memReqArb_io_in_0_bits_source),
    .io_in_1_ready(memReqArb_io_in_1_ready),
    .io_in_1_valid(memReqArb_io_in_1_valid),
    .io_in_1_bits_addr(memReqArb_io_in_1_bits_addr),
    .io_in_1_bits_source(memReqArb_io_in_1_bits_source),
    .io_out_ready(memReqArb_io_out_ready),
    .io_out_valid(memReqArb_io_out_valid),
    .io_out_bits_addr(memReqArb_io_out_bits_addr),
    .io_out_bits_source(memReqArb_io_out_bits_source)
  );
  assign io_memReqVecIn_0_ready = memReqArb_io_in_0_ready; // @[mmu.scala 295:19]
  assign io_memReqVecIn_1_ready = memReqArb_io_in_1_ready; // @[mmu.scala 295:19]
  assign io_memReqOut_valid = memReqArb_io_out_valid; // @[mmu.scala 299:16]
  assign io_memReqOut_bits_addr = memReqArb_io_out_bits_addr; // @[mmu.scala 299:16]
  assign io_memReqOut_bits_source = memReqArb_io_out_bits_source; // @[mmu.scala 299:16]
  assign io_memRspIn_ready = |_io_memRspIn_ready_T_6; // @[Mux.scala 30:53]
  assign io_memRspVecOut_0_valid = ~io_memRspIn_bits_source[2] & io_memRspIn_valid; // @[mmu.scala 306:98]
  assign io_memRspVecOut_0_bits_data = io_memRspIn_bits_data; // @[mmu.scala 304:29]
  assign io_memRspVecOut_0_bits_source = io_memRspIn_bits_source[1:0]; // @[mmu.scala 304:29]
  assign io_memRspVecOut_1_valid = io_memRspIn_bits_source[2] & io_memRspIn_valid; // @[mmu.scala 306:98]
  assign io_memRspVecOut_1_bits_data = io_memRspIn_bits_data; // @[mmu.scala 304:29]
  assign io_memRspVecOut_1_bits_source = io_memRspIn_bits_source[1:0]; // @[mmu.scala 304:29]
  assign memReqArb_io_in_0_valid = io_memReqVecIn_0_valid; // @[mmu.scala 295:19]
  assign memReqArb_io_in_0_bits_addr = io_memReqVecIn_0_bits_addr; // @[mmu.scala 295:19]
  assign memReqArb_io_in_0_bits_source = {1'h0,io_memReqVecIn_0_bits_source}; // @[Cat.scala 33:92]
  assign memReqArb_io_in_1_valid = io_memReqVecIn_1_valid; // @[mmu.scala 295:19]
  assign memReqArb_io_in_1_bits_addr = io_memReqVecIn_1_bits_addr; // @[mmu.scala 295:19]
  assign memReqArb_io_in_1_bits_source = {1'h1,io_memReqVecIn_1_bits_source}; // @[Cat.scala 33:92]
  assign memReqArb_io_out_ready = io_memReqOut_ready; // @[mmu.scala 299:16]
endmodule
module MMU(
  input         clock,
  input         reset,
  output        io_mmu_req_ready,
  input         io_mmu_req_valid,
  input  [63:0] io_mmu_req_bits_addr,
  input  [63:0] io_mmu_req_bits_PTBR,
  input  [1:0]  io_mmu_req_bits_source,
  input         io_mmu_rsp_ready,
  output        io_mmu_rsp_valid,
  output [63:0] io_mmu_rsp_bits_addr,
  output [1:0]  io_mmu_rsp_bits_source,
  input         io_mem_req_ready,
  output        io_mem_req_valid,
  output [63:0] io_mem_req_bits_addr,
  output [2:0]  io_mem_req_bits_source,
  output        io_mem_rsp_ready,
  input         io_mem_rsp_valid,
  input  [63:0] io_mem_rsp_bits_data,
  input  [2:0]  io_mem_rsp_bits_source
);
  wire  tlb_clock; // @[mmu.scala 321:17]
  wire  tlb_reset; // @[mmu.scala 321:17]
  wire  tlb_io_tlb_req_ready; // @[mmu.scala 321:17]
  wire  tlb_io_tlb_req_valid; // @[mmu.scala 321:17]
  wire [63:0] tlb_io_tlb_req_bits_addr; // @[mmu.scala 321:17]
  wire [63:0] tlb_io_tlb_req_bits_PTBR; // @[mmu.scala 321:17]
  wire [1:0] tlb_io_tlb_req_bits_source; // @[mmu.scala 321:17]
  wire  tlb_io_tlb_rsp_ready; // @[mmu.scala 321:17]
  wire  tlb_io_tlb_rsp_valid; // @[mmu.scala 321:17]
  wire [63:0] tlb_io_tlb_rsp_bits_addr; // @[mmu.scala 321:17]
  wire [1:0] tlb_io_tlb_rsp_bits_source; // @[mmu.scala 321:17]
  wire  tlb_io_l2tlb_rsp_ready; // @[mmu.scala 321:17]
  wire  tlb_io_l2tlb_rsp_valid; // @[mmu.scala 321:17]
  wire [63:0] tlb_io_l2tlb_rsp_bits_addr; // @[mmu.scala 321:17]
  wire [1:0] tlb_io_l2tlb_rsp_bits_source; // @[mmu.scala 321:17]
  wire  tlb_io_l2tlb_req_ready; // @[mmu.scala 321:17]
  wire  tlb_io_l2tlb_req_valid; // @[mmu.scala 321:17]
  wire [63:0] tlb_io_l2tlb_req_bits_addr; // @[mmu.scala 321:17]
  wire [63:0] tlb_io_l2tlb_req_bits_PTBR; // @[mmu.scala 321:17]
  wire [1:0] tlb_io_l2tlb_req_bits_source; // @[mmu.scala 321:17]
  wire  l2tlb_clock; // @[mmu.scala 322:19]
  wire  l2tlb_reset; // @[mmu.scala 322:19]
  wire  l2tlb_io_l2tlb_req_ready; // @[mmu.scala 322:19]
  wire  l2tlb_io_l2tlb_req_valid; // @[mmu.scala 322:19]
  wire [63:0] l2tlb_io_l2tlb_req_bits_addr; // @[mmu.scala 322:19]
  wire [63:0] l2tlb_io_l2tlb_req_bits_PTBR; // @[mmu.scala 322:19]
  wire [1:0] l2tlb_io_l2tlb_req_bits_source; // @[mmu.scala 322:19]
  wire  l2tlb_io_l2tlb_rsp_ready; // @[mmu.scala 322:19]
  wire  l2tlb_io_l2tlb_rsp_valid; // @[mmu.scala 322:19]
  wire [63:0] l2tlb_io_l2tlb_rsp_bits_addr; // @[mmu.scala 322:19]
  wire [1:0] l2tlb_io_l2tlb_rsp_bits_source; // @[mmu.scala 322:19]
  wire  l2tlb_io_ptw_rsp_ready; // @[mmu.scala 322:19]
  wire  l2tlb_io_ptw_rsp_valid; // @[mmu.scala 322:19]
  wire [63:0] l2tlb_io_ptw_rsp_bits_addr; // @[mmu.scala 322:19]
  wire [1:0] l2tlb_io_ptw_rsp_bits_source; // @[mmu.scala 322:19]
  wire  l2tlb_io_ptw_req_ready; // @[mmu.scala 322:19]
  wire  l2tlb_io_ptw_req_valid; // @[mmu.scala 322:19]
  wire [63:0] l2tlb_io_ptw_req_bits_addr; // @[mmu.scala 322:19]
  wire [63:0] l2tlb_io_ptw_req_bits_PTBR; // @[mmu.scala 322:19]
  wire [1:0] l2tlb_io_ptw_req_bits_source; // @[mmu.scala 322:19]
  wire  ptw_clock; // @[mmu.scala 323:17]
  wire  ptw_reset; // @[mmu.scala 323:17]
  wire  ptw_io_ptw_req_ready; // @[mmu.scala 323:17]
  wire  ptw_io_ptw_req_valid; // @[mmu.scala 323:17]
  wire [63:0] ptw_io_ptw_req_bits_addr; // @[mmu.scala 323:17]
  wire [63:0] ptw_io_ptw_req_bits_PTBR; // @[mmu.scala 323:17]
  wire [1:0] ptw_io_ptw_req_bits_source; // @[mmu.scala 323:17]
  wire  ptw_io_mem_req_ready; // @[mmu.scala 323:17]
  wire  ptw_io_mem_req_valid; // @[mmu.scala 323:17]
  wire [63:0] ptw_io_mem_req_bits_addr; // @[mmu.scala 323:17]
  wire [1:0] ptw_io_mem_req_bits_source; // @[mmu.scala 323:17]
  wire  ptw_io_mem_rsp_ready; // @[mmu.scala 323:17]
  wire  ptw_io_mem_rsp_valid; // @[mmu.scala 323:17]
  wire [63:0] ptw_io_mem_rsp_bits_addr; // @[mmu.scala 323:17]
  wire [1:0] ptw_io_mem_rsp_bits_source; // @[mmu.scala 323:17]
  wire  ptw_io_ll_req_ready; // @[mmu.scala 323:17]
  wire  ptw_io_ll_req_valid; // @[mmu.scala 323:17]
  wire [63:0] ptw_io_ll_req_bits_addr; // @[mmu.scala 323:17]
  wire [1:0] ptw_io_ll_req_bits_source; // @[mmu.scala 323:17]
  wire  llptw_clock; // @[mmu.scala 324:19]
  wire  llptw_reset; // @[mmu.scala 324:19]
  wire  llptw_io_ll_req_ready; // @[mmu.scala 324:19]
  wire  llptw_io_ll_req_valid; // @[mmu.scala 324:19]
  wire [63:0] llptw_io_ll_req_bits_addr; // @[mmu.scala 324:19]
  wire [1:0] llptw_io_ll_req_bits_source; // @[mmu.scala 324:19]
  wire  llptw_io_mem_req_ready; // @[mmu.scala 324:19]
  wire  llptw_io_mem_req_valid; // @[mmu.scala 324:19]
  wire [63:0] llptw_io_mem_req_bits_addr; // @[mmu.scala 324:19]
  wire [1:0] llptw_io_mem_req_bits_source; // @[mmu.scala 324:19]
  wire  llptw_io_mem_rsp_ready; // @[mmu.scala 324:19]
  wire  llptw_io_mem_rsp_valid; // @[mmu.scala 324:19]
  wire [63:0] llptw_io_mem_rsp_bits_addr; // @[mmu.scala 324:19]
  wire [1:0] llptw_io_mem_rsp_bits_source; // @[mmu.scala 324:19]
  wire  llptw_io_ptw_rsp_ready; // @[mmu.scala 324:19]
  wire  llptw_io_ptw_rsp_valid; // @[mmu.scala 324:19]
  wire [63:0] llptw_io_ptw_rsp_bits_addr; // @[mmu.scala 324:19]
  wire [1:0] llptw_io_ptw_rsp_bits_source; // @[mmu.scala 324:19]
  wire  page_cache_clock; // @[mmu.scala 325:24]
  wire  page_cache_reset; // @[mmu.scala 325:24]
  wire  page_cache_io_in_req_ready; // @[mmu.scala 325:24]
  wire  page_cache_io_in_req_valid; // @[mmu.scala 325:24]
  wire [63:0] page_cache_io_in_req_bits_addr; // @[mmu.scala 325:24]
  wire [1:0] page_cache_io_in_req_bits_source; // @[mmu.scala 325:24]
  wire  page_cache_io_in_rsp_ready; // @[mmu.scala 325:24]
  wire  page_cache_io_in_rsp_valid; // @[mmu.scala 325:24]
  wire [63:0] page_cache_io_in_rsp_bits_addr; // @[mmu.scala 325:24]
  wire [1:0] page_cache_io_in_rsp_bits_source; // @[mmu.scala 325:24]
  wire  page_cache_io_out_req_ready; // @[mmu.scala 325:24]
  wire  page_cache_io_out_req_valid; // @[mmu.scala 325:24]
  wire [63:0] page_cache_io_out_req_bits_addr; // @[mmu.scala 325:24]
  wire [1:0] page_cache_io_out_req_bits_source; // @[mmu.scala 325:24]
  wire  page_cache_io_out_rsp_ready; // @[mmu.scala 325:24]
  wire  page_cache_io_out_rsp_valid; // @[mmu.scala 325:24]
  wire [63:0] page_cache_io_out_rsp_bits_data; // @[mmu.scala 325:24]
  wire [1:0] page_cache_io_out_rsp_bits_source; // @[mmu.scala 325:24]
  wire  ll_page_cache_clock; // @[mmu.scala 326:27]
  wire  ll_page_cache_reset; // @[mmu.scala 326:27]
  wire  ll_page_cache_io_in_req_ready; // @[mmu.scala 326:27]
  wire  ll_page_cache_io_in_req_valid; // @[mmu.scala 326:27]
  wire [63:0] ll_page_cache_io_in_req_bits_addr; // @[mmu.scala 326:27]
  wire [1:0] ll_page_cache_io_in_req_bits_source; // @[mmu.scala 326:27]
  wire  ll_page_cache_io_in_rsp_ready; // @[mmu.scala 326:27]
  wire  ll_page_cache_io_in_rsp_valid; // @[mmu.scala 326:27]
  wire [63:0] ll_page_cache_io_in_rsp_bits_addr; // @[mmu.scala 326:27]
  wire [1:0] ll_page_cache_io_in_rsp_bits_source; // @[mmu.scala 326:27]
  wire  ll_page_cache_io_out_req_ready; // @[mmu.scala 326:27]
  wire  ll_page_cache_io_out_req_valid; // @[mmu.scala 326:27]
  wire [63:0] ll_page_cache_io_out_req_bits_addr; // @[mmu.scala 326:27]
  wire [1:0] ll_page_cache_io_out_req_bits_source; // @[mmu.scala 326:27]
  wire  ll_page_cache_io_out_rsp_ready; // @[mmu.scala 326:27]
  wire  ll_page_cache_io_out_rsp_valid; // @[mmu.scala 326:27]
  wire [63:0] ll_page_cache_io_out_rsp_bits_data; // @[mmu.scala 326:27]
  wire [1:0] ll_page_cache_io_out_rsp_bits_source; // @[mmu.scala 326:27]
  wire  mem_arb_io_memReqVecIn_0_ready; // @[mmu.scala 327:21]
  wire  mem_arb_io_memReqVecIn_0_valid; // @[mmu.scala 327:21]
  wire [63:0] mem_arb_io_memReqVecIn_0_bits_addr; // @[mmu.scala 327:21]
  wire [1:0] mem_arb_io_memReqVecIn_0_bits_source; // @[mmu.scala 327:21]
  wire  mem_arb_io_memReqVecIn_1_ready; // @[mmu.scala 327:21]
  wire  mem_arb_io_memReqVecIn_1_valid; // @[mmu.scala 327:21]
  wire [63:0] mem_arb_io_memReqVecIn_1_bits_addr; // @[mmu.scala 327:21]
  wire [1:0] mem_arb_io_memReqVecIn_1_bits_source; // @[mmu.scala 327:21]
  wire  mem_arb_io_memReqOut_ready; // @[mmu.scala 327:21]
  wire  mem_arb_io_memReqOut_valid; // @[mmu.scala 327:21]
  wire [63:0] mem_arb_io_memReqOut_bits_addr; // @[mmu.scala 327:21]
  wire [2:0] mem_arb_io_memReqOut_bits_source; // @[mmu.scala 327:21]
  wire  mem_arb_io_memRspIn_ready; // @[mmu.scala 327:21]
  wire  mem_arb_io_memRspIn_valid; // @[mmu.scala 327:21]
  wire [63:0] mem_arb_io_memRspIn_bits_data; // @[mmu.scala 327:21]
  wire [2:0] mem_arb_io_memRspIn_bits_source; // @[mmu.scala 327:21]
  wire  mem_arb_io_memRspVecOut_0_ready; // @[mmu.scala 327:21]
  wire  mem_arb_io_memRspVecOut_0_valid; // @[mmu.scala 327:21]
  wire [63:0] mem_arb_io_memRspVecOut_0_bits_data; // @[mmu.scala 327:21]
  wire [1:0] mem_arb_io_memRspVecOut_0_bits_source; // @[mmu.scala 327:21]
  wire  mem_arb_io_memRspVecOut_1_ready; // @[mmu.scala 327:21]
  wire  mem_arb_io_memRspVecOut_1_valid; // @[mmu.scala 327:21]
  wire [63:0] mem_arb_io_memRspVecOut_1_bits_data; // @[mmu.scala 327:21]
  wire [1:0] mem_arb_io_memRspVecOut_1_bits_source; // @[mmu.scala 327:21]
  TLB tlb ( // @[mmu.scala 321:17]
    .clock(tlb_clock),
    .reset(tlb_reset),
    .io_tlb_req_ready(tlb_io_tlb_req_ready),
    .io_tlb_req_valid(tlb_io_tlb_req_valid),
    .io_tlb_req_bits_addr(tlb_io_tlb_req_bits_addr),
    .io_tlb_req_bits_PTBR(tlb_io_tlb_req_bits_PTBR),
    .io_tlb_req_bits_source(tlb_io_tlb_req_bits_source),
    .io_tlb_rsp_ready(tlb_io_tlb_rsp_ready),
    .io_tlb_rsp_valid(tlb_io_tlb_rsp_valid),
    .io_tlb_rsp_bits_addr(tlb_io_tlb_rsp_bits_addr),
    .io_tlb_rsp_bits_source(tlb_io_tlb_rsp_bits_source),
    .io_l2tlb_rsp_ready(tlb_io_l2tlb_rsp_ready),
    .io_l2tlb_rsp_valid(tlb_io_l2tlb_rsp_valid),
    .io_l2tlb_rsp_bits_addr(tlb_io_l2tlb_rsp_bits_addr),
    .io_l2tlb_rsp_bits_source(tlb_io_l2tlb_rsp_bits_source),
    .io_l2tlb_req_ready(tlb_io_l2tlb_req_ready),
    .io_l2tlb_req_valid(tlb_io_l2tlb_req_valid),
    .io_l2tlb_req_bits_addr(tlb_io_l2tlb_req_bits_addr),
    .io_l2tlb_req_bits_PTBR(tlb_io_l2tlb_req_bits_PTBR),
    .io_l2tlb_req_bits_source(tlb_io_l2tlb_req_bits_source)
  );
  L2TLB l2tlb ( // @[mmu.scala 322:19]
    .clock(l2tlb_clock),
    .reset(l2tlb_reset),
    .io_l2tlb_req_ready(l2tlb_io_l2tlb_req_ready),
    .io_l2tlb_req_valid(l2tlb_io_l2tlb_req_valid),
    .io_l2tlb_req_bits_addr(l2tlb_io_l2tlb_req_bits_addr),
    .io_l2tlb_req_bits_PTBR(l2tlb_io_l2tlb_req_bits_PTBR),
    .io_l2tlb_req_bits_source(l2tlb_io_l2tlb_req_bits_source),
    .io_l2tlb_rsp_ready(l2tlb_io_l2tlb_rsp_ready),
    .io_l2tlb_rsp_valid(l2tlb_io_l2tlb_rsp_valid),
    .io_l2tlb_rsp_bits_addr(l2tlb_io_l2tlb_rsp_bits_addr),
    .io_l2tlb_rsp_bits_source(l2tlb_io_l2tlb_rsp_bits_source),
    .io_ptw_rsp_ready(l2tlb_io_ptw_rsp_ready),
    .io_ptw_rsp_valid(l2tlb_io_ptw_rsp_valid),
    .io_ptw_rsp_bits_addr(l2tlb_io_ptw_rsp_bits_addr),
    .io_ptw_rsp_bits_source(l2tlb_io_ptw_rsp_bits_source),
    .io_ptw_req_ready(l2tlb_io_ptw_req_ready),
    .io_ptw_req_valid(l2tlb_io_ptw_req_valid),
    .io_ptw_req_bits_addr(l2tlb_io_ptw_req_bits_addr),
    .io_ptw_req_bits_PTBR(l2tlb_io_ptw_req_bits_PTBR),
    .io_ptw_req_bits_source(l2tlb_io_ptw_req_bits_source)
  );
  FistLevelPTW ptw ( // @[mmu.scala 323:17]
    .clock(ptw_clock),
    .reset(ptw_reset),
    .io_ptw_req_ready(ptw_io_ptw_req_ready),
    .io_ptw_req_valid(ptw_io_ptw_req_valid),
    .io_ptw_req_bits_addr(ptw_io_ptw_req_bits_addr),
    .io_ptw_req_bits_PTBR(ptw_io_ptw_req_bits_PTBR),
    .io_ptw_req_bits_source(ptw_io_ptw_req_bits_source),
    .io_mem_req_ready(ptw_io_mem_req_ready),
    .io_mem_req_valid(ptw_io_mem_req_valid),
    .io_mem_req_bits_addr(ptw_io_mem_req_bits_addr),
    .io_mem_req_bits_source(ptw_io_mem_req_bits_source),
    .io_mem_rsp_ready(ptw_io_mem_rsp_ready),
    .io_mem_rsp_valid(ptw_io_mem_rsp_valid),
    .io_mem_rsp_bits_addr(ptw_io_mem_rsp_bits_addr),
    .io_mem_rsp_bits_source(ptw_io_mem_rsp_bits_source),
    .io_ll_req_ready(ptw_io_ll_req_ready),
    .io_ll_req_valid(ptw_io_ll_req_valid),
    .io_ll_req_bits_addr(ptw_io_ll_req_bits_addr),
    .io_ll_req_bits_source(ptw_io_ll_req_bits_source)
  );
  LastLevelPTW llptw ( // @[mmu.scala 324:19]
    .clock(llptw_clock),
    .reset(llptw_reset),
    .io_ll_req_ready(llptw_io_ll_req_ready),
    .io_ll_req_valid(llptw_io_ll_req_valid),
    .io_ll_req_bits_addr(llptw_io_ll_req_bits_addr),
    .io_ll_req_bits_source(llptw_io_ll_req_bits_source),
    .io_mem_req_ready(llptw_io_mem_req_ready),
    .io_mem_req_valid(llptw_io_mem_req_valid),
    .io_mem_req_bits_addr(llptw_io_mem_req_bits_addr),
    .io_mem_req_bits_source(llptw_io_mem_req_bits_source),
    .io_mem_rsp_ready(llptw_io_mem_rsp_ready),
    .io_mem_rsp_valid(llptw_io_mem_rsp_valid),
    .io_mem_rsp_bits_addr(llptw_io_mem_rsp_bits_addr),
    .io_mem_rsp_bits_source(llptw_io_mem_rsp_bits_source),
    .io_ptw_rsp_ready(llptw_io_ptw_rsp_ready),
    .io_ptw_rsp_valid(llptw_io_ptw_rsp_valid),
    .io_ptw_rsp_bits_addr(llptw_io_ptw_rsp_bits_addr),
    .io_ptw_rsp_bits_source(llptw_io_ptw_rsp_bits_source)
  );
  PageCache page_cache ( // @[mmu.scala 325:24]
    .clock(page_cache_clock),
    .reset(page_cache_reset),
    .io_in_req_ready(page_cache_io_in_req_ready),
    .io_in_req_valid(page_cache_io_in_req_valid),
    .io_in_req_bits_addr(page_cache_io_in_req_bits_addr),
    .io_in_req_bits_source(page_cache_io_in_req_bits_source),
    .io_in_rsp_ready(page_cache_io_in_rsp_ready),
    .io_in_rsp_valid(page_cache_io_in_rsp_valid),
    .io_in_rsp_bits_addr(page_cache_io_in_rsp_bits_addr),
    .io_in_rsp_bits_source(page_cache_io_in_rsp_bits_source),
    .io_out_req_ready(page_cache_io_out_req_ready),
    .io_out_req_valid(page_cache_io_out_req_valid),
    .io_out_req_bits_addr(page_cache_io_out_req_bits_addr),
    .io_out_req_bits_source(page_cache_io_out_req_bits_source),
    .io_out_rsp_ready(page_cache_io_out_rsp_ready),
    .io_out_rsp_valid(page_cache_io_out_rsp_valid),
    .io_out_rsp_bits_data(page_cache_io_out_rsp_bits_data),
    .io_out_rsp_bits_source(page_cache_io_out_rsp_bits_source)
  );
  PageCache ll_page_cache ( // @[mmu.scala 326:27]
    .clock(ll_page_cache_clock),
    .reset(ll_page_cache_reset),
    .io_in_req_ready(ll_page_cache_io_in_req_ready),
    .io_in_req_valid(ll_page_cache_io_in_req_valid),
    .io_in_req_bits_addr(ll_page_cache_io_in_req_bits_addr),
    .io_in_req_bits_source(ll_page_cache_io_in_req_bits_source),
    .io_in_rsp_ready(ll_page_cache_io_in_rsp_ready),
    .io_in_rsp_valid(ll_page_cache_io_in_rsp_valid),
    .io_in_rsp_bits_addr(ll_page_cache_io_in_rsp_bits_addr),
    .io_in_rsp_bits_source(ll_page_cache_io_in_rsp_bits_source),
    .io_out_req_ready(ll_page_cache_io_out_req_ready),
    .io_out_req_valid(ll_page_cache_io_out_req_valid),
    .io_out_req_bits_addr(ll_page_cache_io_out_req_bits_addr),
    .io_out_req_bits_source(ll_page_cache_io_out_req_bits_source),
    .io_out_rsp_ready(ll_page_cache_io_out_rsp_ready),
    .io_out_rsp_valid(ll_page_cache_io_out_rsp_valid),
    .io_out_rsp_bits_data(ll_page_cache_io_out_rsp_bits_data),
    .io_out_rsp_bits_source(ll_page_cache_io_out_rsp_bits_source)
  );
  MMUMemArbiter mem_arb ( // @[mmu.scala 327:21]
    .io_memReqVecIn_0_ready(mem_arb_io_memReqVecIn_0_ready),
    .io_memReqVecIn_0_valid(mem_arb_io_memReqVecIn_0_valid),
    .io_memReqVecIn_0_bits_addr(mem_arb_io_memReqVecIn_0_bits_addr),
    .io_memReqVecIn_0_bits_source(mem_arb_io_memReqVecIn_0_bits_source),
    .io_memReqVecIn_1_ready(mem_arb_io_memReqVecIn_1_ready),
    .io_memReqVecIn_1_valid(mem_arb_io_memReqVecIn_1_valid),
    .io_memReqVecIn_1_bits_addr(mem_arb_io_memReqVecIn_1_bits_addr),
    .io_memReqVecIn_1_bits_source(mem_arb_io_memReqVecIn_1_bits_source),
    .io_memReqOut_ready(mem_arb_io_memReqOut_ready),
    .io_memReqOut_valid(mem_arb_io_memReqOut_valid),
    .io_memReqOut_bits_addr(mem_arb_io_memReqOut_bits_addr),
    .io_memReqOut_bits_source(mem_arb_io_memReqOut_bits_source),
    .io_memRspIn_ready(mem_arb_io_memRspIn_ready),
    .io_memRspIn_valid(mem_arb_io_memRspIn_valid),
    .io_memRspIn_bits_data(mem_arb_io_memRspIn_bits_data),
    .io_memRspIn_bits_source(mem_arb_io_memRspIn_bits_source),
    .io_memRspVecOut_0_ready(mem_arb_io_memRspVecOut_0_ready),
    .io_memRspVecOut_0_valid(mem_arb_io_memRspVecOut_0_valid),
    .io_memRspVecOut_0_bits_data(mem_arb_io_memRspVecOut_0_bits_data),
    .io_memRspVecOut_0_bits_source(mem_arb_io_memRspVecOut_0_bits_source),
    .io_memRspVecOut_1_ready(mem_arb_io_memRspVecOut_1_ready),
    .io_memRspVecOut_1_valid(mem_arb_io_memRspVecOut_1_valid),
    .io_memRspVecOut_1_bits_data(mem_arb_io_memRspVecOut_1_bits_data),
    .io_memRspVecOut_1_bits_source(mem_arb_io_memRspVecOut_1_bits_source)
  );
  assign io_mmu_req_ready = tlb_io_tlb_req_ready; // @[mmu.scala 329:17]
  assign io_mmu_rsp_valid = tlb_io_tlb_rsp_valid; // @[mmu.scala 330:17]
  assign io_mmu_rsp_bits_addr = tlb_io_tlb_rsp_bits_addr; // @[mmu.scala 330:17]
  assign io_mmu_rsp_bits_source = tlb_io_tlb_rsp_bits_source; // @[mmu.scala 330:17]
  assign io_mem_req_valid = mem_arb_io_memReqOut_valid; // @[mmu.scala 344:23]
  assign io_mem_req_bits_addr = mem_arb_io_memReqOut_bits_addr; // @[mmu.scala 344:23]
  assign io_mem_req_bits_source = mem_arb_io_memReqOut_bits_source; // @[mmu.scala 344:23]
  assign io_mem_rsp_ready = mem_arb_io_memRspIn_ready; // @[mmu.scala 345:22]
  assign tlb_clock = clock;
  assign tlb_reset = reset;
  assign tlb_io_tlb_req_valid = io_mmu_req_valid; // @[mmu.scala 329:17]
  assign tlb_io_tlb_req_bits_addr = io_mmu_req_bits_addr; // @[mmu.scala 329:17]
  assign tlb_io_tlb_req_bits_PTBR = io_mmu_req_bits_PTBR; // @[mmu.scala 329:17]
  assign tlb_io_tlb_req_bits_source = io_mmu_req_bits_source; // @[mmu.scala 329:17]
  assign tlb_io_tlb_rsp_ready = io_mmu_rsp_ready; // @[mmu.scala 330:17]
  assign tlb_io_l2tlb_rsp_valid = l2tlb_io_l2tlb_rsp_valid; // @[mmu.scala 332:21]
  assign tlb_io_l2tlb_rsp_bits_addr = l2tlb_io_l2tlb_rsp_bits_addr; // @[mmu.scala 332:21]
  assign tlb_io_l2tlb_rsp_bits_source = l2tlb_io_l2tlb_rsp_bits_source; // @[mmu.scala 332:21]
  assign tlb_io_l2tlb_req_ready = l2tlb_io_l2tlb_req_ready; // @[mmu.scala 331:19]
  assign l2tlb_clock = clock;
  assign l2tlb_reset = reset;
  assign l2tlb_io_l2tlb_req_valid = tlb_io_l2tlb_req_valid; // @[mmu.scala 331:19]
  assign l2tlb_io_l2tlb_req_bits_addr = tlb_io_l2tlb_req_bits_addr; // @[mmu.scala 331:19]
  assign l2tlb_io_l2tlb_req_bits_PTBR = tlb_io_l2tlb_req_bits_PTBR; // @[mmu.scala 331:19]
  assign l2tlb_io_l2tlb_req_bits_source = tlb_io_l2tlb_req_bits_source; // @[mmu.scala 331:19]
  assign l2tlb_io_l2tlb_rsp_ready = tlb_io_l2tlb_rsp_ready; // @[mmu.scala 332:21]
  assign l2tlb_io_ptw_rsp_valid = llptw_io_ptw_rsp_valid; // @[mmu.scala 335:19]
  assign l2tlb_io_ptw_rsp_bits_addr = llptw_io_ptw_rsp_bits_addr; // @[mmu.scala 335:19]
  assign l2tlb_io_ptw_rsp_bits_source = llptw_io_ptw_rsp_bits_source; // @[mmu.scala 335:19]
  assign l2tlb_io_ptw_req_ready = ptw_io_ptw_req_ready; // @[mmu.scala 333:19]
  assign ptw_clock = clock;
  assign ptw_reset = reset;
  assign ptw_io_ptw_req_valid = l2tlb_io_ptw_req_valid; // @[mmu.scala 333:19]
  assign ptw_io_ptw_req_bits_addr = l2tlb_io_ptw_req_bits_addr; // @[mmu.scala 333:19]
  assign ptw_io_ptw_req_bits_PTBR = l2tlb_io_ptw_req_bits_PTBR; // @[mmu.scala 333:19]
  assign ptw_io_ptw_req_bits_source = l2tlb_io_ptw_req_bits_source; // @[mmu.scala 333:19]
  assign ptw_io_mem_req_ready = page_cache_io_in_req_ready; // @[mmu.scala 338:17]
  assign ptw_io_mem_rsp_valid = page_cache_io_in_rsp_valid; // @[mmu.scala 339:17]
  assign ptw_io_mem_rsp_bits_addr = page_cache_io_in_rsp_bits_addr; // @[mmu.scala 339:17]
  assign ptw_io_mem_rsp_bits_source = page_cache_io_in_rsp_bits_source; // @[mmu.scala 339:17]
  assign ptw_io_ll_req_ready = llptw_io_ll_req_ready; // @[mmu.scala 334:18]
  assign llptw_clock = clock;
  assign llptw_reset = reset;
  assign llptw_io_ll_req_valid = ptw_io_ll_req_valid; // @[mmu.scala 334:18]
  assign llptw_io_ll_req_bits_addr = ptw_io_ll_req_bits_addr; // @[mmu.scala 334:18]
  assign llptw_io_ll_req_bits_source = ptw_io_ll_req_bits_source; // @[mmu.scala 334:18]
  assign llptw_io_mem_req_ready = ll_page_cache_io_in_req_ready; // @[mmu.scala 336:19]
  assign llptw_io_mem_rsp_valid = ll_page_cache_io_in_rsp_valid; // @[mmu.scala 337:19]
  assign llptw_io_mem_rsp_bits_addr = ll_page_cache_io_in_rsp_bits_addr; // @[mmu.scala 337:19]
  assign llptw_io_mem_rsp_bits_source = ll_page_cache_io_in_rsp_bits_source; // @[mmu.scala 337:19]
  assign llptw_io_ptw_rsp_ready = l2tlb_io_ptw_rsp_ready; // @[mmu.scala 335:19]
  assign page_cache_clock = clock;
  assign page_cache_reset = reset;
  assign page_cache_io_in_req_valid = ptw_io_mem_req_valid; // @[mmu.scala 338:17]
  assign page_cache_io_in_req_bits_addr = ptw_io_mem_req_bits_addr; // @[mmu.scala 338:17]
  assign page_cache_io_in_req_bits_source = ptw_io_mem_req_bits_source; // @[mmu.scala 338:17]
  assign page_cache_io_in_rsp_ready = ptw_io_mem_rsp_ready; // @[mmu.scala 339:17]
  assign page_cache_io_out_req_ready = mem_arb_io_memReqVecIn_1_ready; // @[mmu.scala 341:24]
  assign page_cache_io_out_rsp_valid = mem_arb_io_memRspVecOut_1_valid; // @[mmu.scala 343:24]
  assign page_cache_io_out_rsp_bits_data = mem_arb_io_memRspVecOut_1_bits_data; // @[mmu.scala 343:24]
  assign page_cache_io_out_rsp_bits_source = mem_arb_io_memRspVecOut_1_bits_source; // @[mmu.scala 343:24]
  assign ll_page_cache_clock = clock;
  assign ll_page_cache_reset = reset;
  assign ll_page_cache_io_in_req_valid = llptw_io_mem_req_valid; // @[mmu.scala 336:19]
  assign ll_page_cache_io_in_req_bits_addr = llptw_io_mem_req_bits_addr; // @[mmu.scala 336:19]
  assign ll_page_cache_io_in_req_bits_source = llptw_io_mem_req_bits_source; // @[mmu.scala 336:19]
  assign ll_page_cache_io_in_rsp_ready = llptw_io_mem_rsp_ready; // @[mmu.scala 337:19]
  assign ll_page_cache_io_out_req_ready = mem_arb_io_memReqVecIn_0_ready; // @[mmu.scala 340:27]
  assign ll_page_cache_io_out_rsp_valid = mem_arb_io_memRspVecOut_0_valid; // @[mmu.scala 342:27]
  assign ll_page_cache_io_out_rsp_bits_data = mem_arb_io_memRspVecOut_0_bits_data; // @[mmu.scala 342:27]
  assign ll_page_cache_io_out_rsp_bits_source = mem_arb_io_memRspVecOut_0_bits_source; // @[mmu.scala 342:27]
  assign mem_arb_io_memReqVecIn_0_valid = ll_page_cache_io_out_req_valid; // @[mmu.scala 340:27]
  assign mem_arb_io_memReqVecIn_0_bits_addr = ll_page_cache_io_out_req_bits_addr; // @[mmu.scala 340:27]
  assign mem_arb_io_memReqVecIn_0_bits_source = ll_page_cache_io_out_req_bits_source; // @[mmu.scala 340:27]
  assign mem_arb_io_memReqVecIn_1_valid = page_cache_io_out_req_valid; // @[mmu.scala 341:24]
  assign mem_arb_io_memReqVecIn_1_bits_addr = page_cache_io_out_req_bits_addr; // @[mmu.scala 341:24]
  assign mem_arb_io_memReqVecIn_1_bits_source = page_cache_io_out_req_bits_source; // @[mmu.scala 341:24]
  assign mem_arb_io_memReqOut_ready = io_mem_req_ready; // @[mmu.scala 344:23]
  assign mem_arb_io_memRspIn_valid = io_mem_rsp_valid; // @[mmu.scala 345:22]
  assign mem_arb_io_memRspIn_bits_data = io_mem_rsp_bits_data; // @[mmu.scala 345:22]
  assign mem_arb_io_memRspIn_bits_source = io_mem_rsp_bits_source; // @[mmu.scala 345:22]
  assign mem_arb_io_memRspVecOut_0_ready = ll_page_cache_io_out_rsp_ready; // @[mmu.scala 342:27]
  assign mem_arb_io_memRspVecOut_1_ready = page_cache_io_out_rsp_ready; // @[mmu.scala 343:24]
endmodule
module MMUtest(
  input         clock,
  input         reset,
  output        io_host_req_ready,
  input         io_host_req_valid,
  input  [4:0]  io_host_req_bits_host_wg_id,
  input  [2:0]  io_host_req_bits_host_num_wf,
  input  [9:0]  io_host_req_bits_host_wf_size,
  input  [31:0] io_host_req_bits_host_start_pc,
  input  [12:0] io_host_req_bits_host_vgpr_size_total,
  input  [12:0] io_host_req_bits_host_sgpr_size_total,
  input  [12:0] io_host_req_bits_host_lds_size_total,
  input  [10:0] io_host_req_bits_host_gds_size_total,
  input  [12:0] io_host_req_bits_host_vgpr_size_per_wf,
  input  [12:0] io_host_req_bits_host_sgpr_size_per_wf,
  input  [31:0] io_host_req_bits_host_gds_baseaddr,
  input         io_host_rsp_ready,
  output        io_host_rsp_valid,
  output [4:0]  io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id,
  input         io_out_a_ready,
  output        io_out_a_valid,
  output [2:0]  io_out_a_bits_opcode,
  output [2:0]  io_out_a_bits_size,
  output [3:0]  io_out_a_bits_source,
  output [31:0] io_out_a_bits_address,
  output [1:0]  io_out_a_bits_mask,
  output [63:0] io_out_a_bits_data,
  output        io_out_d_ready,
  input         io_out_d_valid,
  input  [2:0]  io_out_d_bits_opcode,
  input  [2:0]  io_out_d_bits_size,
  input  [3:0]  io_out_d_bits_source,
  input  [63:0] io_out_d_bits_data
);
  wire  mmu_clock; // @[mmu.scala 360:17]
  wire  mmu_reset; // @[mmu.scala 360:17]
  wire  mmu_io_mmu_req_ready; // @[mmu.scala 360:17]
  wire  mmu_io_mmu_req_valid; // @[mmu.scala 360:17]
  wire [63:0] mmu_io_mmu_req_bits_addr; // @[mmu.scala 360:17]
  wire [63:0] mmu_io_mmu_req_bits_PTBR; // @[mmu.scala 360:17]
  wire [1:0] mmu_io_mmu_req_bits_source; // @[mmu.scala 360:17]
  wire  mmu_io_mmu_rsp_ready; // @[mmu.scala 360:17]
  wire  mmu_io_mmu_rsp_valid; // @[mmu.scala 360:17]
  wire [63:0] mmu_io_mmu_rsp_bits_addr; // @[mmu.scala 360:17]
  wire [1:0] mmu_io_mmu_rsp_bits_source; // @[mmu.scala 360:17]
  wire  mmu_io_mem_req_ready; // @[mmu.scala 360:17]
  wire  mmu_io_mem_req_valid; // @[mmu.scala 360:17]
  wire [63:0] mmu_io_mem_req_bits_addr; // @[mmu.scala 360:17]
  wire [2:0] mmu_io_mem_req_bits_source; // @[mmu.scala 360:17]
  wire  mmu_io_mem_rsp_ready; // @[mmu.scala 360:17]
  wire  mmu_io_mem_rsp_valid; // @[mmu.scala 360:17]
  wire [63:0] mmu_io_mem_rsp_bits_data; // @[mmu.scala 360:17]
  wire [2:0] mmu_io_mem_rsp_bits_source; // @[mmu.scala 360:17]
  wire  _T = io_host_rsp_ready & io_host_rsp_valid; // @[Decoupled.scala 52:35]
  MMU mmu ( // @[mmu.scala 360:17]
    .clock(mmu_clock),
    .reset(mmu_reset),
    .io_mmu_req_ready(mmu_io_mmu_req_ready),
    .io_mmu_req_valid(mmu_io_mmu_req_valid),
    .io_mmu_req_bits_addr(mmu_io_mmu_req_bits_addr),
    .io_mmu_req_bits_PTBR(mmu_io_mmu_req_bits_PTBR),
    .io_mmu_req_bits_source(mmu_io_mmu_req_bits_source),
    .io_mmu_rsp_ready(mmu_io_mmu_rsp_ready),
    .io_mmu_rsp_valid(mmu_io_mmu_rsp_valid),
    .io_mmu_rsp_bits_addr(mmu_io_mmu_rsp_bits_addr),
    .io_mmu_rsp_bits_source(mmu_io_mmu_rsp_bits_source),
    .io_mem_req_ready(mmu_io_mem_req_ready),
    .io_mem_req_valid(mmu_io_mem_req_valid),
    .io_mem_req_bits_addr(mmu_io_mem_req_bits_addr),
    .io_mem_req_bits_source(mmu_io_mem_req_bits_source),
    .io_mem_rsp_ready(mmu_io_mem_rsp_ready),
    .io_mem_rsp_valid(mmu_io_mem_rsp_valid),
    .io_mem_rsp_bits_data(mmu_io_mem_rsp_bits_data),
    .io_mem_rsp_bits_source(mmu_io_mem_rsp_bits_source)
  );
  assign io_host_req_ready = mmu_io_mmu_req_ready; // @[mmu.scala 361:20]
  assign io_host_rsp_valid = mmu_io_mmu_rsp_valid; // @[mmu.scala 368:20]
  assign io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id = {{3'd0}, mmu_io_mmu_rsp_bits_source}; // @[mmu.scala 367:57]
  assign io_out_a_valid = mmu_io_mem_req_valid; // @[mmu.scala 373:17]
  assign io_out_a_bits_opcode = 3'h4; // @[mmu.scala 380:23]
  assign io_out_a_bits_size = 3'h0; // @[mmu.scala 379:21]
  assign io_out_a_bits_source = {{1'd0}, mmu_io_mem_req_bits_source}; // @[mmu.scala 375:23]
  assign io_out_a_bits_address = mmu_io_mem_req_bits_addr[31:0]; // @[mmu.scala 377:50]
  assign io_out_a_bits_mask = 2'h1; // @[mmu.scala 376:21]
  assign io_out_a_bits_data = 64'h0; // @[mmu.scala 378:21]
  assign io_out_d_ready = mmu_io_mem_rsp_ready; // @[mmu.scala 385:17]
  assign mmu_clock = clock;
  assign mmu_reset = reset;
  assign mmu_io_mmu_req_valid = io_host_req_valid; // @[mmu.scala 362:20]
  assign mmu_io_mmu_req_bits_addr = {{32'd0}, io_host_req_bits_host_start_pc}; // @[mmu.scala 363:33]
  assign mmu_io_mmu_req_bits_PTBR = {{32'd0}, io_host_req_bits_host_gds_baseaddr}; // @[mmu.scala 364:37]
  assign mmu_io_mmu_req_bits_source = io_host_req_bits_host_wg_id[1:0]; // @[mmu.scala 365:30]
  assign mmu_io_mmu_rsp_ready = io_host_rsp_ready; // @[mmu.scala 369:20]
  assign mmu_io_mem_req_ready = io_out_a_ready; // @[mmu.scala 374:17]
  assign mmu_io_mem_rsp_valid = io_out_d_valid; // @[mmu.scala 384:17]
  assign mmu_io_mem_rsp_bits_data = io_out_d_bits_data; // @[mmu.scala 382:21]
  assign mmu_io_mem_rsp_bits_source = io_out_d_bits_source[2:0]; // @[mmu.scala 383:23]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T & ~reset) begin
          $fwrite(32'h80000002,"addr translate complete, target is 0x%x for 0x%d",mmu_io_mmu_rsp_bits_addr,
            mmu_io_mmu_rsp_bits_source); // @[mmu.scala 371:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end

endmodule
