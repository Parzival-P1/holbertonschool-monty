#include "monty.h"
/**
 * main - Monty bytecode interpreter
 * @argc: number of arguments passed
 * @argv: array of argument strings
 * Return: on success EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */

int main(int argc, char *argv[])
{
	initialize_var();

	if (argc != 2)
	{
		dprintf(STDERR_FILEND, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	monty.file = fopen(argv[1], "r");
	if (monty.file == NULL)
	{
		dprintf(STDERR_FILEND, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	read_line();
	free_vars();
	exit(EXIT_SUCCESS);
}

