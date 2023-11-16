#include "lists.h"

/**
* list_len - get linked list size
* @h: Node
*
* Return: number of elements in linked list
*/

size_t list_len(const list_t *h)
{

	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);

}
