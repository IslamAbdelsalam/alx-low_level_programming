#include "function_pointers.h"

/**
 * array_iterator - returns the largest of 3 numbers
 * @array: our array elements
 * @size: array size
 * @action: pointer to the function that we will use
 * Return: .....
 * author: Islam Abdelslam -_+
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(*(array + i));
}
