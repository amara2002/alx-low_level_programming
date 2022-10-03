#include <stdio.h>
/**
 * main - write a program that prints the number of arguments passed into it
 *
 * @args: This the argument count
 * @argv: This the argument vector
 *
 * Return: This return to 0
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

