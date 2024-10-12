#include "push_swap.h"

void	*peek(t_stack *stack)
{
	if (is_empty(stack))
		return (NULL);
	return (stack->top->content);
}