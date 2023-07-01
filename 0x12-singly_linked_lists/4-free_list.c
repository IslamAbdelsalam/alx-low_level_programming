#include "lists.h"
/**
 * free_list - free the linked list
 * @head: pointer to the head of the linked list
 * Author: Islam Abdelslam
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *current = head;

		head = head->next;
		free(current->str);
		current->str = NULL;
		current->len = 0;
		free(current);
	}
}
