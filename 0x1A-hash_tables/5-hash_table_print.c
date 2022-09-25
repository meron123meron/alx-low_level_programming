#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table
 * @ht: is the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *c; /*c is a node */
unsigned long int i = 0, count = 0;
if (ht != NULL)
{
printf("{");
for (i = 0; i < ht->size; i++)
{
c = ht->array[i];
while (c != NULL)
{
if (count != 0)
printf(", ");
count = 1;
printf("'%s' : '%s'", c->key, c->value);
c = c->next;
}
}
printf("}\n");
}
}
