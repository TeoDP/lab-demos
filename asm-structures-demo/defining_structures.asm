section .bss:

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

section .data:

cell1:
    istruc list_cell
        at value, db 0
        at next, dd 0
        at junk, times 100 db 0
    iend

; cell3:
;     istruc list_cell3
;         at list_cell3.value, db 0
;         at list_cell3.next, dd 0
;         at list_cell3.junk, times 100 db 0
;     iend

section .text:
global main

main:
    mov eax, 0
    ret

