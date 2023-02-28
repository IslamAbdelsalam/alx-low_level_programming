#include "main.h"
/**
 * print_array - print our array element sperated by commas
 *
 * @a: pointer to our string
 *
 * @n: array size
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(10);
}
