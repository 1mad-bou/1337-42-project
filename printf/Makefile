CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = \
	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_hex.c ft_strlen.c ft_Uprint.c ft_lowerhex.c ft_upperhex.c

OBJS = ${SRC:%.c=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
