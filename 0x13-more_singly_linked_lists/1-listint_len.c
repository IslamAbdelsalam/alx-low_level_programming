#include "lists.h"
/**
 * listint_len - print number of elements in a linked list
 * @h: function parameter store the linked list address.
 * Return: Linked list Length
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *i;

	i = h;
	while (i != NULL)
	{
		len++;
		i = i->next;
	}

	return (len);
}
