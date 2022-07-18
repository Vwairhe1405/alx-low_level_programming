#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a character in a string
 * @c: character to locate
 * @s: String
 *
 * Return: A string if found, or NULL otherwise
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
