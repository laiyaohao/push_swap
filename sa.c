#include "push_swap.h"

void  sa(t_stack *stack_a)
{
  int og_top_con;
  int new_top_con;

  if (is_empty(stack_a) || stack_a->top->next == NULL)
    return ;
  og_top_con = *(int *)stack_a->top->content;
  pop(stack_a);
  new_top_con = *(int *)stack_a->top->content;
  pop(stack_a);
  push(stack_a, &og_top_con);
  push(stack_a, &new_top_con);
}
