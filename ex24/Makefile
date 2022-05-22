SRCS		=	./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
                ./srcs/ft_strlen.c ./srcs/ft_swap.c

H_SOURCS	=	./includes/ft.h

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc
CFLAGS		= 	-Wall -Wextra -Werror

RM			=	rm -f

NAME 		=	libft.a

.c.o: 
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS) $(H_SOURCS)
	ar -rcs $@ $^

all: $(NAME);

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONEY: all clean fclean re