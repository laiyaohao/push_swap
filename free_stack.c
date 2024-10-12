#include "push_swap.h"

void  free_stack(t_stack *stack)
{
  t_list  *lst;

  lst = stack->top;
  ft_lstclear(&lst, del_con);
}
