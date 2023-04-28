section .data
hello db "Hello, Holberton",0
format db "%s\n",0

section .text
global _start

extern printf
push hello
push format
call printf
add rsp, 16

xor eax, eax
mov eax, 60
xor edi, edi
syscall
