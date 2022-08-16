#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all element of listint_ listt
 * @h: list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	return (print_listint(h->next) + 1);
}
