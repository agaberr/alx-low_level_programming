#include "lists.h"
/**
* get_nodeint_at_index -  returns the nth node of a listint_t linked list
* @head: list of integers to get their size
* @index: index of list to get
*
* Return: node of given index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}

	return (head);

}
