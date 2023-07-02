section .data
    hello db 'Hello, Holberton', 0
    newline db 10

section .text
    global main

main:
    ; Write the string to stdout
    mov eax, 1        ; System call number for write
    mov edi, 1        ; File descriptor for stdout
    mov rsi, hello    ; Pointer to the string
    mov edx, 16        ; Length of the string
    syscall

    ; Write the new line character to stdout
    mov eax, 1        ; System call number for write
    mov edi, 1        ; File descriptor for stdout
    mov rsi, newline  ; Pointer to the new line character
    mov edx, 1        ; Length of the new line character
    syscall

    ; Exit the program
    mov eax, 60       ; System call number for exit
    xor edi, edi      ; Exit status 0
    syscall
