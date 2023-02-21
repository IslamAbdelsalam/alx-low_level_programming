#include "main.h"

/**
 * _islower - will check is the alphabet character is Capital or lowercase
 * @c: the input for my function
 * Return: 1 if it's lowercase , 0 if it's uppercase, -1 represent error
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else if (c >= 41 && c <= 90)
return (0);
else
return (-1);

}
