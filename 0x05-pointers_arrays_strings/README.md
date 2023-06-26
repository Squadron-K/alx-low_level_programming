# 0x05. C - Pointers, arrays and strings

### General Requirement
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file


### TASK:

0. 98 Battery st.

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

    Prototype: void reset_to_98(int *n);

    julien@ubuntu:~/0x05$ cat 0-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code 
     *
     * Return: Always 0.
     */
    int main(void)
    {
      int n;

      n = 402;
      printf("n=%d\n", n);
      reset_to_98(&n);
      printf("n=%d\n", n);
      return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
    julien@ubuntu:~/0x05$ ./0-98 
    n=402
    n=98
    julien@ubuntu:~/0x05$

1. Don't swap horses in crossing a stream
Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);
	julien@ubuntu:~/0x05$ cat 1-main.c
	#include "main.h"
	#include <stdio.h>

	/**
 	 * main - check the code
	 *
 	 * Return: Always 0.
	 */
	int main(void)
	{
    	  int a;
    	  int b;

    	  a = 98;
    	  b = 42;
    	  printf("a=%d, b=%d\n", a, b);
    	  swap_int(&a, &b);
    	  printf("a=%d, b=%d\n", a, b);
    	  return (0);
	}
	julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
	julien@ubuntu:~/0x05$ ./1-swap 
	a=98, b=42
	a=42, b=98
	julien@ubuntu:~/0x05$
