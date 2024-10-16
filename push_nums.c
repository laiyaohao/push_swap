#include "push_swap.h"

/**
 * commas indicate whether arguments come in inverted commas
 * i.e. ./push_swap "10 2 -39"
 * 1 indicate yes
 * 0 indicate no, i.e ./push_swap 10 2 -39
 * if yes, need to free argv, because it is defined
 * using ft_split
 */
void	push_nums(t_stack *stack_a, char **argv, int commas, int *err)
{
	int	i;
	long	*num;

	i = 1;
	if (commas)
		i = 0;
	while (argv[i])
	{
		// ft_printf("this is argv[%d]: %s\n", i, argv[i]);
		num = (long *) malloc(sizeof(long));
		if (num == NULL)
			return ;
		*num = ft_atol(argv[i]);
		ft_printf("this is num: %d\n", *num);
		if (is_int(argv[i]) == 0 || *num < -2147483648 || *num > 2147483647)
		{
			free(num);
			*err = 1;
			return ;
		}
		add_back(stack_a, num);
		// ft_printf("i: %d\n", i);
		i++;
	}
}
