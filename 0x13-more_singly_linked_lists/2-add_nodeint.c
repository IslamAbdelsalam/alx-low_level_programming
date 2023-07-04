#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the head of linkedList
 * @n: parameter to asign to the n in the listint_t struct
 * Return: the address to the new node
 * Auther: Islam Abdelslam
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *) malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
