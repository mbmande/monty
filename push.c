#include "main.h"

/**
 * f_push - ====
 * @head: =======
 * @counter: ==
 */

void f_push(stack_t **head, unsigned int counter)
{
	int ga;
	int q = 0;
	int light;

	if (car.arges)
	{ 
		if (car.arges[0] == '-')
			q++;
		for (; car.arges[ga] != '\0'; ga++)
		{
			if (car.arges[ga] > 57 || car.arges[ga] < 48)
				light = 1;
		}
		if (light == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(car.paper);
			free(car.store);
			free_stack(*head);
			exit(EXIT_FAILURE); }
		}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(car.paper);
		free(car.store);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	q = atoi(car.arges);
	if (car.wan == 0)
		newnode(head, q);
	else
		newqueue(head, q);
}
