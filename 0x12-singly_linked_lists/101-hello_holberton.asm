.DATA
    hello db "Hello, Holberton", 0

.TEXT
    global main

    extern printf

main:

    mov rdi, hello
    mov rax, 0
    call printf

    mov eax, 60         ; syscall: exit
    xor edi, edi        ; status: 0
    syscall