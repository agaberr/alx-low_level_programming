#include "hash_tables.h"

/**
* hash_table_set - function that adds an element to the hash table
* @ht: hash table to add or update
* @key: key
* @value: value
*
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *curr_node;
	hash_node_t *new_node;

	if (!ht || !key || !value)
		return (0);

	idx = key_index(key, ht->size);
	curr_node = ht->array[idx];
	while (curr_node)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			curr_node->value = value;
			if (!curr_node->value)
				return (0);
			return (1);
		}
		curr_node = curr_node->next;
	}
	new_node = malloc(sizeof(hash_node_t *));
	if (!new_node)
		return (0);
	new_node->key = key;
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value;
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
