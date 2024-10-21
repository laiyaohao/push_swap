/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:18:17 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 18:09:45 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack_a, int print)
{
	long	*top_con;

	if (is_empty(stack_a) || stack_a->top->next == NULL)
		return ;
	top_con = (long *)malloc(sizeof(long));
	if (top_con == NULL)
		return ;
	*top_con = *(long *)stack_a->top->content;
	pop(stack_a);
	add_back(stack_a, top_con);
	if (print)
		ft_printf("ra\n");
}
