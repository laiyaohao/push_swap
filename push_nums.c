/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:07:37 by ylai              #+#    #+#             */
/*   Updated: 2024/10/22 22:20:20 by ylai             ###   ########.fr       */
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

int	not_valid_num(char ***av, long *num, int i, int j)
{
	if (is_int(av[i][j]) == 0 || *num < -2147483648 || *num > 2147483647)
		return (1);
	else
		return (0);
}

void	push_nums(t_stack *stack_a, char ***av, int *err)
{
	int		i;
	long	*num;
	int		j;

	i = 0;
	while (av != NULL && av[i])
	{
		j = 0;
		while (av[i][j] != NULL)
		{
			num = (long *) malloc(sizeof(long));
			if (num == NULL)
				return ;
			*num = ft_atol(av[i][j]);
			if (not_valid_num(av, num, i, j) || not_unique(num, stack_a))
			{
				free(num);
				*err = 1;
				return ;
			}
			add_back(stack_a, num);
			j++;
		}
		i++;
	}
}
