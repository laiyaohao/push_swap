#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	long	*b_top;

	if (is_empty(stack_b))
		return;
	b_top = (long *)malloc(sizeof(long));
	if (b_top == NULL)
		return ;
	*b_top = *(long *)stack_b->top->content;
	pop(stack_b);
	push(stack_a, b_top);
	ft_printf("pa\n");
}
