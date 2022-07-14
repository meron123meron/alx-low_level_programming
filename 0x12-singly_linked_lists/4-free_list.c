#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees allocated memory
 * @head: pointer
 * Return: Nothing
 */
void free_list(list_t *head)
{
free(head);
}
