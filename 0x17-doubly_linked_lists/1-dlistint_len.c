#include "lists.h"

/**
* dlistint_len - returns the number of elements
* @h: head to double linked list
*
* Return: the number of nodes
*
*/

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);

}
