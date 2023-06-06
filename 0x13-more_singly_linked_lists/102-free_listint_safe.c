#include "lists.h"
/**
 * free_listint_safe - free list
 * @h: pointer 1rst
 * Return: free list
 */
size_t free_listint_safe(listint_t **h)
{
size_t lnf = 0;
int dif;
listint_t *tp;
if (!h || !*h)
return (0);
while (*h)
{
dif = *h - (*h)->next;
if (dif > 0)
{
tp = (*h)->next;
free(*h);
*h = tp;
lnf++;
}
else
{
free(*h);
*h = NULL;
lnf++;
break;
}
}
*h = NULL;
return (lnf);
}
