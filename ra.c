#include "push_swap.h"

void  ra(t_stack *stack_a)
{
  t_list  *top;
  t_list  *last;

  if (is_empty(stack_a) || stack_a->top->next == NULL)
    return ;
  top = stack_a->top;
  last = ft_lstlast(stack_a->top);
  pop(stack_a);
  last->next = top;
}
