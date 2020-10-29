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
		if (h->str != NULL)
		{
			printf("[%d]%s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		number++;
		h = h->next;
	}
	return (number);
}
