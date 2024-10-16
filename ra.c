#include "push_swap.h"

/**
 * Shift up all elements of stack a by 1.
The first element becomes the last one.
 */
void  ra(t_stack *stack_a, int print)
{
	long		*top_con;

	if (is_empty(stack_a) || stack_a->top->next == NULL)
		return ;
	top_con = (long *)malloc(sizeof(long));
	if (top_con == NULL)
		return ;
	*top_con = *(long *)stack_a->top->content;
	pop(stack_a);
	add_back(stack_a, top_con);
	if (print)
		ft_printf("ra\n");
}
