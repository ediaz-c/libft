NAME	=	libft.a
RM		=	rm -f
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
SRCS	=	ft_isalpha.c ft_isdigit.c ft_memset.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c
OBJS	=	$(SRCS:.c=.o)
INCLUDE	=	libft.h
LIB		=	ar -rcs
all:	$(NAME)

$(NAME):	$(OBJS)
	$(LIB) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

.PHONY: clean fclean
