#include "push_swap.h"

void	print_arr(long *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_printf("i: %d\n", arr[i]);
		i++;
	}
}

void swap(long* xp, long* yp)
{
	long temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void	sort_arr(long *arr, int size)
{
	int i;
	int j;
	int swapped;

	i = 0;
	while (i < size - 1)
	{
		swapped = 0;
		j = 0; 
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
			j++;
		}

		// If no two elements were swapped by inner loop,
		// then break
		if (swapped == 0)
			break;
		i++;
	}
}

void	change(long *arr, t_stack *stack)
{
	int	i;
	int	s;
	long	*num;
	t_list	*node;

	i = 0;
	s = stack->size;
	node = stack->top;
	while (i < s)
	{
		num = (long *) malloc(sizeof(long));
		*num = 0;
		while (*num < s)
		{
			if (arr[*num] == *(long *)node->content)
				break;
			(*num)++;
		}
		free(node->content);
		node->content = num;
		// node->content = &j;
		// ft_printf("j: %d\n", j);
		node = node->next;
		i++;
	}
}


void	radix_helper(t_stack *stack)
{
	long	*arr;
	int	i;
	t_list	*node;

	arr = (long *)malloc(stack->size * sizeof(long));
	i = 0;
	node = stack->top;
	while (i < stack->size)
	{
		arr[i] = *(long *)node->content;
		i++;
		node = node->next;
	}
	sort_arr(arr, stack->size);
	// print_arr(arr, stack->size);
	change(arr, stack);
	free(arr);
}
