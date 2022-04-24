#include "main.h"

/**
 * _strncat - a function that concatenate two strings.
 *@dest: pointer to destination input
 *@src: pointer to source input
 *@n: most number of bytes from @src
 *
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

