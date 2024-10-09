#include "push_swap.h"

void  sb(t_stack *stack_b)
{
  t_list  *og_top;
  t_list  *new_top;
  t_list  *next;

  if (is_empty(stack_b) || stack_b->top->next == NULL)
    return ;
  og_top = stack_b->top;
  pop(stack_b);
  new_top = stack_b->top;
  next = new_top->next;
  og_top->next = next;
  new_top->next = og_top;
}