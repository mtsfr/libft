/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:57:40 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/10/30 21:33:02 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	words;

	if (!*s)
		return (0);
	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}


char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	words = count_word(s, c);
	arr = (char **)malloc(sizeof(char *) * words + 1);
	if (!arr)
		return (NULL);
	


	return (mtz);
}

#include <stdio.h>

int	main(void)
{
	printf("%ld", count_word("Eu gosto de suc", ' '));
	return 0;
}
