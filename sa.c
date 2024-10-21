/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:04:30 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:04:31 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a, int print)
{
	long	*og_top_con;
	long	*new_top_con;

	if (is_empty(stack_a) || stack_a->top->next == NULL)
		return ;
	og_top_con = (long *) malloc(sizeof(long));
	new_top_con = (long *) malloc(sizeof(long));
	if (og_top_con == NULL || new_top_con == NULL)
		return ;
	*og_top_con = *(long *)stack_a->top->content;
	pop(stack_a);
	*new_top_con = *(long *)stack_a->top->content;
	pop(stack_a);
	push(stack_a, og_top_con);
	push(stack_a, new_top_con);
	if (print)
		ft_printf("sa\n");
}
