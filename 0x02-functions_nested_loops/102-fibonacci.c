#include "main.h"

/**
 * fibonacci - print first 50 fab number
*/

void fibonacci(void)
{
unsigned long long int n1 = 1, n2 = 2, product = 0, i;
printf("1, 2\n");
for (i = 0; i < 50; i++)
{
product = n1 + n2;
n1 = n2;
n2 = product;
printf("%lli", product);
if (i < 50)
{
printf(", ");
}
}
}
