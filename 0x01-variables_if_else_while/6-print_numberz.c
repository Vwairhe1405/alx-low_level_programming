#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all single digit numbers starting from 0,
 *        using only putchar without char variables
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
