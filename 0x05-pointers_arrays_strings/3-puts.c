#include "main.h"

/**
* _puts - prints a string, followed by a new line.
* @s: input string.
* Return: None
*/

void _puts(char *s)
{
int a = 0;

while (a >= 0)
{
if (s[a] == '\0')
{
_putchar('\n');
break;
}
_putchar(s[a]);
a++;
}
}
