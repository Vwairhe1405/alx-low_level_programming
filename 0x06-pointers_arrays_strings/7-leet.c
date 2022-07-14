#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @y: The string to be encoded
 *
 * Return: Return pointer to encoded string
 *
 */
char *leet(char *y)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (y[a])
	{
		b = 0;

		while (b < 1)
		{
			if (y[a] == tr[b] || y[a] - 32 == tr[b])
				y[a] = trw[b];
			b++;
		}
		a++;
	}
	return (y);
}
