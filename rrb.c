#include "push_swap.h"

void	rrb(t_stack *stack_b, int print)
{
	t_list	*og_last;
	t_list	*sec_last;
	long		*last_con;

	if (is_empty(stack_b) || stack_b->top->next == NULL)
		return ;
	og_last = ft_lstlast(stack_b->top);
	sec_last = stack_b->top;
	while (sec_last->next->next)
	{
		sec_last = sec_last->next;
	}
	sec_last->next = NULL;
	last_con = (long *)malloc(sizeof(long));
	if (last_con == NULL)
		return ;
	*last_con = *(long *)og_last->content;
	ft_lstdelone(og_last, free);
	stack_b->size = stack_b->size - 1;
	push(stack_b, last_con);
	if (print)
		ft_printf("rrb\n");
}
