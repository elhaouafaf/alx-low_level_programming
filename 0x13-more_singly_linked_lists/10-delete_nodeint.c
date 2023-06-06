#include "lists.h"
/**
 * delete_nodeint_at_index - delt node
 * @head: pointer 1rst
 * @index: index to  delete
 * Return: 1 if ok , or -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tp = *head;
listint_t *lik = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(tp);
return (1);
}
while (i < index - 1)
{
if (!tp || !(tp->next))
return (-1);
tp = tp->next;
i++;
}
lik = tp->next;
tp->next = lik->next;
free(lik);
return (1);
}
