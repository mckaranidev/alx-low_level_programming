#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node_end - function that adds a new node at the end of a list_t list
* @head: input header pointer
* @str: string value
* Return: address of new element, or NULL if it fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
list_t *tmp;

node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);
node->len = _strlen(str);
node->str = strdup(str);
node->next = NULL;
if (*head == NULL)
*head = node;
else
{
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = node;
}
return (node);
}

/**
* _strlen - length of string
* @s: character of string
* Return: returns length of string
*/

int _strlen(const char *s)
{
int i;

while (s[i] != 0)
i++;
return (i);
}
