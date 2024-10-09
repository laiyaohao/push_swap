#include "push_swap.h"

void	push(t_stack *stack, int num)
{
	t_list	*node;

	node = ft_lstnew(num);
	ft_lstadd_front(&stack, node);
	stack->top = node;
}
