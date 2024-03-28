; assembly part 
section .data
    ask_size db "Enter Size of Vector: ",13,10,0
    print_sdot db "Sdot: %1f",10,0
    ask_a db "Value for A%d: ",10,0
    ask_b db "Value for B%d: ",10,0

    scan_a db "%lf",0
    scan_b db "%lf",0
    scand db "%d",0
    
    size dq 0
    a_n dq 0.0
    b_n dq 0.0
    sdot dq 0.0

section .text
    bits 64
    default rel

global asm_run
extern printf, scanf

asm_run:
    ; clear needed registers
    xorps xmm0, xmm0  
    xorps xmm1, xmm1
    xorps xmm2, xmm2
    pxor xmm2, xmm2

    sub rsp, 8*5
    xor eax, eax

    ; prepare for print
    lea rcx, [ask_size]
    call printf
    
    ; get size of vector
    lea rdx, [size]
    mov rcx, scand
    call scanf

    ; store size of vector
    mov rsi, 0
    mov rdi, [size]
    
get_values:    
    inc rsi
    
    ; steps to get value of a
    
    ; ask for input
    mov rdx, rsi
    mov rcx, ask_a
    call printf  
    
    ; get user input for An
    lea rdx, [a_n]
    mov rcx, scan_a
    call scanf
    
    ; steps to get value of b
    
    ; ask for input
    mov rdx, rsi
    mov rcx, ask_b
    call printf  
    
    ; get user input for Bn
    lea rdx, [b_n]
    mov rcx, scan_b
    call scanf
    
    ; steps to calculate
    
    ; store a in xmm1
    movq xmm1, [a_n]
    
    ; store b in xmm2
    movq xmm2, [b_n]
    
    ; multiply the values in xmm1 and xmm2 and add the result to xmm0
    movq xmm3, [sdot] ; xmm0 gets cleared for some reason so we move total to xmm3 for now
    mulsd xmm1, xmm2
    vaddsd xmm0, xmm3, xmm1
    
    ; store into sdot
    movsd qword[sdot], xmm0
    
    cmp rsi, rdi
    je print_result
    
    jmp get_values
    
print_result:
    mov rdx, [sdot]
    lea rcx, print_sdot
    call printf 
    
exit:
    add rsp, 8*5
    ret