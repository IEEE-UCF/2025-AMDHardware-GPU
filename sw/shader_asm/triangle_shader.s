// load vertex coordinates
addi r1, r0, 100
addi r2, r0, 100
addi r3, r0, 200
addi r4, r0, 100
addi r5, r0, 150
addi r6, r0, 200

// load command buffer base address
addi r10, r0, 0x1000

// store vertex data into the command buffer
store r1, r10, 0
store r2, r10, 4
store r3, r10, 8
store r4, r10, 12
store r5, r10, 16
store r6, r10, 20

// issue the draw command by writing '1'
addi r1, r0, 1
store r1, r10, 24

// loop forever
loop:
jump loop