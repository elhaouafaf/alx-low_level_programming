#include "lists.h"
/**
* print_listint - prints the total of linked list
* @h: pointer  of type listint_t to be  printed
* Return: to give us the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t afa = 0;
while (h)
{
printf("%d\n", h->n);
afa++;
h = h->next;
}
return (afa);
}
