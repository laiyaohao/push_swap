#include "push_swap.h"

void	free_stack(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*lst_a;
	t_list	*lst_b;

	lst_a = stack_a->top;
	lst_b = stack_b->top;
	ft_lstclear(&lst_a, free);
	ft_lstclear(&lst_b, free);
}
