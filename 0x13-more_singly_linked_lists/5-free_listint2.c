#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head: pointer to the head of the linked list
 * Author: Islam Abdelslam
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		listint_t *current = *head;

		*head = (*head)->next;
		free(current);
		current = NULL;
	}
}
