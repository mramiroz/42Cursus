CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar -rcs
RM = rm -rf

SRC =	ft_printf.c

OBJS = $(SRC:.c=.o)

.PHONY:

all: $(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)

%.o:%.c
			$(CC) $(CFLAGS) -c $^ -o $@

bonus:		$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			

re:     	fclean all

fclean:     clean
			@$(RM) $(NAME)

clean:		bclean
			@$(RM) $(OBJS)
