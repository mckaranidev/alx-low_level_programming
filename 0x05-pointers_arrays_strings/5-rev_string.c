#include "main.h"

/**
* rev_string - Function that reverses a string.
* @str: The string to be reversed.
*/

void rev_string(char *str)
{
int len = 0, n = 0;
char tmp;

while (str[n++])
len++;

for (n = len - 1; n >= len / 2; n--)
{
tmp = str[n];
str[n] = str[len - n - 1];
str[len - n - 1] = tmp;
}
}
