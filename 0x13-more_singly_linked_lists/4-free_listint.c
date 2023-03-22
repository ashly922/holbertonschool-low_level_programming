#include "lists.h"
/**
 * free_listint - free list
 * @head: pointer to node
 *
 * Return: void
 *
 */
void free_listint(listint_t *head)
{
	listint_t *mem, *c;

	c = head;
	while (c != NULL)
	{
		mem = c->next;
		free(c);
		c = mem;
	}
}
