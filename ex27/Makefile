SRCS		=	main.c
H_SOURCS	= 	ft_display_file.h

CC			= 	gcc
RM			=	rm -f

CFLAGS		= 	-Wall -Wextra -Werror

NAME 		=	ft_display_file

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

.PHONEY: clean fclean all