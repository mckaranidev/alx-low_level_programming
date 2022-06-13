#include "main.h"

/**
* _atoi - Function that converts a string to an integer
* @s: string to be converted
* Return: Integers in the string
*/

int _atoi(char *s)

{
int a, len, count, multiply, n, neg;
a = 0;
len = 0;
n = 0;
count = 0;
multiply = 1;
neg = 1;

while (s[len] != '\0')
{
if (s[len] >= '0' && s[len] <= '9')
{

count++;

if (!(s[len + 1] >= '0' && s[len + 1] <= '9'))
break;
}

len++;
}

for (; count > 1; count--)
multiply *= 10;

for (; n <= len; n++)

{
if (s[n] == '-')
neg *= -1;

else if (s[n] <= '9' && s[n] >= '0')
{

a += (s[n] - '0') * multiply * neg;
multiply /= 10;
}

}
return (a);
}
