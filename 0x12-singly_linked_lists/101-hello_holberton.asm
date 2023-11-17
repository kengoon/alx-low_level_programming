section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 0xA, 0

section .text
    extern printf

global _start

_start:
    push hello
    push format
    call printf

    ; exit
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit code 0
    syscall

