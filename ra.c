#include "push_swap.h"

/**
 * Shift up all elements of stack a by 1.
The first element becomes the last one.
 */
void  ra(t_stack *stack_a)
{
	void		*top_con;
	t_list	*top;
	t_list	*last;

	if (is_empty(stack_a) || stack_a->top->next == NULL)
		return ;
	top_con = stack_a->top->content;
	last = ft_lstlast(stack_a->top);
	pop(stack_a);
	top = ft_lstnew(top_con);
	last->next = top;
}
