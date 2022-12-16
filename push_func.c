#include "monty.h"
/**
 * check_digit - check if the strings conatin only digits
 * @arg: string to be checked
 * Return: 0 if there's a digit, 1 if not.
 */

static int check_digit(char *arg)
{
	int i;

	for (i = 0; arg[i]; i++)
	{
		if (arg[i] == '-' && i == 0)
			continue;
		if (isdigi(arg[i] == 0)
			return (1);
	}
	return (0);
}

/**
 * f_push - push ann int into the stack
 * @stack: double ptr to the begginning of the stack
 * @line_num: script line num
 * Return: void
 */
void f_push(stack_t **stack, unsigned int line_num)
{
	char *arg;
	int n;

	arg = strtok(NULL, "\n\t\r");
	if (arg == NULL || chec_digit(arg))
	{
		dprintf(STDOUT_FILENO,
			"L%u: usage: push integer\n",
			line_num);
		exit(EXIT_FAILURE);
	}
	n = atoi(arg);
	if (!add_node(stack, n))
	{
		dprintf(STDOUT_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	var.stacl_len++;
}

