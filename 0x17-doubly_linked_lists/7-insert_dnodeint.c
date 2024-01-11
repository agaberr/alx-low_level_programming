#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: head to double linked list
* @idx: the index of the node, starting from 0
* @n: value of node
*
* Return: the address of the new node, or NULL if it failed
*
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new_node, *temp = *h;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
