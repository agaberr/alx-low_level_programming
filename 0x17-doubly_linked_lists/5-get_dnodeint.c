#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: head to double linked list
* @index: the index of the node, starting from 0
*
* Return: returns the nth node of a dlistint_t linked list, else NULL
*
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}

	while (head)
	{
		if (i == index)
			return (head);

		i++;
		head = head->next;
	}

	return (NULL);

}
