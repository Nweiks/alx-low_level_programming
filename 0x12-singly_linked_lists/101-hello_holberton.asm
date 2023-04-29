global _start

section .data
hello db "Hello, Holberton", 10, 0

section .text
_start:

; set up arguments for printf
mov rdi, hello
xor rax, rax
call printf

; Exit program
xor edi, edi
mov eax, 60
syscall
