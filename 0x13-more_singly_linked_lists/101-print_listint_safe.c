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
	const listint_t *sp = head, *fp = head;

	if (!head)
		exit(98);

	while (fp)
{
	printf("[%p] %d\n", (void *)sp, sp->n);
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
			printf("[%p] %d\n", (void *)fp, fp->n);
			sp = sp->next;
			fp = fp->next;
			number++;
		}
	 printf("->[%p] %d\n", (void *)sp, sp->n);
	}
	return (number);
}
