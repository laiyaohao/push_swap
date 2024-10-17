#include "push_swap.h"

void  pb(t_stack *stack_b, t_stack *stack_a)
{
  long  *a_top;

  if (is_empty(stack_a))
    return;
  a_top = (long *)malloc(sizeof(long));
  if (a_top == NULL)
    return ;
  *a_top = *(long *)stack_a->top->content;
  pop(stack_a);
  push(stack_b, a_top);
	// ft_printf("pb\n");
}