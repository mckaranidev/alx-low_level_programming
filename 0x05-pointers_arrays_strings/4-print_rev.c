nclude "main.h"

/**
* print_rev - Function that prints a string, in reverse.
* @strA: String to be printed.
* Return: None.
*/

void print_rev(char *strA)

{
int a = 0;

while (*(strA + a) != '\0')
a += 1;
a -= 1;
while (a >= 0)
{
_putchar(*(strA + a));
a--;
}
_putchar('\n');

}
