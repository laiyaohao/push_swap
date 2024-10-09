#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	t_stack	stack_a;
	int			i;
	long		num;

	if (argc < 2)
		return (1);
	initialise_stack(&stack_a);
	i = 1;
	while (i < argc)
	{
		num = ft_atol(argv[i]);
		if (is_int(argv[i]) == 0 || num < -2147483648 || num > 2147483647)
		{
			free_stack(&stack_a);
			ft_printf("Error\n");
			return (0);
		}
		push(&stack_a, num);
		i++;
	}
	return (0);
}

// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return 0;
// 	long test0 = ft_atol(argv[1]);
// 	long test1 = atol(argv[1]);
// 	printf("test0: %ld\n", test0);
// 	printf("test1: %ld\n", test1);
// 	return 0;
// }