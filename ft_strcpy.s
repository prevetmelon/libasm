segment .text
	global _ft_strcpy
_ft_strcpy:
	mov rax, 0
loop:
	mov dl, byte[rsi + rax]
	mov byte[rdi + rax], dl
	cmp dl, 0
	je returnkek
	inc rax
	jmp loop
returnkek:
	mov rax, rdi
	ret