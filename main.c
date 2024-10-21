/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:16:19 by ylai              #+#    #+#             */
/*   Updated: 2024/10/21 17:24:57 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	print_error(int error)
{
	if (error)
	{
		ft_printf("Error\n");
	}
}

void	free_stack_argv(t_stack *a, t_stack *b, char **av, int co)
{
	free_stack(a, b);
	free_argv(av, co);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		commas;
	int		error;

	commas = 0;
	error = 0;
	if (argc < 2)
		return (0);
	else if (argc == 2)
	{
		if (argv[1][0] != '\0')
		{
			argv = ft_split(argv[1], ' ');
			commas = 1;
		}
		else
			error = 1;
	}
	init_stack(&stack_a, &stack_b);
	push_nums(&stack_a, argv, commas, &error);
	sort_stack(&stack_a, &stack_b, error);
	free_stack_argv(&stack_a, &stack_b, argv, commas);
	print_error(error);
	return (0);
}
