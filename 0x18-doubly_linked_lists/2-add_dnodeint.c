#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: Pointer to a pointer to the head of the node of the list
 * @n: The value to be added to the new node
 *
 * Return: The address of a new element, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

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
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);

	free(new_node);
	return (NULL);
}
