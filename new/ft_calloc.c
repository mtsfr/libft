#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{	
	size_t	i;
	unsigned char	*ptr;
	
	i = 0;
	ptr = (unsigned char *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

int main() {
    // Teste 1: Aloca e inicializa um array de inteiros com 5 elementos.
    int *intArray = (int *)ft_calloc(5, sizeof(int));
    if (intArray) {
        printf("intArray: ");
        for (size_t i = 0; i < 5; i++) {
            printf("%d ", intArray[i]);
        }
        printf("\n");
        free(intArray);
    }

    // Teste 2: Aloca e inicializa um array de caracteres com 10 elementos.
    char *charArray = (char *)ft_calloc(10, sizeof(char));
    if (charArray) {
        printf("charArray: ");
        for (size_t i = 0; i < 10; i++) {
            printf("%d ", charArray[i]);
        }
        printf("\n");
        free(charArray);
    }

    return 0;
}
