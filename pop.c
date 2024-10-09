#include "push_swap.h"

int  pop(t_stack *stack)
{
  int value;
  t_list  *node;

  if (is_empty(stack))
    return ;
  node = stack->top;
  value = node->content;
  stack->top = node->next;
  ft_lstdelone(node, free);
  return (value);
}