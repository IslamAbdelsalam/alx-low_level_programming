#include "function_pointers.h"

/**
 * int_index - return checked value from another function
 * @array: our array elements
 * @size: array size
 * @cmp: pointer to the function that we will use
 * Return: .....
 * author: Islam Abdelslam -_+
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
