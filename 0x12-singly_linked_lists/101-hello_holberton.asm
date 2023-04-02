section .text
	global main

main:
	mov edx, count
	mov ecx, buf
	mov ebx, 1
	mov eax, 4
	int 0x80

	mov eax, 1
	int 0x80

section .data
	buf db "Hello, Holberton", 0xa
	count equ $ -buf
	
