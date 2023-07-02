#include "lists.h"
/**
 * add_node - add node to the linked list
 * @str: node content
 * @head: pointer to the head of the linked list
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head; // كدا أنا بقولك إن العربية الي بتجر غيرناها بالجديدة
	*head = new_node;

	return (new_node);
}
