/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:04:17 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:05:08 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *stack_b, int print)
{
	long	*og_top_con;
	long	*new_top_con;

	if (is_empty(stack_b) || stack_b->top->next == NULL)
		return ;
	og_top_con = (long *) malloc(sizeof(long));
	new_top_con = (long *) malloc(sizeof(long));
	if (og_top_con == NULL || new_top_con == NULL)
		return ;
	*og_top_con = *(long *)stack_b->top->content;
	pop(stack_b);
	*new_top_con = *(long *)stack_b->top->content;
	pop(stack_b);
	push(stack_b, og_top_con);
	push(stack_b, new_top_con);
	if (print)
		ft_printf("sb\n");
}
