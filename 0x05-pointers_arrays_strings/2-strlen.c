#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: The string
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
