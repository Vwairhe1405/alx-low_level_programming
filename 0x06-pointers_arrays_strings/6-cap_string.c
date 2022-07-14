#include "main.h"
#include <string.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @y: The string
 *
 * Return: Capitalized string
 *
 */
char *cap_string(char *y)
{
char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int len = 13;
int a = 0, i;

while (y[i])
{
	i = 0;
	while (i < len)
	{
	if ((a == 0 || y[a - 1] == spc[i]) && (y[a] >= 97 && y[a] <= 122))
		y[a] = y[a] - 32;

		i++;
	}
	a++;
	}
return (y);
}
