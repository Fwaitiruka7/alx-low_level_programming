extern printf
SECTION .data
message db 'Hello, Holberton', 0Ah;
SECTION .text
global main
main:
push message
mov rdi, message
xor rax, rax
call printf
mov eax,0
xor eax, eax
ret 
