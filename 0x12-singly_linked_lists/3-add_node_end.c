#include "lists.h"

/**
* add_node_end - add node in the end of linked list
* @head: pointer to head
* @str: string to add in node
*
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node, *temp_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (str == NULL)
		new_node->str = "(nil)";
	else
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
	}

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp_node = *head;

		while (temp_node->next != NULL)
			temp_node = temp_node->next;

	    temp_node->next = new_node;
	    new_node->next = NULL;
	}

	return (*head);
}
