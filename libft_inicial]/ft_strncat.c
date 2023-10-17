//#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;	
	}
	dest[i] = '\0';
	return (dest);	
}

/*int	main(void)
{	
	char	dest[10] = "abcd";
	char	src[10] = "test";
	
	ft_strncat(dest, src, 3);

	printf("%s", dest);
	return (0);
}*/
