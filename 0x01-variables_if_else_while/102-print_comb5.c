#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 * Return: Will return 0
 */

int main(void)
{
int comboA22 = 48;
int comboB22 = 0;
int comboC22;
int comboD22 = 44;

while (comboB22 <= 99)
{
comboC22 = comboB22 + 1;
while (comboC22 <= 99)
{
putchar((comboB22 / 10) + comboA22);
putchar((comboB22 % 10) + comboA22);
putchar(32);
putchar((comboC22 / 10) + comboA22);
putchar((comboC22 % 10) + comboA22);
if (comboB22 != 98 || comboC22 != 99)
{
putchar(comboD22);
putchar(32);
}
comboC22 += 1;
}
comboB22 += 1;
}
putchar('\n');
return (0);
}
