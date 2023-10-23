/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:22:58 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/10/23 18:42:24 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		chr;
	size_t				i;

	str = s;
	chr = c;
	i = 0;
	while (i < n)
	{
		if (chr == str[i])
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
