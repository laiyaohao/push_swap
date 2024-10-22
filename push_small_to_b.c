/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_small_to_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:07:40 by ylai              #+#    #+#             */
/*   Updated: 2024/10/22 22:10:30 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_small_to_b(t_stack *stack_a, t_stack *stack_b)
{
	int		small_i;

	small_i = find_smallest(stack_a);
	if (small_i > (stack_a->size / 2))
	{
		while (small_i < stack_a->size)
		{
			rra(stack_a, 1);
			small_i++;
		}
	}
	else
	{
		while (small_i != 0)
		{
			ra(stack_a, 1);
			small_i--;
		}
	}
	pb(stack_b, stack_a);
}
