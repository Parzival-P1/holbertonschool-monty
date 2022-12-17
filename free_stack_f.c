#include "monty.h"
/**
 * free_stack- frees the stack on exit
 * @status: exit status
 * @arg: double ptr to the stack
 * Return: void
 */
void free_stack(int status, void *arg)
{
	stack_t **stack;
	stack_t *next;

	(void)status;

	stack = (stack_t **)arg;
	if (*stack)
	{
		(*stack)->prev->next = NULL;
		(*stack)->prev = NULL;
	}
	while (*stack != NULL)
	{
		next = (*stack)->enxt;
		free(*stack);
		*stack = next;
	}
	var.stack_len = 0;
}

