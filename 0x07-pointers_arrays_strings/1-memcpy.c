#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * @n: bytes to be copy
 * @src: memory area to be copied from
 * @dest: memory area to copy to
 *
 * Return: To dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
