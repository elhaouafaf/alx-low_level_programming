#include "lists.h"
/**
* pop_listint - fonction of the code under
* @head: input
* Return: 0 if all
*
*/
int pop_listint(listint_t **head)
{
listint_t *tp;
int af;
if (*head == NULL)
return (0);
af = (*head)->n;
tp = *head;
*head = (*head)->next;
free(tp);
return (af);
}
