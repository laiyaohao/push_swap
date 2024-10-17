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

void	radix_inner_sort(int max_bits, t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	t_list *node;

	i = 0;
	node = stack_a->top;
	while (i < max_bits)
	{
		
		while (node != NULL)
		{
			long num = *(long *)node->content;
			node = node->next;
			// Check the i-th bit of the number
			if (((num >> i) & 1) == 0) {
				pb(stack_b, stack_a); // Push to stackB if the i-th bit is 0
			} else {
				ra(stack_a, 1);  // Rotate if the i-th bit is 1
			}
		}
		ft_printf("stack a: ");
		print_stack(stack_a);
		ft_printf("stack b: ");
		print_stack(stack_b);

		// Push all elements back from stackB to stackA
		while (!is_empty(stack_b)) {
			pa(stack_a, stack_b);
		}
		i++;
		ft_printf("\n\n");
		ft_printf("stack a: ");
		print_stack(stack_a);
		ft_printf("stack b: ");
		print_stack(stack_b);
		if (node == NULL)
			ft_printf("stack_a->top: %d\n",*(long *)stack_a->top->content);
		// node = stack_a->top;
	}
}

void radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	long max_num = find_largest(stack_a);
	ft_printf("max_num: %d\n", max_num);
	int max_bits = find_max_bit(max_num);
	ft_printf("max_bits: %d\n", max_bits);
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
	radix_inner_sort(max_bits, stack_a, stack_b);
}
