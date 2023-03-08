NAME	=	libft.a
RM		=	rm -f
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
SRCS	=	ft_isalpha.c ft_isdigit.c ft_memset.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c ft_strrchr.c
OBJS	=	$(SRCS:.c=.o)
INCLUDE	=	libft.h
LIB		=	ar -rcs

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(LIB) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)
re:	fclean all
.PHONY: clean fclean re
