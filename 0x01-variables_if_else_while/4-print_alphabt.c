#include <stdio.h>

/**
 * main - Prints the alphabet except q and e in lowercase
 * Return: It should return 0
 */
int main(void)
{
char lowercaseExcept;

for (lowercaseExcept = a; lowercaseExcept <= z; lowercaseExcept++)
{
if (lowercaseExcept != e && lowercaseExcept != q)
putchar(lowercaseExcept);
}

putchar(n);

return (0);
}

