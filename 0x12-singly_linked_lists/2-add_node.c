#include "lists.h"
/**
 * add_node - add node to the linked list
 * @str: node content
 * @head: pointer to the head of the linked list
 * Return: the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(newNode->str);
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
