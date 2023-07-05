#include "lists.h"
/**
 * free_listint - free the linked list
 * @head: pointer to the head of the linked list
 * Author: Islam Abdelslam
 */
void free_listint(listint_t *head)
{
	listint_t *del = head;
	
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		del = head->next;
		head->next = head->next->next;
		free(del);
		del = NULL;
	}
	free(head);
}
