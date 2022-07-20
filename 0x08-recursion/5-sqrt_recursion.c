#include "main.h"
#include <stdio.h>
int _sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt -  Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: iterator
 *
 * Return: square of a number, otherwise -1
 */
int _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number
 *
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * _sqrt(n, root));
}
