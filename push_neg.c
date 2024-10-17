#include "push_swap.h"

void	push_neg(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*node;
	int	i;
	int	size;

	node = stack_a->top;
	i = 0;
	size = stack_a->size;
	while (i < size)
	{
		if (*(long *)node->content < 0L)
			pb(stack_b, stack_a);
		else
			ra(stack_a, 0);
		i++;
		node = node->next;
	}
}
