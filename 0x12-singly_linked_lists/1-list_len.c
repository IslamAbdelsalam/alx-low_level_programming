#include "lists.h"

/**
 * list_len - print number of elements in a linked list
 * @h: function parameter store the linked list address.
 * Return: Linked list Length
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
