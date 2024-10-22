/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:16:19 by ylai              #+#    #+#             */
/*   Updated: 2024/10/22 22:20:50 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(int error)
{
	if (error)
	{
		ft_printf("Error\n");
	}
}

void	free_stack_argv(t_stack *a, t_stack *b, char ***av)
{
	free_stack(a, b);
	free_argv(av);
}

char	***alloc_av(char **argv, int argc)
{
	int		i;
	char	***av;

	i = 1;
	av = (char ***)malloc(sizeof(char **) * (argc));
	if (av == NULL)
		return (NULL);
	av[argc - 1] = NULL;
	while (i < argc)
	{
		av[i - 1] = ft_split(argv[i], ' ');
		i++;
	}
	return (av);
}

void	print_av(char ***av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			ft_printf("s: %s\n", av[i][j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		commas;
	int		error;
	char	***av;

	commas = 0;
	error = 0;
	if (argc < 2)
		return (0);
	if (argc == 2 && argv[1][0] == '\0')
	{
		print_error(1);
		return (0);
	}
	av = alloc_av(argv, argc);
	init_stack(&stack_a, &stack_b);
	push_nums(&stack_a, av, &error);
	sort_stack(&stack_a, &stack_b, error);
	free_stack_argv(&stack_a, &stack_b, av);
	print_error(error);
	return (0);
}
