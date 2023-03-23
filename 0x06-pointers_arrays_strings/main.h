#ifndef FILE_MAIN
#define FILE_MAIN

#include <stdio.h>
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
char *_strcat(char *dest, char *src);


#endif
