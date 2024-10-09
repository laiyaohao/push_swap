#include "push_swap.h"

void  rb(t_stack *stack_b)
{
  t_list  *top;
  t_list  *last;

  if (is_empty(stack_b) || stack_b->top->next == NULL)
    return ;
  top = stack_b->top;
  last = ft_lstlast(stack_b->top);
  pop(stack_b);
  last->next = top;
}
