#include <stdio.h>

/**
 * main - Print all possible combinations of single digits in ascending order
 * Return: Returns 0
 */

int main(void)
{
int combo;

for (combo = 48; combo < 58; combo++)
{
putchar(combo);
if (combo != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
