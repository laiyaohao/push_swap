#include "push_swap.h"

long	peek(t_stack *stack)
{
	if (is_empty(stack))
		return (2147483648);
	return (stack->top->content);
}