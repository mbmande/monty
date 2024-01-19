#include "main.h"

/**
* free_s - ======
* @head: =====
*/


void free_stack(stack_t *head)
{
	stack_t *asd;

	asd = head;
	
	while (head)
	{
		asd = head->next;
		free(head);
		head = asd;
	}
}
