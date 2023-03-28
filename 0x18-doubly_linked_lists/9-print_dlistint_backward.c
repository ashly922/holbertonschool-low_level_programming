#include "lists.h"

/**
 * print_dlistint_backward - Prints elements of a doubly linked list in reverse
 * @h: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	count = print_dlistint_backward(h->next);
	printf("%d\n", h->n);
	count++;

	return (count);
}
