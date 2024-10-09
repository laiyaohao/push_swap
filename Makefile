NAME := push_swap
CC := cc
CFLAGS := -Wall -Werror -Wextra
LIBFT_DIR := libft
LIBFT := ${LIBFT_DIR}/libft.a
SRC_FILE_NAMES := main
SRCS := ${addsuffix .c, SRC_FILE_NAMES}
OBJS := ${SRCS:.c=.o}

all: ${LIBFT} ${NAME}

${NAME}: ${OBJS}
	ar -rcs $@ $^

%.o: %.c
	${CC} ${CFLAGS} $< -o $@

${LIBFT}:
	@make bonus -C ${LIBFT_DIR}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re