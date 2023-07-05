#include "lists.h"
/**
 * free_listint - free the linked list
 * @head: pointer to the head of the linked list
 * Author: Islam Abdelslam
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		free(head->next);
		head->next = NULL;
	}
	free(head);
	head = NULL;
}
