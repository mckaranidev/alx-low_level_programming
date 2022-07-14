#include "lists.h"
#include <stdio.h>

/**
* print_list - Print all the elements of a list_t list.
* @h: The list_t list.
* Return: The number of nodes in h.
*/

size_t print_list(const list_t *h)
{
size_t elements = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "(nil)");

else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
elements++;
}

return (elements);
}
