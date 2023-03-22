#include "lists.h"

/*********
 *print_dlistint - function prints number of nodes in a list
 *@h: pointer to head of list
 *Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
