#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: Count argument
 * @argv: Array pointers to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (num1 = 1; argv[num1]; num1++)
	{
		num2 = strtol(argv[num1], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num2;
		}
	}
	printf("%d\n", sum);
	return (0);
}
