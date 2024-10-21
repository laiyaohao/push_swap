/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:02:29 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:03:52 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack_a)
{
	int	top;
	int	mid;
	int	bottom;

	top = *(long *)stack_a->top->content;
	mid = *(long *)stack_a->top->next->content;
	bottom = *(long *)stack_a->top->next->next->content;
	if (top > mid && mid > bottom)
	{
		sa(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (top > mid && top > bottom && mid < bottom)
		ra(stack_a, 1);
	else if (top > mid && mid < bottom && top < bottom)
		sa(stack_a, 1);
	else if (top < mid && mid > bottom && top > bottom)
		rra(stack_a, 1);
	else if (top < mid && mid > bottom && top < bottom)
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
	}
}
