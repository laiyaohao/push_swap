#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>
// int main(int argc, char **argv)
// {
// 	t_stack	stack_a;
// 	int			i;
// 	long		num;

// 	if (argc < 2)
// 		return (1);
// 	init_stack(&stack_a);
// 	i = 1;
// 	while (i < argc)
// 	{
// 		num = ft_atol(argv[i]);
// 		if (is_int(argv[i]) == 0 || num < -2147483648 || num > 2147483647)
// 		{
// 			free_stack(&stack_a);
// 			ft_printf("Error\n");
// 			return (0);
// 		}
// 		push(&stack_a, num);
// 		i++;
// 	}
// 	int ans = peek(&stack_a);
// 	return (0);
// }

int main(void)
{
	t_stack stack_a;
	init_stack(&stack_a);

	int a = 3;
	int b = 2;
	int c = 1;
	// int d = 5;

	push(&stack_a, &a);
	push(&stack_a, &b);
	push(&stack_a, &c);

	printf("Before pop, Top of Stack A: %d\n", *(int *)peek(&stack_a));
	// pop(&stack_a);
	// printf("after pop, Top of Stack A: %p\n", peek(&stack_a));
	// push(&stack_a, &d);
	// printf("after pushing, Top of Stack A: %d\n", *(int *)peek(&stack_a));

	printf("\n\n");
	rra(&stack_a);
	printf("after rra, top of the stack: %d\n", *(int *)peek(&stack_a));
	pop(&stack_a);
	printf("after pop, Top of Stack A: %d\n", *(int *)peek(&stack_a));

	free_stack(&stack_a);
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