#include "lists.h"

/**
* free_listint2 - free linked list, The function sets the head to NULL
* @head: pointer to head
*
* Return: None
*/

void free_listint2(listint_t **head)
{

	listint_t *temp_node;

	while (*head != NULL)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
	}
}
