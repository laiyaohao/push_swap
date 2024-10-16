#include "push_swap.h"

void	push_small_to_b(t_stack *stack_a, t_stack *stack_b)
{
	long	smallest;
	t_list	*node;

	smallest = find_smallest(stack_a);
	node = stack_a->top;
	while (*(long *)node->content != smallest)
	{
		node = node->next;
		ra(stack_a, 1);
	}
	pb(stack_b, stack_a);
}
