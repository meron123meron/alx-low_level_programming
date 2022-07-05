#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - is a function that receives a pointer
 * @name: function argument
 * @age: function argument
 * @owner: function argument
 * Return: pointer
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, size;
char *s;
dog_t *p = malloc(sizeof(dog_t));
if (p != NULL)
{
p->name = name;
p->age = age;
p->owner = owner;
for (i = 0; i != '\0'; i++)
{
}
for (j = 0; j != '\0'; j++)
{
}
size = i + j + 1;
s = malloc(sizeof(size));
for (i = 0; i != '\0'; i++)
s[i] = name[i];
for (j = 0; j != '\0'; j++, i++)
s[i] = owner[j];

return (p);
}
else
return (NULL);
}
