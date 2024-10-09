#include "push_swap.h"

void  sa(t_stack *stack_a)
{
  t_list  *og_top;
  t_list  *new_top;
  t_list  *next;

  if (is_empty(stack_a) || stack_a->top->next == NULL)
    return ;
  og_top = stack_a->top;
  pop(stack_a);
  new_top = stack_a->top;
  next = new_top->next;
  og_top->next = next;
  new_top->next = og_top;
}