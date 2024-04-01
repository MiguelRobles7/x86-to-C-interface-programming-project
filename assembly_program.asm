; assembly part 
section .data
    sdot dq 0.0

section .text
    bits 64
    default rel

global asm_run
extern printf, scanf

asm_run:
    ; Input:
    ;   xmm0 - A (scalar)
    ;   xmm1 - B (scalar)
    
    ; Output:
    ;   xmm0 - sdot (result vector)

    mulss xmm0, xmm1    
    ret
    ; store into sdot
    ;movsd qword[sdot], xmm0
    