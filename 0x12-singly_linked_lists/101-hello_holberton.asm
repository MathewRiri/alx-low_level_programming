          global    main
          extern    printf
main:
	  mov   edi, format
	 
	  ret
format: db `Hello, Holberton\n`,0
