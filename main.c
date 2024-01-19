#include "main.h"

car_t car = {NULL, NULL, NULL, 0};

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    char *store;
    FILE *paper;
    size_t size = 0;
    ssize_t read_line = 1;
    stack_t *stack = NULL;
    unsigned int counter = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    paper = fopen(argv[1], "r");
    car.paper = paper;

    if (!paper)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (read_line > 0)
    {
        store = NULL;
        read_line = getline(&store, &size, paper);
        car.store = store;
        counter++;

        if (read_line > 0)
        {
            _exec(store, &stack, counter, paper);
        }

        free(store);
    }

    free_stack(stack);
    fclose(paper);

    return (0);
}
