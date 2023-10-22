//The strrchr() function returns a pointer to the last occurrence of the character c in the string s.

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{	
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int main() {
    const char *str = "Hello, World!";
    int target = 'o';  // Caractere que estamos procurando

    char *result = ft_strrchr(str, target);

    if (result) {
        printf("Última ocorrência de '%c' encontrada em posição: %ld\n", target, result - str);
    } else {
        printf("Caractere '%c' não encontrado na string.\n", target);
    }

    return 0;
}

