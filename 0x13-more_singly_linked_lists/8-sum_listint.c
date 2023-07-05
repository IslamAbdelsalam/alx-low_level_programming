#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: 1th node in the linkedList..
 * Return: 0 if it Empty else return the sum....
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *i;

	if (head == NULL)
		return (0);
	i = head;
	while (i != NULL)
	{
		sum += i->n;
		i = i->next;
	}
	return (sum);
}
