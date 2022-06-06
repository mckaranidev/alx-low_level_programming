#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always return 0 after the program runs
 */

int main(void)
{
char lowercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
putchar(lowercase);
putchar(\n);

return (0);
}
