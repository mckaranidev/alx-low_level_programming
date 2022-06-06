#include <stdio.h>

/**
 * main - Prints all single digit numbers only using putchar and without char.
 * Return: Always return 0
 */
int main(void)
{
int singleDigits1;

for (singleDigits1 = 0; singleDigits1 < 10; singleDigits1++)
putchar((singleDigits1 % 10) + '0');

putchar('\n');

return (0);
}
