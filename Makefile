# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylai <ylai@student.42singapore.sg>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 18:22:08 by ylai              #+#    #+#              #
#    Updated: 2024/10/24 19:37:43 by ylai             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := cc
CFLAGS := -Wall -Werror -Wextra -g
LIBFT_DIR := libft
LIBFT := ${LIBFT_DIR}/libft.a
FT_PRINTF_DIR := ft_printf
FT_PRINTF := ${FT_PRINTF_DIR}/libftprintf.a
SRC_FILE_NAMES := main free_stack init_stack is_empty is_int pa pb peek \
									pop add_back push ra rb rr rra rrb rrr sa sb ss \
									push_nums free_argv print_stack sort_stack sort_two \
									sort_three sort_four find_smallest push_small_to_b \
									sort_five radix_sort radix_helper
SRCS := ${addsuffix .c, ${SRC_FILE_NAMES}}
OBJS := ${SRCS:.c=.o}

all: ${LIBFT} ${FT_PRINTF} ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} ${FT_PRINTF} ${LIBFT} -o $@

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${LIBFT}:
	@make -C ${LIBFT_DIR} all
	@make -C ${LIBFT_DIR} bonus

${FT_PRINTF}:
	@make -C ${FT_PRINTF_DIR} all

clean:
	@make -C ${LIBFT_DIR} clean
	@make -C ${FT_PRINTF_DIR} clean
	rm -f ${OBJS}

fclean: clean
	@make -C ${LIBFT_DIR} fclean
	@make -C ${FT_PRINTF_DIR} fclean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re