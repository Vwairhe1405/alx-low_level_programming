#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes
 *
 * Return:To s if it matches, NULL if not.
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
