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
dog_t *p = (dog_t *)malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}

p->name = name;
p->age = age;
p->owner = owner;
return (p);
}
