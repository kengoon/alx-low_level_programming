section .data
    hello db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; write Hello, Holberton to stdout
    mov rax, 1
    mov rdi, 1
    mov rsi, hello
    mov rdx, 16
    syscall

    ; exit
    mov rax, 60
    xor rdi, rdi
    syscall

