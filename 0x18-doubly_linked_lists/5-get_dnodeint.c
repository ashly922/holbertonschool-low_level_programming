#include "lists.h"

/**
 * get_dnodeint_at_index - returns a specefic node of a doubly linked list
 * @head: Pointer to the head node of the list
 * @index: The index of the node to retrieve, starting from 0
 *
 * Return: The nth node of the list, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index && current != NULL)
	{
		return (current);
	}
	return (NULL);
}
