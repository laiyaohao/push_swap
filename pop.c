#include "push_swap.h"

void  *pop(t_stack *stack)
{
  void    *value;
  t_list  *node;

  if (is_empty(stack))
    return (NULL);
  node = stack->top;
  value = node->content;
  stack->top = node->next;
  ft_lstdelone(node, del_con);
  stack->size--;
  return (value);
}
