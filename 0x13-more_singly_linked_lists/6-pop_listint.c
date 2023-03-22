#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: pointer to list
 * Return: heads data
 */
int pop_listint(listint_t **head)
{
	listint_t *x;
	int n;

	x = *head;
	if (x == NULL)
		return (0);
	*head = x->next;
	n = x->n;
	free(x);
	return (n);
}
