#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the first node
 * @n: integer
 *
 * Return: address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
