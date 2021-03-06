#include "lists.h"
/**
 * check_cycle - checks if is there loop in a linked list
 * @list: pointer to the head of the list
 * Return: 0 if there is no loop, 1 if a loop found
 */
int check_cycle(listint_t *list)
{
	listint_t  *advptr = list, *ptr = list;

	if (list == NULL)
		return (0);

	while (1)
	{
		if (!(ptr && advptr && advptr->next))
			return (0);
		ptr = ptr->next;
		advptr = (advptr->next)->next;
		if (ptr == advptr)
			return (1);
	}
	return (0);
}
