/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:07:10 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:07:11 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*lst_a;
	t_list	*lst_b;

	lst_a = stack_a->top;
	lst_b = stack_b->top;
	ft_lstclear(&lst_a, free);
	ft_lstclear(&lst_b, free);
}
