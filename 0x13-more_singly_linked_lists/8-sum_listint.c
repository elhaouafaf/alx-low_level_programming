#include "lists.h"
/**
* sum_listint - calct sum of data
* @head: 1rst node in the list
* Return: the sum
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tp = head;
while (tp)
{
sum += tp->n;
tp = tp->next;
}
return (sum);
}
