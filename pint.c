#include "main.h"

/**
 * f_pint - =====
 * @head: =======
 * @counter: ======
 * Return: ======
*/


void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(car.paper);
		free(car.store);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
