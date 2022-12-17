#include "monty.h"
/**
 * free_line_ptr - free the line ptr returned by getline
 * @status: exit status
 * @arg: ptr to the line
 * Return: void
 */
void free_line_ptr(int status, void *arg)
{
	char **lineptr = arg;

	(void)status;
	if (*lineptr != NULL)
		free(*lineptr);
}

