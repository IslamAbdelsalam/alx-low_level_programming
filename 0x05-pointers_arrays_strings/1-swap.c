#include "main.h"

/**
 * swap_int - swap to variable values
 * @a: pointer to first variable address
 * @b: pointer to second variable address
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
