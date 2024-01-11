#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list
* @head: head to double linked list
*
* Return: None
*
*/

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp = head;

	if (!head)
	{
		return;
	}

	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
