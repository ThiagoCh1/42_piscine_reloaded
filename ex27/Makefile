NAME     = ft_display_file
SRC      = ft_display_file.c
OBJ      = $(SRC:.c=.o)
CC       = cc
CFLAGS   = -Wall -Wextra -Werror
RM       = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean
