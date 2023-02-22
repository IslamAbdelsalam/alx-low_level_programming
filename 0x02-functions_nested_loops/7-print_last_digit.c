#include "main.h"

/**
 * print_last_digit - will convert the input to abslute value
 * @n: the input for my function
 * Return: n%10 if it's greater than 0,
 *        -(n%10) if it's smaller than 0
 *
*/
int print_last_digit(int n)
{
if (n < 0)
{
n *= -1;
}
return (_putchar((n % 10) + '0'));

}
