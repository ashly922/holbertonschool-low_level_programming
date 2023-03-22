#include "lists.h"
/**
 * add_nodeint_end - add node at the end of list
 * @head: pointer to list
 * @n: int
 *
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *begining;

	begining = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (begining->next)
	{
		begining = begining->next;
	}

	begining->next = new;
	return (new);
}
