#include "push_swap.h"

void	sort_stack(t_stack *stack_a, t_stack *stack_b, int error)
{
	if (!error)
	{
		if (stack_a->size == 2)
			sort_two(stack_a);
		else if (stack_a->size == 3)
			sort_three(stack_a);
		else if (stack_a->size == 4)
			sort_four(stack_a, stack_b);
		else if (stack_a->size == 5)
			sort_five(stack_a, stack_b);
		else
			radix_sort(stack_a, stack_b);
	}
}
