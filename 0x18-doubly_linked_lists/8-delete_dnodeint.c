#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes a specific node in a list
 * @head: Pointer to the pointer to the head node of the list
 * @index: The index of the node to delete starting from 0
 *
 * Return: 1 if the node was deleted or -1 if error occurred
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *next = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	next = current->next->next;
	free(current->next);
	current->next = next;

	if (next != NULL)
	{
		next->prev = current;
	}

	return (1);
}
