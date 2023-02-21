#include "main.h"

/**
 * _isalpha - will check is it alphabet character or not
 * @c: the input for my function
 * Return: 1 if it's alphabet letter , 0 if isn't
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);

}
