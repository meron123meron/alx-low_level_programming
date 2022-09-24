#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: is the hash table
 * @key: is the specific key
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index, size;

if (ht == NULL || key == NULL || *key == '\0')

return (NULL);

size = ht->size;
index = key_index((const unsigned char *)key, size);

node = ht->array[index];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);

node = node->next;
}
return (NULL);
}
