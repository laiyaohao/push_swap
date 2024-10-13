#include "push_swap.h"

void  pa(t_stack *stack_a, t_stack *stack_b)
{
  void  *b_top;

  if (is_empty(stack_b))
    return;
  b_top = pop(stack_b);
  push(stack_a, b_top);
}
