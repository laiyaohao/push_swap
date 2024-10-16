#include "push_swap.h"

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	push_small_to_b(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}
