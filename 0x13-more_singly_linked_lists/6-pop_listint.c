#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to head
*
* Return: head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp_node;

	if (head == NULL || *head == NULL)
		return (0);


	temp_node = *head;
	*head = (*head)->next;
	val = temp_node->n;
	free(temp_node);

	return (val);
}
