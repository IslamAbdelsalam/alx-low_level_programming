#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head: pointer to the head of the linked list
 * Author: Islam Abdelslam
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;
	current = *head;
	while (current)
	{
		listint_t *next = current->next;

		free(current);
		current = NULL;
		current = next;
	}
	*head = NULL;
}
