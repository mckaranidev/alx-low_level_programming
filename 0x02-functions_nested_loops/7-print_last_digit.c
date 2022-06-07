#include "main.h"

/**
* print_last_digit - Function prints the last digit of a number.
* @z: The integer to be checked in the parameter
* Return: The integer that was checked
*/

int print_last_digit(int z)
{

z %= 10;

if (z < 0)
z *= -1;

_putchar(z + '0');
return (z);
}
