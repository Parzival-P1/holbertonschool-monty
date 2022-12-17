#include "monty.h"
/**
 * f_pint - print the val on top of the stack, or exit if the stack is empty
 * @stack: double ptr to head of stack
 * @line_num: line number of current operation
 * Return: void
 */
void f_pint(stack, unsigned int line_num)
{
	stack_t *head = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pint, stack empty\n",
			line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}

