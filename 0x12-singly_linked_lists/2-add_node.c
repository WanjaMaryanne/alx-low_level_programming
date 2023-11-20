#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning
 * @head: pointer to the head of the list_t
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t *));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}
	new->next = *head;
	*head = new;

	new->str = strdup(str);

	i = 0;

	while (str[i])
		i++;
	new->len = 1;

	return (new);
}


