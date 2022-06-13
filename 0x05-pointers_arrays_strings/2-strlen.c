/**
* _strlen - Function returns the length of a string.
* @s: The string being pointed to.
* Return: The length of the string.
*/

int _strlen(const char *s)
{
int lengthStr = 0;

while (*s++)
lengthStr++;

return (lengthStr);
}
