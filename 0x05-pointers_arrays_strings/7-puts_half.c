#include "main.h"

/**
* puts_half - prints half of a string.
* @str: input string.
* Return: None.
*/

void puts_half(char *str)
{
int count = 0, c;

while (count >= 0)
{
if (str[count] == '\0')
break;
count++;
}

if (count % 2 == 1)
c = count / 2;
else
c = (count - 1) / 2;

for (c++; c < count; c++)
_putchar(str[c]);
_putchar('\n');
}
