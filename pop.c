#include "push_swap.h"

long  pop(t_stack *stack)
{
  int value;
  t_list  *node;

  if (is_empty(stack))
    return (-2147483649);
  node = stack->top;
  value = node->content;
  stack->top = node->next;
  ft_lstdelone(node, free);
  return (value);
}