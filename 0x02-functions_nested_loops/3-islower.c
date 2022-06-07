#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: The parameter to check for lowercase of input
 * Return: Returns 1 if c is lowercase and 0 otherwise.
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
