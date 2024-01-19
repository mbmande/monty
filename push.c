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
		for (; car.arges[q] != '\0'; q++)
		{
			if (car.arges[q] > 57 || car.arges[q] < 48)
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
	ga = atoi(car.arges);
	if (car.wan == 0)
		newnode(head, ga);
	else
		newqueue(head, ga);
}
