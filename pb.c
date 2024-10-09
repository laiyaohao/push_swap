#include "push_swap.h"

void  pb(t_stack *stack_b, t_stack *stack_a)
{
  if (is_empty(stack_a))
    return;
  push(stack_b, pop(stack_a));
}