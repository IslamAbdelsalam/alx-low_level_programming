#include "main.h"

/**
 * jack_bauer - let's print our time
*/
void jack_bauer(void)
{
int min, hour;
for (hour = 0; hour < 24; hour++)
{
for (min = 0; min < 60; min++)
{
putchar(hour / 10 + '0');
putchar(hour % 10 + '0');
putchar(':');
putchar(min / 10 + '0');
putchar(min % 10 + '0');
putchar('\n');
}
}

}
