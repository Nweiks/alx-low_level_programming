section .data
hello db "Hello, Holberton", 10, 0

section .text
global _start
extern printf

_start:
; Set up arguments for printf
mov rdi, hello ; first argument: string address
xor rax, rax ; clear rax register
call printf ; call printf function

; Exit program
xor edi, edi ; set exit status to 0
mov eax, 60 ; exit system call number
syscall ; call system call


