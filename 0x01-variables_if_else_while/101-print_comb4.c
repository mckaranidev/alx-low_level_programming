#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits.
 * Return: Returns 0
 */
int main(void)
{
int comboThree1;
int comboThree2;
int comboThree3;

for (comboThree1 = 0; comboThree1 <= 7; comboThree1++)
{
for (comboThree2 = comboThree1 + 1; comboThree2 <= 9; comboThree2++)
{
for (comboThree3 = comboThree2 + 1; comboThree3 < 9; comboThree3++)
{
putchar(comboThree1);
putchar(comboThree2);
putchar(comboThree3);
if (comboThree1 == 7 && comboThree2 == 8 && comboThree3 == 9)
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
