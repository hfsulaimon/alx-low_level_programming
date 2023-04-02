section .text
	global main

main:
	mov rax, 1 	; Opens write function - write (
	mov rdi, 1	; File descriptor
	mov rsi, buff	; Message to print
	mov rdx, count	; Message length
	syscall		; ) close write function

	mov rax, 0x60	; Opens exit (
	mov rdi, 1	; EXIT_SUCCESS
	syscall		; )

section .data
	buff: db "Hello, Holberton", 0xa
	count: equ $ -buff
