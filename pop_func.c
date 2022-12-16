#include "monty.h"
/**
 * f_pop - pops the top element oof the stack
 * @stack: double ptr to the head of the stack
 * @line_num: line number of the current operation
 * Return: void
 */
void f_pop(stack_t **stack, unsigned int line_num)
{
	stack_t *pop = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pop an empty stack\n"
			line_num);
		exit(EXIT_FAILURE);
	}
	(*stacki)->next->prev = (*stack)->prev;
	(*stacki)->next->next = (*stack)->next;
	if (var.stack_len != 1)
		*stack = (*stack)->next;
	else
		*stack = NULL;
	free(pop);
	var.stack_len--;
}

