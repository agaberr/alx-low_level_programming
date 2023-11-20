#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at
* index index of a listint_t linked list
* @head: head of linkedlist
* @index: index of the node that should be deleted. Index starts at 0
*
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i;

	listint_t *temp_node1;
	listint_t *temp_node2;


	if (head == NULL || *head == NULL)
		return (-1);


	if (index == 0)
	{
		temp_node1 = *head;
		*head = (*head)->next;
		free(temp_node1);
		return (1);
	}

	temp_node1 = *head;

	for (i = 0; i < index - 1; i++)
	{

		if (temp_node1 == NULL)
			return (-1);

		temp_node1 = temp_node1->next;
	}

	if (temp_node1->next == NULL)
		return (-1);

	temp_node2 = temp_node1->next;
	temp_node1->next = temp_node2->next;

	free(temp_node2);

	return (1);

}
