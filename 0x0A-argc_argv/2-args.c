#include <stdio.h>

/**
 * main - prints all argument it receives
 * @argc: Count of argument
 * @argv: Arrays of pointers to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[1]);
	return (0);
}
