#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{	
	char	strone[] = "teste123";
	char	strtwo[] = "teste123";
	int	testft = ft_strcmp(strone, strtwo);
	int	test = strcmp(strone, strtwo);

	printf("ft_strcmp: %d\n", testft);
	printf("strcmp: %d\n", test);
	return (0);
}*/
