#include <stdio.h>

/**
 *  main -Entry point
 *  Return: Always 0 (Success)
*/
int main(void)
{
char text[] = "_putchar";
int i;

for (i = 0; text[i] != '\0'; i++)
{
    putchar(text[i]);
}

putchar('\n');

return (0);
}