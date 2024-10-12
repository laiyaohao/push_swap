NAME := push_swap
CC := cc
CFLAGS := -Wall -Werror -Wextra
LIBFT_DIR := libft
LIBFT := ${LIBFT_DIR}/libft.a
FT_PRINTF_DIR := ft_printf
FT_PRINTF := ${FT_PRINTF_DIR}/libftprintf.a
SRC_FILE_NAMES := main free_stack init_stack is_empty is_int pa pb peek \
									pop push ra rb rr rra rrb rrr sa sb ss del_con
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