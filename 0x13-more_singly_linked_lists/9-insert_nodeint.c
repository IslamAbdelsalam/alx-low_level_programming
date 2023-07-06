#include "lists.h"
/**
 * insert_nodeint_at_index - insert node into this idx
 * @head: the first node of the list "Head of it"
 * @idx: the location that we will add the node in
 * @n: our value that we will add to the new node
 * Return: the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nthNode = (listint_t *) malloc(sizeof(listint_t));
	size_t listLen = 0;
	listint_t *current = *head, *temp;

	if (nthNode == NULL)
		return (NULL);

	nthNode->n = n;
	nthNode->next = NULL;
	listLen = getListLen(*head);

	if (*head == NULL)
		return (nthNode);
	if (listLen + 1 < idx)
		return (NULL);
	else if (listLen == idx)
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = nthNode;
	}
	else if (listLen > idx)
	{
		current = *head;
		while (idx != 1)
		{
			current = current->next;
			idx--;
		}
		temp = current->next;
		current->next = nthNode;
		nthNode->next = temp;
	}
	return (nthNode);
}
/**
 * getListLen - get the length of my list
 * @head: head of the list
 * Return: len
 * Auther: Islam Abdelslam
 *
*/
int getListLen(listint_t *head)
{
	listint_t *current;
	int len = 0;

	current = head;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	len--;
	return (len);
}
