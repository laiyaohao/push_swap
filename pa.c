/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:07:22 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:16:39 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	long	*b_top;

	if (is_empty(stack_b))
		return ;
	b_top = (long *)malloc(sizeof(long));
	if (b_top == NULL)
		return ;
	*b_top = *(long *)stack_b->top->content;
	pop(stack_b);
	push(stack_a, b_top);
	ft_printf("pa\n");
}
