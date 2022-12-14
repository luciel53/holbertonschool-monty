#include "monty.h"

/**
 * add - A function that deletes a node after add its value to the next node
 * @stack: the top node
 * @line_number: number of the line where the error is found
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!stack || !(*stack) || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

/* Define the value */
	n = (*stack)->n;
/* Remove the first node */
	pop(stack, line_number);
/* add the value to the next node */
	(*stack)->n += n;
}
