#include "main.h"

/**
 * print_to_98 - print numbers from n to  98
 * @n: our input from user
*/

void print_to_98(int n)
{
int i;

if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%i", i);
if (i != 98)
{
printf(", ");
}
}
}
else if (n == 98)
printf("98");
else
{
for (i = n; i <= 98; i++)
{
printf("%i", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
