#include "push_swap.h"

void  pop(t_stack *stack)
{
  t_list  *node;

  if (is_empty(stack))
    return ;
  node = stack->top;
  stack->top = node->next;
  ft_lstdelone(node, free);
  stack->size--;
}
