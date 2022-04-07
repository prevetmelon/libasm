segment .text
	global _ft_strlen

_ft_strlen:
		mov rax, 0
kek:
		cmp byte[rdi + rax], 0
		je returnkek
		inc rax
		jmp kek
returnkek:
		ret
