#include "push_swap.h"

void  sb(t_stack *stack_b)
{
  int og_top_con;
  int new_top_con;

  if (is_empty(stack_b) || stack_b->top->next == NULL)
    return ;
  og_top_con = *(int *)stack_b->top->content;
  pop(stack_b);
  new_top_con = *(int *)stack_b->top->content;
  pop(stack_b);
  push(stack_b, &og_top_con);
  push(stack_b, &new_top_con);
}