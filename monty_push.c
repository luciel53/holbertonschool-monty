#include "monty.h"

/**
* monty_push - add an integer to stack
* @stack: a double pointer to the top of the stack
* @line_number: file line number
* Return: void
*/
void monty_push(stack_t **stack, unsigned int line_number)
{
	char *val;
	int number, count, check = 0;

	/*	printf("A\n");*/
	val = strtok(NULL, "\n\t\r ");

/*	printf("<B\n"); */
/*	printf("%s\n", val); */
	if (val == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	for (count = 0; val[count]; count++)
	{
		if (val[count] == '-' && count == 0)
			continue;
/* A function that compares if a character is a digit or not */
		if (isdigit(val[count]) == 0)
			check = 1;
	}
/*	printf("AB\n"); */
	if (check)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
/*	printf("C\n"); */
/* function converts an ASCII character to an integer */
	number = atoi(val);
	add_stack(stack, number);
}
