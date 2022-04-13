#include <stdio.h>
/**
 * main - entry point
 * 
 * Return: Always 0 (success/correct)
 */
int main(void)
{
char ermis[] = "_putchar";
int c;

for (c = 0; c < 8; c++)
{
_putchar(ermis[c]);
}
_putchar('\n');
return (0);
}
