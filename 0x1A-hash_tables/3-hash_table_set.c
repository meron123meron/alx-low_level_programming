#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: is the hash table
 * @key: is the key(can not be an empty string)
 * @value: is the value(can be an empty string)
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index, size;

hash_node_t *new_node;

if (ht  == NULL || key == NULL)

return (0);

size = ht->size;
index = key_index((const unsigned char *)key, size);

if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)

{

ht->array[index]->value = strdup(value);

return (1);

}

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)

	return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
