#include "lists.h"

/**
 * listint_len - Returns number of element in a listint_t list
 * @h: list
 *
 * Return: linked elements
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	else
		return (listint_len(h->next) + 1);
}
