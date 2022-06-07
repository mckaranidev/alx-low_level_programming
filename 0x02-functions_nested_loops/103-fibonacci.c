#include <stdio.h>

/**
* main - Generate Fibonacci sequence by adding the previous terms
* Return: Returns 0
*/

int main(void)
{
long int x, y, z, sum;

y = 1;
z = 2;

for (x = 0, sum = 0; y < 4000000; x++)
{
if (!(y % 2))
sum += y;
z = y + z;
y = z - y;
}
printf("%ld\n", sum);
return (0);
}
