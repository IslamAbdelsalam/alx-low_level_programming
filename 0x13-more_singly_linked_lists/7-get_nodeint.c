#include "lists.h"

/**
*	get_nodeint_at_index - search about the node using index
*	@head: the head of our linkedList..
*	@index: node no
*	Return: the node if i found else will return Null
*	Auther: Islam Abdelslam
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthNode;

	nthNode = head;
	while (index != 0)
	{
		if (nthNode != NULL)
		{
			nthNode = nthNode->next;
		}
		else
			return (NULL);
		index--;
	}
	return (nthNode);
}
