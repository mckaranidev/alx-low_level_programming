/**
 * swap_int - Function that swaps the values of two integers
 * @a: first value of integer to swap
 * @b: second value of integer to swap
 * Return: None
 */

void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}


