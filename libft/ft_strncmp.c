#include "libft.h"
//#include <stddef.h>

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && n > 0 && (s1[i] && s2[i]))
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{	
	char	strone[] = "teste";
	char	strtwo[] = "tes";
	int	testft = ft_strncmp(strone, strtwo, 3);
	int	test = strncmp(strone, strtwo, 3);

	printf("ft_strncmp: %d\n", testft);
	printf("strncmp: %d\n", test);
	return (0);
}*/
