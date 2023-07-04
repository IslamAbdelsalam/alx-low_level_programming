#include "lists.h"

/**
 * print_listint - prints all the elements of a list_tint list
 * @h: function parameter will pass to us linked list head
 * Return: It will return the length of the linked list.
*/
size_t print_listint(const listint_t *h)
{
	size_t nodeNumber = 0;
	listint_t  const *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);

		temp = temp->next;
		nodeNumber++;
	}
	return (nodeNumber);
}
