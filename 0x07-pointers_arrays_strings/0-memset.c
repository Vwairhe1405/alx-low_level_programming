#include "main.h"

/**
 * _memset - function that fill memory with a constant byte
 * @n: The memory area to be filled
 * @s: The pointer to the memory area to be filled
 * @b: Character with the byte
 *
 * Return: To the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
