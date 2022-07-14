#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatates two string
 * @dest: first string
 * @src: second string
 * @n: third string
 *
 * Return: Return string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
