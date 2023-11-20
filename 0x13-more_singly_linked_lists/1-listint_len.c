#include "lists.h"
/**
* listint_len - return number of elements in linjed list
* @h: list of integers to get their size
*
* Return: size of list
*/

size_t listint_len(const listint_t *h)
{

	int size = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);

}
