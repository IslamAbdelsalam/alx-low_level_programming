#include <stdio.h>

void printBeforeMain(void) __attribute__ ((constructor));
/**
 * printBeforeMain - print a string before excuting main function
*/

void printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
