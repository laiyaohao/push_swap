/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:07:37 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 18:09:31 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	not_unique(long *num, t_stack *stack)
{
	t_list	*node;

	node = stack->top;
	while (node != NULL)
	{
		if (*(long *)node->content == *num)
			return (1);
		node = node->next;
	}
	return (0);
}

void	push_nums(t_stack *stack_a, char **argv, int commas, int *err)
{
	int		i;
	long	*num;

	i = 1;
	if (commas)
		i = 0;
	while (argv != NULL && argv[i])
	{
		num = (long *) malloc(sizeof(long));
		if (num == NULL)
			return ;
		*num = ft_atol(argv[i]);
		if (is_int(argv[i]) == 0 || *num < -2147483648 || *num > 2147483647
			|| not_unique(num, stack_a))
		{
			free(num);
			*err = 1;
			return ;
		}
		add_back(stack_a, num);
		i++;
	}
}
