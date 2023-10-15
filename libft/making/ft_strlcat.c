#include <unistd.h>
#include <stdio.h>
#include "libft.h"

//INCOMPLETA**********************

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i; 	
	size_t	j;
	
	i = ft_strlen(dest);
	j = 0;
	
	while (src[j] != '\0' && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;	
	}
	dest[i] = '\0';
	return (size);	// corrigir ?
}

int	main(void)
{	
	char	dest[10] = "abcd";
	char	src[10] = "test";
	
	ft_strncat(dest, src, 3);

	printf("%s", dest);
	return (0);
}
