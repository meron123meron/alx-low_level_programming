#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - is the function consisting the struct
 * struct dog - is a struct with 4 members
 * @d: pointer member 1
 * @name: member 2
 * @age: member 3
 * @owner: member 4
 * Description:
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
while (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
