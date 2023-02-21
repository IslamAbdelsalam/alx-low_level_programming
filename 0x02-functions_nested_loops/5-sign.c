#include "main.h"

/**
 * print_sign - will check is it greater than 0 or smaller than 0 or equal to 0
 * @n: the input for my function
 * Return: 1 if it's greater than 0,
 *         0 if it's equal to 0
 *        -1 if it smaller than 0
 *
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar('0');
return (0);
}


}
