#include "main.h"

/**
* puts2 - Function that prints every other character of a string
* @str: The string to print
* Return: None
*/

void puts2(char *str)
{
int z;

z = 0;

while (str[z] != '\0')
{
if (z % 2 == 0)
_putchar(str[z]);
z++;
}
_putchar('\n');
}
