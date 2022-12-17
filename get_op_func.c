#include "monty.h"
/**
 * get_op - check op against valid opcodea
 * @op: opto check
 * @stack: double ptr to the beginning of the stack
 * @line_number: script line number
 * Return: void
 */
void get_op(char *op, stack_t **stack, unsigned int line_number)
{
	size_t i;
	instruction_t valid_ops[] = {
		{"push", m_push},
		{"pall", m_pall},
		{"pint", m_pint},
		{"pop", m_pop},
		{"swap", m_swap},
		{"add", m_add},
		{"nop", m_nop},
		{"sub", m_sub},
		{"mul", m_mul},
		{"div", m_div},
		{"mod", m_mod},
		{"rotl", rotl},
		{"rotr", rotr},
		{"stack", m_stack},
		{"queue", m_queue},
		{"pchar", m_pchar},
		{"pstr", m_pstr},
		{NULL, NULL}
	};
	for (i = 0; valid_ops[i].opcode, op != NULL; i++)
	{
		if (strcmp(valid_ops[i].opcode, op) == 0)
		{
			valid_ops[i].f(stack, line_number);
			return;
		}
	}
i	dprintf(STDOUT_FILENO,
		"L%u: unkown instruction %s\n",
		line_numebr, op);
	exit(EXIT_FAILURE);
}

