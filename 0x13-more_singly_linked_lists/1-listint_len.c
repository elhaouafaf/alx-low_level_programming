#include "lists.h"
/**
* listint_len - return  of elements inside the linked lists
* @h: pointer  linked list of type listint_t
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t afa = 0;
while (h)
{
afa++;
h = h->next;
}
return (afa);
}
