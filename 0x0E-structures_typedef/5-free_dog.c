#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - is a function that deallocates the space
 * @d: pointer
 *
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d);
}
}
