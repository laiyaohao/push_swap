#include "push_swap.h"

void  rrb(t_stack *stack_b)
{
  t_list  *og_last;
  t_list  *og_first;

  if (is_empty(stack_b) || stack_b->top->next == NULL)
    return ;
  og_last = ft_lstlast(stack_b->top);
  og_first = stack_b->top;
  og_last->next = og_first;
  stack_b->top = og_last;
}
