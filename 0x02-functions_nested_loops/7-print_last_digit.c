#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter
 *
 * Return: return the last digit
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	else
	{
		_putcahr(d + '0');
		return (d);
	}
}
