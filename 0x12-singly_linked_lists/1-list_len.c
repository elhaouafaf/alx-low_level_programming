#include <stdlib.h>
#include "lists.h"
/**
* list_len - means to returns the number of elements into the linked list
* @h: is the pointer of the list_t list
* Return: h is the number of elements
*/
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
