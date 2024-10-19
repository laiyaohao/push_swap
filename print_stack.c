#include "push_swap.h"

/**
 * for testing purposes
 */
void  print_stack(t_stack *stack)
{
  t_list  *node;

  node = stack->top;
  while (node != NULL)
  {
    ft_printf("node's content: %d\n", *(long *)node->content);
    node = node->next;
  }
}
