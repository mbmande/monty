#include "main.h"

/**
 * f_pop - ======
 * @head: =====
 * @counter: =====
 * 
*/


void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(car.paper);
		free(car.store);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
