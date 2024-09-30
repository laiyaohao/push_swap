NAME := push_swap
CC := cc
CFLAGS := -Wall -Werror -Wextra
SRC_FILE_NAMES := main
SRCS := ${addsuffix .c, SRC_FILE_NAMES}
OBJS := ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs $@ $^

%.o: %.c
	${CC} ${CFLAGS} $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re