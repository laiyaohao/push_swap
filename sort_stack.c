/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:04:04 by ylai              #+#    #+#             */
/*   Updated: 2024/10/22 22:21:03 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	not_ascending(t_stack *stack_a)
{
	t_list	*node;

	node = stack_a->top;
	while (node->next != NULL)
	{
		if (*(long *)node->content > *(long *)node->next->content)
			return (1);
		node = node->next;
	}
	return (0);
}

void	sort_stack(t_stack *stack_a, t_stack *stack_b, int error)
{
	if (!error && not_ascending(stack_a))
	{
		if (stack_a->size == 2)
			sort_two(stack_a);
		else if (stack_a->size == 3)
			sort_three(stack_a);
		else if (stack_a->size == 4)
			sort_four(stack_a, stack_b);
		else if (stack_a->size == 5)
			sort_five(stack_a, stack_b);
		else
			radix_sort(stack_a, stack_b);
	}
}
