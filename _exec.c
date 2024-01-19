#include "main.h"


/**
* _exec - =====
* @stack: ========
* @counter: ====
* @file: ========
* @content: ======
* Return: =========
*
*
*/


int _exec(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{NULL, NULL}
				};
	
	unsigned int i = 0;
	char *brk;

	brk = strtok(content, " \n\t");
	if (brk && brk[0] == '#')
		return (0);
	
	car.arges = strtok(NULL, " \n\t");
	while (opst[i].opcode && brk)
	{
		if (strcmp(brk, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	
	if (brk && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, brk);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
