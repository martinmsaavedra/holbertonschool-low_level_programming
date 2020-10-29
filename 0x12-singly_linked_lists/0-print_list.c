#include "lists.h"
/**
 *print_list - prints all the elements of a list_t
 *@h: pointer to first element of list
 *Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t number = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->h == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d]%s\n", h->len, h->str);
		}
		number++;
		h = h->next;
	}
	return (number);
}
