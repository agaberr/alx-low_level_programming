#include "hash_tables.h"

/**
* hash_table_delete - delete hash table
* @ht: hash table
*
* Return: None
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node, *temp;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			temp = node;
			free(temp->key);
			free(temp->value);
			free(temp);

			node = node->next;
		}
	}
	free(ht->array);
	free(ht);
}
