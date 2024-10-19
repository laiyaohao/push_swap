#include "push_swap.h"

void	push(t_stack *stack, void *num)
{
	t_list	*node;

	node = ft_lstnew(num);
	if (stack->top == NULL)
	{
		stack->top = node;
	}
	else
		ft_lstadd_front(&(stack->top), node);
	stack->size = stack->size + 1;
}
