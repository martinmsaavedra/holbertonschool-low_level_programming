#include "lists.h"
/**
 *loopexist - check if loop exist whitin list
 *@head: head of list
 *@pl: pointer to loop value
 *@pnumber: pointer to number
 *Return: pointer to fast loop
 */
const listint_t *loopexist(const listint_t *head, int *pl, int *pnumber);
/**
 *print_listint_safe - prints all the elements of a listint
 *@head: head of list
 *Return: number of elements
 */
size_t print_listint_safe(const listint_t *head)
{

	int loop = 0, *pl = &loop;
	int number = 0, *pnumber = &number, node = 0;
        const listint_t *sp = head, *fp = head, *hl = NULL;

	if (head == NULL)
	{
		return (0);
		exit(98);
	}
	fp = loopexist(head, pl, pnumber);
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
		node = number;
		while (node > 0)
		{
			printf("[%p] %d\n", (void *)sp, sp->n);
			sp = sp->next;
			node--;
			hl = sp;
		}
		printf("-> [%p] %d\n", (void *)hl, hl->n);
	}
	else
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	return (number);
}
/**
 *loopexist - check if loop exist whitin list
 *@head: head of list
 *@pl: pointer to loop value
 *@pnumber: pointer to number
 *Return: pointer to fast loop
 */
const listint_t *loopexist(const listint_t *head, int *pl, int *pnumber)
{
	const listint_t *fp = head, *sp = head;

	while (fp)
	{
		sp = sp->next;
		fp = fp->next->next;
		(*pnumber)++;
		if (sp == fp)
		{
			*pl = 1;
			return (fp);
		}
	}
	*pl = 0;
	return (NULL);
}
