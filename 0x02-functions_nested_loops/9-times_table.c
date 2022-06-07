#include "main.h"

/**
 * times_table - Function prints the 9 times table, starting with 0.
 * Return: none
 */

void times_table(void)
{
int table9A;
int table9B;
int table9C;

for (table9A = 0; table9A <= 9; table9A++)
{
_putchar(48);
for (table9B = 1; table9B <= 9; table9B++)
{
table9C = table9A * table9B;
_putchar(44);
_putchar(32);
if (table9C <= 9)
{
_putchar(32);
_putchar(table9C + 48);
}
else
{
_putchar((table9C / 10) + 48);
_putchar((table9C % 10) + 48);
}
}
_putchar('\n');
}
}
