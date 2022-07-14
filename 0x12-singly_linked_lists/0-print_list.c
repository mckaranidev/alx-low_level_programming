#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
size_t elements = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%d] %s\n", h->len, h->str);

elementss++;
h = h->next;
}

return (elements);
}
