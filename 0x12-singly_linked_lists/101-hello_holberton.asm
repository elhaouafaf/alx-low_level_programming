global    main
extern    printf
main:
mov   edi, afaf
xor   eax, eax
call  printf
mov         eax, 0
ret
afaf: db `Hello, Holberton\n`,0
