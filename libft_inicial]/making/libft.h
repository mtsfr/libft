#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
char	*ft_strcat(char *dest, const char *src);
void	ft_strclr(char *s);
int	ft_strlen(char const *str);
char	*ft_strncat(char *dest, const char *src, size_t n);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(char const *s1, char const *s2, size_t n);

#endif
