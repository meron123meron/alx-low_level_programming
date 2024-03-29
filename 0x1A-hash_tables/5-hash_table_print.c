#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i = 0, toAvoidSpaceAtTheEnd = 0;
if (ht != NULL)
{
printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
if (toAvoidSpaceAtTheEnd != 0)
printf(", ");
toAvoidSpaceAtTheEnd = 1;
printf("'%s': '%s'", node->key, node->value);
node = node->next;
}
}
printf("}\n");
}
}
