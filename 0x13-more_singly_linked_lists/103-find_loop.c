#include "lists.h"
/**
 *print_listint_safe - prints all the elements of a listint
 *@head: head of list
 *Return: number of elements
 */
listint_t *find_listint_loop(listint_t *head)
{
	int loop = 0;
	const listint_t *sp = head, *fp = head;

	if (!head)
		exit(98);

	while (fp)
{
	sp = sp->next;
	fp = fp->next->next;
	if (sp == fp)
	{
		loop = 1;
		break;
	}
}
	if (loop == 1)
	{
		sp = head;
		while (fp != sp)
		{
			sp = sp->next;
			fp = fp->next;
		}
		return (sp);
	}
	else
		return (NULL);
}
