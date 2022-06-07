#include "main.h"

/**
 * print_sign - For checking if integer is positive, 0 or negative 
 * @n: Determines if integer is greater than, less than or is zero
 * Return: Returns zero
 */

int print_sign(int n)
{
int numberSign;
if (n > 0)
{
_putchar('+');
numberSign = 1;
}
else if (n < 0)
{
_putchar('-');
i = -1;
}
else
{
_putchar('0');
numberSign = 0;
}
return (numberSign);
}
