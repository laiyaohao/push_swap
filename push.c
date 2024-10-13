#include "push_swap.h"

void	push(t_stack *stack, void *num)
{
	t_list	*node;

	node = ft_lstnew(num);
	// ft_printf("node's content: %d\n",*(int*)node->content);
	if (stack->top == NULL)
	{
		stack->top = node;
		// ft_printf("stack->top == nULL\n");
	}
	else
		ft_lstadd_back(&(stack->top), node);

	// ft_printf("\n\n");
	// print_stack(stack);
	// ft_printf("\n\n");
	stack->size = stack->size + 1;
}
