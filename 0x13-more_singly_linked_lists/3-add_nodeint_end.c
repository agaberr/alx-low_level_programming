#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: head of linkedlist
* @n: value to add to node
*
* Return: address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp_node;


	if (head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp_node = *head;

		while (temp_node->next)
		{
			temp_node = temp_node->next;
		}

		temp_node->next = new_node;
	}

	return (new_node);

}
