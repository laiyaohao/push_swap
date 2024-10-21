/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:07:25 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:18:54 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *stack_b, t_stack *stack_a)
{
	long	*a_top;

	if (is_empty(stack_a))
		return ;
	a_top = (long *)malloc(sizeof(long));
	if (a_top == NULL)
		return ;
	*a_top = *(long *)stack_a->top->content;
	pop(stack_a);
	push(stack_b, a_top);
	ft_printf("pb\n");
}
