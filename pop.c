/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:07:32 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:07:33 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pop(t_stack *stack)
{
	t_list	*node;

	if (is_empty(stack))
		return ;
	node = stack->top;
	stack->top = node->next;
	ft_lstdelone(node, free);
	stack->size--;
}
