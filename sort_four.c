/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:09:41 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:09:42 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_stack *stack_a, t_stack *stack_b)
{
	push_small_to_b(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}
