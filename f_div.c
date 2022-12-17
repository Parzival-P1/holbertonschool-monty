#include "monty.h"
/**
 * f_div - divide the 2nd element of the stack by top element
 * @stack: double ptr to the head of the stack
 * @line_number: line number of current operation
 * Return: void
 */
void f_div(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.stack_len < 2)
	{
		dprintf(SDOUT_FILENO,
			"L%u: can't div, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	f_pop(stack, line_number);
	if (n == 0)
	{
		dprintf(STDOUT_FILENO,
			"L%u: division by zero\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->n /= n;
}

