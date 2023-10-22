
//The strchr() function returns a pointer to the first occurrence of the character c in the string s.
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	while (s[i])
	{	
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char *ft_strchr(const char *s, int c);

int main() {
    const char *str = "Hello, World!";
    int target = '\0';  // Caractere que estamos procurando

    char *result = ft_strchr(str, target);

    if (result) {
        printf("Caractere '%c' encontrado em posição: %ld\n", target, result - str);
    } else {
        printf("Caractere '%c' não encontrado na string.\n", target);
    }

    return 0;
}

