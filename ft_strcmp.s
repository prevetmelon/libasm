segment .text
	global _ft_strcmp
_ft_strcmp:
		mov r10, 0
loop:
		mov dl, byte[rdi + r10]
		mov bl, byte[rsi + r10]
		cmp dl, 0
		je returnkek
		cmp bl, 0
		je returnkek
		cmp dl, bl
		jne returnkek
		inc r10
		jmp loop
returnkek:
		sub dl, bl
		movsx rax, dl
		ret
