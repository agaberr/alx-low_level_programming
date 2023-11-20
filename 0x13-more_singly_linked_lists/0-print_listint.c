#include "lists.h"
/**
* print_listint - print list of integers
* @h: list of integers to print
*
* Return: size of list
*/

size_t print_listint(const listint_t *h)
{

	int size = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);

}
