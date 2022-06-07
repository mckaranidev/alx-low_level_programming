#include <stdio.h>

/**
* main -  List all natural numbers below 10 and multiples of 3 or 5
* Return: Should return 0
*/

int main(void)
{
int sum;
int n;

for (n = 1023, sum = 0; n; n--)
if (!(n % 3) || !(n % 5))
sum += n;
printf("%d\n", sum);
return (0);
}
