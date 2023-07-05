#include "lists.h"
/**
 * pop_listint - will delete the linkedList head
 * @head: the pointer to the linkedList pointer to head
 * Return: 0 if head = NULL
 *			n of the head-> next if success
*/
int pop_listint(listint_t **head)
{
	listint_t *deleteNode;

	if (head == NULL || *head == NULL)
		return (0);

	deleteNode = *head;
	*head = (*head)->next;

	free(deleteNode);
	deleteNode = NULL;

	return ((*head)->n);
}
