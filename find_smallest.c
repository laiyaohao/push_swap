/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:07:05 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:07:06 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_smallest(t_stack *stack_a)
{
	t_list	*node;
	long	smallest;
	int		i;
	int		index;

	smallest = *(long *)stack_a->top->content;
	node = stack_a->top;
	i = 0;
	while (node != NULL)
	{
		if (*(long *)node->content < smallest)
		{
			smallest = *(long *)node->content;
			index = i;
		}
		node = node->next;
		i++;
	}
	return (index);
}
