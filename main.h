#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <ctype.h>




/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 *
 * struct car_s ==========
 * @arges: ======
 * @paper: ======
 * @store: =======
 * @wan: ===
 * Description: =======
 *
 */

typedef struct car_s
{
	FILE *paper;
	char *store;
	int *wan;
	char *arges;
} car_t;
extern car_t car;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void f_push(stack_t **head, unsigned int number);
void newnode(stack_t **head, int n);
int _exec(char *content, stack_t **stack, unsigned int counter, FILE *file);
void f_pall(stack_t **head, unsigned int counter);
void free_stack(stack_t *head);
void newqueue(stack_t **head, int n);

#endif