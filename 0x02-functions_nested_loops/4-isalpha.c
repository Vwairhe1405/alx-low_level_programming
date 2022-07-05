#include "main.h"
/**
 * _isalpha - Checks if the character is alphabetic.
 * @c: The alphabet to be checked
 *
 * Return 1 if c is lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}

