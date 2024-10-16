#include "push_swap.h"

long	find_smallest(t_stack *stack_a)
{
	t_list	*node;
	long	smallest;

	smallest = *(long *)stack_a->top->content;
	node = stack_a->top;
	while (node != NULL)
	{
		if (*(long *)node->content < smallest)
			smallest = *(long *)node->content;
		node = node->next;
	}
	return (smallest);
}
