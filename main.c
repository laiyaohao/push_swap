#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int	commas;
	int	error;

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
	init_stack(&stack_a);
	init_stack(&stack_b);
	push_nums(&stack_a, argv, commas, &error);
	if (!error)
		sort_stack(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	if (commas)
		free_argv(argv);
	if (error)
		ft_printf("Error\n");
	return (0);
}
