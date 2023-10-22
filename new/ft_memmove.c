#include <unistd.h>
#include <stdio.h>
#include <string.h>

//Verificar prototipo

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d;
	unsigned char *s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n > 0)
		{	
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
