#include <string.h>
#include "main.h"

/**
 * puts2 - prints evry character of a string, starting with the first
 * character followed by a newline.
 * @str: - The string character
 *
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
