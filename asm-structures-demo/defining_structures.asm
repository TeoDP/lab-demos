section .bss

    struc list_cell
        value: resb 1
        next: resd 1
        junk: resb 100
    endstruc

    ; struc list_cell2
    ;     junk: resb 100
    ;     next: resd 1
    ;     value: resb 1
    ; endstruc

    struc list_cell3
        .value: resb 1
        .next: resd 1
        .junk: resb 100
    endstruc

    ; struc list_cell4
    ;     .junk: resb 100
    ;     .next: resd 1
    ;     .value: resb 1
    ; endstruc     

section .data

cell1:
    istruc list_cell
        at value, db 121
        at next, dd 0xcafebabe
        at junk, times 100 db 45
    iend

; cell3:
;     istruc list_cell3
;         at list_cell3.value, db 0
;         at list_cell3.next, dd 0
;         at list_cell3.junk, times 100 db 0
;     iend

array3:
    ; dd 323
    istruc list_cell3
        at list_cell3.value, db 1
        at list_cell3.next, dd 1
        at list_cell3.junk, times 100 db 1
    iend
    istruc list_cell3
        at list_cell3.value, db 2
        at list_cell3.next, dd 2
        at list_cell3.junk, times 100 db 2
    iend
    istruc list_cell3
        at list_cell3.value, db 3
        at list_cell3.next, dd 3
        at list_cell3.junk, times 100 db 3
    iend
    istruc list_cell3
        at list_cell3.value, db 4
        at list_cell3.next, dd 0xdeadbeef
        at list_cell3.junk, times 100 db 4
    iend
    istruc list_cell3
        at list_cell3.value, db 5
        at list_cell3.next, dd 5
        at list_cell3.junk, times 100 db 5
    iend
    istruc list_cell3
        at list_cell3.value, db 6
        at list_cell3.next, dd 6
        at list_cell3.junk, times 100 db 6
    iend
    istruc list_cell3
        at list_cell3.value, db 7
        at list_cell3.next, dd 7
        at list_cell3.junk, times 100 db 7
    iend

section .text
global main

main:
    mov eax, 0
    mov eax, [cell1 + value]
    lea eax, [cell1 + next]
    mov eax, [eax]

    xor ebx, ebx
    ; mov ebx, [array3 + 4 + 105 * 3 + list_cell3.next]
    mov ebx, [array3 + 105 * 3 + list_cell3.next]

    xor ecx, ecx
    lea ecx, [cell1 + 105]


    mov eax, 0
    ret

