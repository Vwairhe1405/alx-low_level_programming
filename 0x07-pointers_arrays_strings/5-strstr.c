#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @needle:The substring to be located
 * @haystack: Searched substring
 *
 * Return: Beginning of located substring, otherwise NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			 b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}
	return ('\0');
}
