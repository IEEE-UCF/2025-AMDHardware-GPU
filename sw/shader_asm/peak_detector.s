// setup registers
addi r1, r0, 0x2000 // input buffer base
addi r2, r0, 0x3000 // output buffer base
addi r3, r0, 256 // input buffer size
addi r4, r0, 0 // loop counter i = 0
addi r5, r0, 128 // threshold value

loop:
// calculate address of in[i] and load it
add r11, r1, r4
load r6, r11, 0

// compare and branch if not a peak (if r6 < r5)
jumpl r6, r5, not_peak

// it's a peak, so store it and increment output pointer
store r6, r2, 0
addi r2, r2, 4

not_peak:
// increment counter and loop if not done (if r4 < r3)
addi r4, r4, 1
jumpl r4, r3, loop

// finished
halt