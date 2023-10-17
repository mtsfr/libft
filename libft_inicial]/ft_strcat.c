//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
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
	
	ft_strcat(dest, src);

	printf("%s", dest);
	return (0);
}*/
