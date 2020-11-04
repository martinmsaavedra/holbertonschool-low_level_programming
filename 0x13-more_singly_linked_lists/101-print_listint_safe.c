#include "lists.h"
/**
 *print_listint_safe - prints all the elements of a listint
 *@head: head of list
 *Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{

	int loop = 0;
	unsigned int number = 0;
	const listint_t *sp = head, *fp = head, *hl = NULL;

	if (!head)
		exit(98);

	while (fp)
	{
		sp = sp->next;
		fp = fp->next->next;
		number++;
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
			number++;
		}
		sp = head;
		while (number > 0)
		{

			printf("[%p] %d\n", (void *)sp, sp->n);
			sp = sp->next;
			number--;
			hl = sp;
		}
		printf("->[%p] %d\n", (void *)hl, hl->n);
	}
	else
	{
		sp = head;
		while (sp)
		{

			printf("[%p] %d\n",(void *)sp, sp->n);
			sp = sp->next;
		}
	}
return (number);
}
