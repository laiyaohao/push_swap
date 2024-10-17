/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:57:42 by ylai              #+#    #+#             */
/*   Updated: 2024/10/17 23:43:21 by ylai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	find_largest(t_stack *stack_a)
{
	t_list	*node;
	long	largest;

	largest = *(long *)stack_a->top->content;
	node = stack_a->top;
	while (node != NULL)
	{
		if (*(long *)node->content > largest)
			largest = *(long *)node->content;
		node = node->next;
	}
	return (largest);
}

int	find_max_bit(long max_num)
{
	int	max_bits;

	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_inner_sort(int max_bits, t_stack *stack_a, t_stack *stack_b, int size)
{
	int	i;
	t_list *node;
	int	j;
	long num;

	i = 0;
	while (i < max_bits)
	{
		j = 0;
		node = stack_a->top;
		while (j < size)
		{
			num = *(long *)node->content;
			node = node->next;
			if (((num >> i) & 1) == 0)
				pb(stack_b, stack_a);
			else
				ra(stack_a, 1);
			j++;
		}
		// ft_printf("stack_a:\n");
		// print_stack(stack_a);
		// ft_printf("\nstack_b:\n");
		// print_stack(stack_b);
		// ft_printf("\n");
		// Push all elements back from stackB to stackA
		while (!is_empty(stack_b))
		{
			pa(stack_a, stack_b);
		}
		// ft_printf("stack_a:\n");
		// print_stack(stack_a);
		// ft_printf("\n");
		i++;
	}
}

void radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	radix_helper(stack_a);
	long max_num = find_largest(stack_a);
	int max_bits = find_max_bit(max_num);
	// push_neg(stack_a, stack_b);
	int size = stack_a->size;
	// for (int i = 0; i < max_bits; i++) {
	// 	for (int j = 0; j < size; j++) {
	// 		int num = stack_a->items[stack_a->top];

	// 		// Check the i-th bit of the number
	// 		if (((num >> i) & 1) == 0) {
	// 			pb(stackB, stack_a); // Push to stackB if the i-th bit is 0
	// 		} else {
	// 			ra(stack_a);  // Rotate if the i-th bit is 1
	// 		}
	// 	}

	// 	// Push all elements back from stackB to stackA
	// 	while (!is_empty(stackB)) {
	// 		pa(stack_a, stackB);
	// 	}
	// }
	radix_inner_sort(max_bits, stack_a, stack_b, size);
}
