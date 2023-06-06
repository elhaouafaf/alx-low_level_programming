#include "lists.h"
/**
* add_nodeint_end - add at the end
* @head: pointer of list
* @n: data for new element
* Return: NULL if it fails , ret
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nw;
listint_t *tp = *head;
nw = malloc(sizeof(listint_t));
if (!nw)
return (NULL);
nw->n = n;
nw->next = NULL;
if (*head == NULL)
{
*head = nw;
return (nw);
}
while (tp->next)
tp = tp->next;
tp->next = nw;
return (nw);
}
