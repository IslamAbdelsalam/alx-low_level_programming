#include "main.h"

/**
 * times_table - let's print time table
*/
void times_table(void)
{
int i, j, mult;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
mult = i * j;

if (mult > 9)
{
putchar(mult / 10 + '0');
putchar(mult % 10 + '0');
}
else
{
_putchar(mult + '0');
}
if (j != 9)
{
_putchar(',');
if (mult < 10)
{
putchar(' ');
putchar(' ');
}
else
_putchar(' ');
}
}
_putchar('\n');
}

}
