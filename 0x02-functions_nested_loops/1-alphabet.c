#include "main.h"

/**
* main - Function that prints the alphabet, in lowercase
* Return: To return 0
*/

void print_alphabet_x10(void)
{
char y;
int z;
z = 0;

while (z < 10)
{
for (y = 'a'; y <= 'z'; y++)
_putchar(y);
_putchar('\n');
y++;
}
}
