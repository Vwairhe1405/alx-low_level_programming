#include <stdio.h>

/**
 * main - print the number of argument passed into it, followed by newline
 * @argc: Count of arguments
 * @argv: Arrays of ponters to strings
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
