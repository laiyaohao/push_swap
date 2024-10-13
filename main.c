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
	if (argc < 2 || (argc == 2 && argv[1][0] == '\0'))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		commas = 1;
	}
	init_stack(&stack_a);
	init_stack(&stack_b);
	push_nums(&stack_a, argv, commas, &error);
	if (!error)
	{
		// ft_printf("no error\n");
		print_stack(&stack_a);
	}
	// pop(&stack_a);
	// ft_printf("stack_a size: %d\n", stack_a.size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	if (commas)
		free_argv(argv);
	if (error)
		ft_printf("Error\n");
	return (0);
}

// int main(void)
// {
// 	t_stack stack_a;
// 	t_stack	stack_b;
// 	init_stack(&stack_a);
// 	init_stack(&stack_b);

// 	int aa = 3;
// 	int ba = 2;
// 	int cb = 1;
// 	int db = 5;
// 	aa = 6;

// 	push(&stack_a, &aa);
// 	push(&stack_a, &ba);
// 	push(&stack_b, &cb);
// 	push(&stack_b, &db);

// 	// printf("before adding ele frm b, Top of Stack A: %d\n", *(int *)peek(&stack_a));
// 	// printf("before pop top ele in b to a, top of b: %d\n", *(int *)peek(&stack_b));
// 	// pop(&stack_a);
// 	// printf("after pop, Top of Stack A: %d\n", *(int *)peek(&stack_a));
// 	// push(&stack_a, &d);
// 	// printf("after pushing, Top of Stack A: %d\n", *(int *)peek(&stack_a));
// 	// pa(&stack_a, &stack_b);
// 	// printf("\n\n");
// 	// rra(&stack_a);
// 	// printf("after pa, top of the stack a: %d\n", *(int *)peek(&stack_a));
// 	// pop(&stack_a);
// 	// printf("after pa, Top of Stack b: %d\n", *(int *)peek(&stack_b));
// 	print_stack(&stack_a);

// 	free_stack(&stack_a);
// 	free_stack(&stack_b);
// }

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