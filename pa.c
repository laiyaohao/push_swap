#include "push_swap.h"

void  pa(t_stack *stack_a, t_stack *stack_b)
{
  if (is_empty(stack_b))
    return;
  push(stack_a, pop(stack_b));
}
