#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <errno.h>
# include <string.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_stack
{
	t_list	*top;
	int			size;
}					t_stack;

long	ft_atol(const char *nptr);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
t_list	*ft_lstlast(t_list *lst);
int		ft_printf(const char *str, ...);
void	init_stack(t_stack *stack);
void	push_nums(t_stack *stack_a, char **argv, int commas, int *err);
int is_int(char *str);
void  print_stack(t_stack *stack);
void  free_stack(t_stack *stack);
void	free_argv(char **argv);
void	push(t_stack *stack, void *num);
int		is_empty(t_stack *stack);
void	*pop(t_stack *stack);
void	*peek(t_stack *stack);
void  pa(t_stack *stack_a, t_stack *stack_b);
void  pb(t_stack *stack_b, t_stack *stack_a);
void  ra(t_stack *stack_a);
void  rb(t_stack *stack_b);
void  rr(t_stack *stack_a, t_stack *stack_b);
void  rra(t_stack *stack_a);
void  rrb(t_stack *stack_b);
void  rrr(t_stack *stack_a, t_stack *stack_b);
void  sa(t_stack *stack_a);
void  sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void  del_con(void *content);

#endif
