#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - to add a new node in the beginning into the linked list
* @head: is a double pointer of the list_t list
* @str: a string for adding the node
* Return: is to the address of a new element, or to detect  NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}
