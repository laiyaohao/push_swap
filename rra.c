#include "push_swap.h"

/**
 * Shift down all elements of stack a by 1.
The last element becomes the first one
 */
void  rra(t_stack *stack_a, int print)
{
  t_list  *og_last;
  t_list  *sec_last;
  long    *last_con;

  if (is_empty(stack_a) || stack_a->top->next == NULL)
    return ;
  og_last = ft_lstlast(stack_a->top);
  sec_last = stack_a->top;
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
  push(stack_a, last_con);
  if (print)
    ft_printf("rra\n");
}
