#include "push_swap.h"

void  sb(t_stack *stack_b, int print)
{
  long  *og_top_con;
  long  *new_top_con;

  if (is_empty(stack_b) || stack_b->top->next == NULL)
    return ;
  og_top_con = (long *) malloc(sizeof(long));
  new_top_con = (long *) malloc(sizeof(long));
  if (og_top_con == NULL || new_top_con == NULL)
    return ;
  *og_top_con = *(long *)stack_b->top->content;
  pop(stack_b);
  *new_top_con = *(long *)stack_b->top->content;
  pop(stack_b);
  push(stack_b, og_top_con);
  push(stack_b, new_top_con);
  if (print)
    ft_printf("sb\n");
}