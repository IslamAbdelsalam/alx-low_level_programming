#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last = (n % 10);

	if (last == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last);
	}
	else if (last > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("last digit of %i is %i and is less than  and not 0\n", n, last);
	}
	else
	{
		return (-1);
	}

	return (0);
}
