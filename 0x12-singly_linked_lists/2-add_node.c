#include "lists.h"

/**
* add_node - add node in the beginning of linked list
* @head: pointer to head
* @str: string to add in node
*
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

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

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
