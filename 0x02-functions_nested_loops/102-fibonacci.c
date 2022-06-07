#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers; start with 1 and 2
* Return: zero
*/

int main(void)
{
int c;
long int c1, c2, c3;

c1 = 1;
c2 = 2;
printf("%ld, %ld", c1, c2);
for (c = 0; c < 48; c++)
{
c3 = c1 + c2;
printf(", %ld", c3);
c1 = c2;
c2 = c3;
}
printf("\n");
return (0);
}
