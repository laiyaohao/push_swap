/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:02:16 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:02:17 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *stack_a)
{
	int	top;
	int	bottom;

	top = *(long *)stack_a->top->content;
	bottom = *(long *)stack_a->top->next->content;
	if (top > bottom)
		sa(stack_a, 1);
}
