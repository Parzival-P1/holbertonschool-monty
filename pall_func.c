#include "monty.h"
/**
 * f_pall - print all the values on the stack stsrting from the top
 * @stack: dohble ptr to the head of the stack
 * @line_num: line number being executed from script file
 * Return: void
 */
void f_pall(stack_t **stack, unsigned int line_num)
{
	stack_t *head;

	(void)(line_num);

	head = *stack;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		if (head == *stack)
			return;
	}

}

