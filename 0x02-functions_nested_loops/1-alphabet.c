#include "main.h"
/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

	return (0);
}