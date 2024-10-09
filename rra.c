#include "push_swap.h"

void  rra(t_stack *stack_a)
{
  t_list  *og_last;
  t_list  *og_first;

  if (is_empty(stack_a) || stack_a->top->next == NULL)
    return ;
  og_last = ft_lstlast(stack_a->top);
  og_first = stack_a->top;
  og_last->next = og_first;
  stack_a->top = og_last;
}
