#include "main.h"

/**
* _strcpy - Function that copies a string pointed to by src
* @dest: A buffer to copy the string to.
* @src: The string to be copied.
* Return: Pointer to the string @dest.
*/

char *_strcpy(char *dest, const char *src)

{
int n = 0;

for (n = 0; src[n] != '\0'; n++)
{
*(dest + n) = *(src + n);
}
*(dest + n) = '\0';
return (dest);
}
