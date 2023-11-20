#include "lists.h"
/**
* insert_nodeint_at_index - adds a new node at a given position
* @head: head of linkedlist
* @idx: index of the list where the new node should be added. Index starts at 0
* @n: value to add to node
*
* Return: address of the new element, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i;

	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp_node1;
	listint_t *temp_node2;


	if (new_node == NULL || *head == NULL)
		return (NULL);

	new_node->n = n;

	temp_node1 = *head;
	temp_node2 = new_node;

	for (i = 0; i < idx - 1; i++)
	{

		if (temp_node1 == NULL)
			return (NULL);

		temp_node1 = temp_node1->next;
	}

	temp_node2->next = temp_node1->next;
	temp_node1->next = temp_node2;

	return (new_node);

}
