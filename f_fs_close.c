#include "monty.h"
/**
 * f_fs_close - close file stream
 * @status: status passed to exit
 * @arg: ptr to file stream
 * Return: void
 */
void f_fs_close(int status, void *arg)
{
	FILE *fs;

	(void)status;

	fs = (FILE *) arg;
	fclose(fs);
}
