#include "push_swap.h"

void  rb(t_stack *stack_b)
{
  void		*top_con;
	t_list	*top;
	t_list	*last;

	if (is_empty(stack_b) || stack_b->top->next == NULL)
		return ;
	top_con = stack_b->top->content;
	last = ft_lstlast(stack_b->top);
	pop(stack_b);
	top = ft_lstnew(top_con);
	last->next = top;
}
