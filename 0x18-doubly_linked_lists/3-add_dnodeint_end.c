#include "lists.h"

/**
 *  add_dnodeint_end - adds a new node at the end of a doubly linked list
 *  @head: Pointer to a pointer to the head of the list
 *  @n: The value to be added to the new node
 *
 *  Return: The address of the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	if (!head)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (new_node);

	free(new_node);
	return (NULL);
}
