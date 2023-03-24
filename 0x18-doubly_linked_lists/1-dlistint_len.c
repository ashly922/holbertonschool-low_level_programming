#include "lists.h"

/**
 * dlistint_len - measures amount of elements in a list
 * @h: pointer to head of list
 *
 * Return: number of elements in specified linked lists
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
