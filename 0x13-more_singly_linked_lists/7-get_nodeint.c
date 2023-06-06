#include "lists.h"
/**
* get_nodeint_at_index - node return to index
* @head: 1rst  node
* @index: index to return to
* Return: pointer or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *tp = head;
while (tp && i < index)
{
tp = tp->next;
i++;
}
return (tp ? tp : NULL);
}
