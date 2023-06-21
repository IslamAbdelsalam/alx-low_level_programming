#include "function_pointers.h"

/**
 * print_name - this function will point to another functions
 *				when user choise using *f
 * @name: user's name
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
