#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings and appends them
 * @src: The first string
 * @dest: The second string
 *
 * Return: Returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
