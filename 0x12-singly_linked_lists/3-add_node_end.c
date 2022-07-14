#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
*add_node_end - adds a new node at the end of a linked list.
* @head: start of the list.
* @str: string value
* Return: the address of the new element or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;

newNode = (list_t *)malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);
newNode->str = strdup(str);
newNode->len = string_length(str);
newNode->next = NULL;

if (*head == NULL)
*head = newNode;

else
{
list_t *lastNode = *head;

while (lastNode->next != NULL)
{
lastNode = lastNode->next;
}

lastNode->next = newNode;
}
return (newNode);
}

/**
* string_length - finds the length of a string.
* Return: length of c.
* @pointer: pointer.
*/

int string_length(const char *pointer)
{
int c = 0;

while (*(pointer + c) != '\0')
{
c++;
}
return (c);
}
