#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - Print all the elements of a list_t list.
* @h: The list_t list.
* Return: The number of nodes in h.
*/

size_t print_list(const list_t *h)
{
const list_t *temp = h;
int elements = 0;

while (temp != NULL)
{
if (temp->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
printf("[%d] %s\n", temp->len, temp->str);
elements++;
temp = temp->next;
}
return (elements);
}
