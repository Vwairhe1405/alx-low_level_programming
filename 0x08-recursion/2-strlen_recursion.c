#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s: lenth of string to be returned
 *
 * Return:Length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
