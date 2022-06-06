#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then uppercase, followed by a new line.
 * Return: Return 0 after running the program
 */
int main(void)
{
char alphABET;

for (alphABET = a; alphABET <= z; alphABET++)
putchar(alphABET);

for (alphABET = A; alphABET <= Z; alphABET++)
putchar(alphABET);

putchar(\n);

return (0);
}

