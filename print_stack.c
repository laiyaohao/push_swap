#include "push_swap.h"

/**
 * for testing purposes
 */

void  print_stack(t_stack *stack)
{
  t_list  *node;

  node = stack->top;
  // ft_printf("top's content: %d\n", *(char *)node->content);
  while (node != NULL)
  {
    // ft_printf("node's address %p\n", node);
    ft_printf("node's content: %d\n", *(long *)node->content);
    node = node->next;
    // ft_printf("\nnode's address %p\n", node);

  }
}
