#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *c;
unsigned long int i = 0;
if (ht != NULL)
{
printf("{");
for (i = 0; i < ht->size; i++)
{
c = ht->array[i];
while (c != NULL)
{
printf("'%s' : '%s'", c->key, c->value);
printf(", ");
c = c->next;
}
}
printf("}\n");
}
}
