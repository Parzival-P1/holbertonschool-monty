#include "monty.h"
/**
 * f_add - add two elements at the top of the stack
 * @stack: 2ble ptr to the beginning of the stack
 * @line_number: indicates the line number of the operation
 * Return: void
 */
void f_add(stack_t **stack, unsigned int line_number)
{
	int n = 0;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO, "L%u: can't add, stack too short\n",line_number);
		perror("cant add");
		exit(EXIT_FAILURE);
	}
	n += (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n += n;
}

