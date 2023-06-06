#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counter of l3ibat
 * @head:pointer 1rst
 * Return: no loop 0
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *afaf, *elh;
size_t nd = 1;
if (head == NULL || head->next == NULL)
return (0);
afaf = head->next;
elh = (head->next)->next;
while (elh)
{
if (afaf == elh)
{
afaf = head;
while (afaf != elh)
{
nd++;
afaf = afaf->next;
elh = elh->next;
}
afaf = afaf->next;
while (afaf != elh)
{
nd++;
afaf = afaf->next;
}
return (nd);
}
afaf = afaf->next;
elh = (elh->next)->next;
}
return (0);
}
/**
 * print_listint_safe - Printer
 * @head: pointer 1rst
 * Return:node numbb
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nd, index = 0;
nd = looped_listint_len(head);
if (nd == 0)
{
for (; head != NULL; nd++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nd; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nd);
}
