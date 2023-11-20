#include "lists.h"
/**
 * list_len -  function that returns the number of elements in 
 * a linked list
 * @h: a pointer
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
