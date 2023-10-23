NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
FILES = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_memcmp.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memchr.c \
	ft_calloc.c \
	ft_memmove.c \
	ft_strdup.c \
	ft_strnstr.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strlcat.c

OBJS = $(FILES:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
