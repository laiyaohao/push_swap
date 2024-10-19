#include "push_swap.h"

void	sort_two(t_stack *stack_a)
{
	int	top;
	int	bottom;

	top = *(long *)stack_a->top->content;
	bottom = *(long *)stack_a->top->next->content;
	if (top > bottom)
		sa(stack_a, 1);
}
