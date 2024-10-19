#include "push_swap.h"

void	free_argv(char **argv, int commas)
{
	int	i;

	i = 0;
	if (commas)
	{
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
}
