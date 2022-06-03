#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program assigns a random number to the variable n each time it is executed.
 * Return: Should return 0 everytime
 */
int main(void)
{
README.md int n;

README.md srand(time(0));
README.md n = rand() - RAND_MAX / 2;
README.md if (n > 0)
README.md {
README.md README.md printf("%d is positive\n", n);
README.md }
README.md else if (n == 0)
README.md {
README.md README.md printf("%d is zero\n", n);
README.md }
README.md else
README.md {
README.md README.md printf("%d is negative\n", n);
README.md }
README.md return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program assigns a random number to the variable n each time it is executed.
 * Return: Should return 0 everytime
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

