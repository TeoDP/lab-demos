section .text
	global rotate_left

rotate_left:
	enter 0, 0
	pusha
	
	mov eax, [ebp + 8]
	mov cl, [ebp + 12]

	mov ebx, [eax]
	rol ebx, cl
	mov [eax], ebx

	popa
	leave
	ret
