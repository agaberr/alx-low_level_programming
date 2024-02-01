#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: hash table you want to look into
* @key: key you are looking for
*
* Return: value associated with the element, or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int idx;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	node = ht->array[idx];

	if (!node)
		return (NULL);

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
