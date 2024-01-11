#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t lis
* @h: header to double linked list
*
* Return: the number of nodes
*
*/

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);

}
