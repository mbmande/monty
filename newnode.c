#include "main.h"

/**
 * newnode - ====
 * @head: ======
 * @n: ======
 */

void newnode(stack_t **head, int n)
{
	stack_t *nwnd, *xua;

	xua = *head;
	nwnd = malloc(sizeof(stack_t));
	if (nwnd == NULL)
	{
		printf("Error\n");
			exit(0); }
	if (xua)
		xua->prev = nwnd;
	nwnd->n = n;
	nwnd->next = *head;
	nwnd->prev = NULL;
	*head = nwnd;
		
}
