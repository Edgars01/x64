.data
vardd sqword 65

.code
TestFunction proc
	
	mov eax, 1001100010011b
	mov ecx, 1001000010010b

	and eax, ecx

	ret

TestFunction endp
end