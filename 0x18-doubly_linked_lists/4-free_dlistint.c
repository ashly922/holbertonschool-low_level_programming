#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of node of a list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node, *next_node;

	current_node = head;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
