#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * @n: takes in an integer
 * Return: returns output
 */

int print_last_digit(int n)
{
int 1n = n % 10;
if (n < 0)
1n = 1n * -1;
_putchar(1n + '0');
return (1n);
}\
