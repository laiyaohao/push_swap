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

void	push_small_to_b(t_stack *stack_a, t_stack *stack_b)
{
	long	smallest;
	t_list	*node;

	smallest = find_smallest(stack_a);
	node = stack_a->top;
	while (*(long *)node->content != smallest)
	{
		ra(stack_a, 1);
		node = node->next;
	}
	pb(stack_b, stack_a);
}

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	push_small_to_b(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}