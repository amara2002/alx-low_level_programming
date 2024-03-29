#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars and initializes with
 * a specific char.
 * @size: size of array
 * @c: char to initialize array with.
 *
 * Return: NULL if it fails or
 * Pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
