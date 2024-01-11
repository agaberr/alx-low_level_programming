#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at
* index index of a dlistint_t linked list
* @head: head to double linked list
* @index: the index of the node, starting from 0
*
* Return: 1 if it succeeded, -1 if it failed
*
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp, *prev;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; temp && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (!temp)
		return (-1);

	prev->next = temp->next;
	if (temp->next)
		temp->next->prev = prev;

	free(temp);
	return (1);
}
