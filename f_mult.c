#include "monty.h"
/**
 * f_mul - multiply top two elements of stack & push the result
 * @stack: dbl ptr to the head of the stack
 * @line_number: line number of current operation
 * Return: void
 */
void f_mul(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't mul, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	f_pop(stack, line_number);
	(*stack)->n *= n;
}

