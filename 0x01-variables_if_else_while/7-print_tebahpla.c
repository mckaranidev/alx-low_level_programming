#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 * Return: Return zero
 */
int main(void)
{
int lowercaseReverse;

for (lowercaseReverse = 'z'; lowercaseReverse >= 'a'; lowercaseReverse--)
{
putchar(lowercaseReverse);
}
putchar('\n');
return (0);
}
