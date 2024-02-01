#include "hash_tables.h"

/**
* hash_table_print - function that prints a hash table
* @ht: hash table
*
* Return: None
*/

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int idx;
	int comma = 0;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma = 1;
			node = node->next;
		}
	}
	printf("}\n");

}
