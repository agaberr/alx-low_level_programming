#include "lists.h"
/**
* insert_nodeint_at_index - adds a new_node node at a given position
* @head: head of linkedlist
* @idx: index of the list where the new_node node
* should be added. Index starts at 0
* @n: value to add to node
*
* Return: address of the new_node element, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i;
	listint_t *new_node, *temp_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx; i++)
	{
		if (temp_node)
		{
			if (i + 1 == idx)
			{
				new_node->next = temp_node->next;
				temp_node->next = new_node;
				return (new_node);
			}
			else
				temp_node = temp_node->next;
		}
	}

	return (NULL);
}
