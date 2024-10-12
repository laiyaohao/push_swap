#include "push_swap.h"

/**
 * Shift down all elements of stack a by 1.
The last element becomes the first one
 */
void  rra(t_stack *stack_a)
{
  t_list  *og_last;
  t_list  *sec_last;
  void    *last_con;

  if (is_empty(stack_a) || stack_a->top->next == NULL)
    return ;
  og_last = ft_lstlast(stack_a->top);
  sec_last = stack_a->top;
  while (sec_last->next->next)
	{
		sec_last = sec_last->next;
	}
  sec_last->next = NULL;
  last_con = og_last->content;
  ft_lstdelone(og_last, del_con);
  push(stack_a, last_con);
}
