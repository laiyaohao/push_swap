/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:06:25 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:24:05 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack *stack_b, int print)
{
	long	*top_con;

	if (is_empty(stack_b) || stack_b->top->next == NULL)
		return ;
	top_con = (long *)malloc(sizeof(long));
	if (top_con == NULL)
		return ;
	*top_con = *(long *)stack_b->top->content;
	pop(stack_b);
	add_back(stack_b, top_con);
	if (print)
		ft_printf("rb\n");
}
