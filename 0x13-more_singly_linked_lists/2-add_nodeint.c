#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: pointer to element
 * @n: number
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = createNode(n);
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}

/**
 * createNode - create a new node
 *
 * @prmNbr: number
 *
 * Return: new element
 */
listint_t *createNode(const int prmNbr)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = prmNbr;
	return (new);
}
