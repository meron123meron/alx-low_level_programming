#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm 
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
size_t i, low, high;
if (array == NULL)
return (-1);
for (low = 0, high = size - 1; high >= low;)
{
printf("Searching in array: ");
for (i = low; i < high; i++)
printf("%d, ", array[i]);

printf("%d\n", array[i]);

i = low + (high - low) / 2;
if (array[i] == value)
return (i);
if (array[i] > value)
high = i - 1;
else
low = i + 1;
}
return (-1);
}
