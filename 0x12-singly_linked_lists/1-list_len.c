#include <stdlib.h>
#include "lists.h"

/**
* list_len - Print number of elements in linked list.
* @h: pointer to the structure.
* Return: number of elements in list_t list
*/
size_t list_len(const list_t *h)
{
const list_t *temp = h;
int elements = 0;

while (temp != NULL)
{
elements++;
temp = temp->next;
}
return (elements);
}
