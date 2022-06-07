#include "main.h"

/**
* _isalpha - Function that checks for alphabetic character
* @c: The parameter to check for lowercase of input
* Return: Returns 1 if c = letter, lowercase or uppercase; otherwise 0
*/
int _isalpha(int c)
{
if ((c >= a && c <= z) ||
(c >= A && c <= Z))
return (1);
else
return (0);
}
