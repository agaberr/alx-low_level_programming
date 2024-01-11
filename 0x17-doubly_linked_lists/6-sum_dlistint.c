#include "lists.h"

/**
* sum_dlistint -  returns the sum of all the
* data (n) of a dlistint_t linked list
* @head: head to double linked list
*
* Return: sum of all the data (n), if empty return 0
*
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
