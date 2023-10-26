/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:34:24 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/10/25 21:34:14 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbrlen(int nbr)
{	
	size_t	len;

	len = 0;
	if (nbr == 0)
		len++;
	else if (nbr == (-2147483648))
	{
		len = 11;
	}
	else
	{
		if (nbr < 0)
		{
			nbr *= -1;
			len++;
		}
		while (nbr > 0)
		{
			len++;
			nbr /= 10;
		}
	}
	return (len);
}

char	*ft_itoa(int n)
{	
	char		*str;
	size_t		len;
	long int	num;

	len = nbrlen(n);
	num = n;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (str);
}
