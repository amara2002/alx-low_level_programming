#include "main.h"

/**
 * _strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)

{
int c, i;

c = 0;

while (dest[c] != '\0')
{
c++;
}

i = 0;
while (i <  n && src[i] != '\0')
{
dest[i] = src[i];
i++;
c++;
}
dest[c] = '\0';
return (dest);
}

