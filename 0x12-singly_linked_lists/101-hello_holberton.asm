
section .data
    msg db 'Hello, Holberton', 0Ah ; 0Ah is the ASCII code for a new line character

section .text
    global main

extern printf

main:
    ; set up stack frame
    push rbp
    mov rbp, rsp

; call printf function
    mov edi, msg ; set first argument (format string)
    xor eax, eax ; clear eax register (return value)
    call printf ; call printf function

; restore stack frame and return
    mov rsp, rbp
    pop rbp
    ret
