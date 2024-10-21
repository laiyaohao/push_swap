/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:07:35 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 18:09:24 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	t_list	*node;

	node = stack->top;
	while (node != NULL)
	{
		ft_printf("node's content: %d\n", *(long *)node->content);
		node = node->next;
	}
}
