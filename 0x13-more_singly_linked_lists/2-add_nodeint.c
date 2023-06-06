#include "lists.h"
/**
* add_nodeint - add the new node in beginning
* @head: pointer in the list li kandiro fiha
* @n: data of new node
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nv;
nv = malloc(sizeof(listint_t));
if (!nv
return (NULL);
nv->n = n;
nv->next = *head;
*head = nv;
return (nv);
}
