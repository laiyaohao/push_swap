#include "push_swap.h"

void  rrb(t_stack *stack_b)
{
  t_list  *og_last;
  t_list  *sec_last;
  void    *last_con;

  if (is_empty(stack_b) || stack_b->top->next == NULL)
    return ;
  og_last = ft_lstlast(stack_b->top);
  sec_last = stack_b->top;
  while (sec_last->next->next)
	{
		sec_last = sec_last->next;
	}
  sec_last->next = NULL;
  last_con = og_last->content;
  ft_lstdelone(og_last, del_con);
  push(stack_b, last_con);
}
