#include "push_swap.h"

void  pb(t_stack *stack_b, t_stack *stack_a)
{
  void  *a_top;

  if (is_empty(stack_a))
    return;
  a_top = pop(stack_a);
  push(stack_b, a_top);
}