#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 * Return: Should return zero
 */
int main(void)
{
int singleDigits;

for (singleDigits = 0; singleDigits < 10; singleDigits++)
{
printf("%d", singleDigits);
}
putchar('\n');
return (0);
}
