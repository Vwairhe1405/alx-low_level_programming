#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 * @dest: string one
 * @src: string two
 * @n: string one
 *
 * Return: Return string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
