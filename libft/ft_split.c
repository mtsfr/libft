/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:57:40 by mfaria-b          #+#    #+#             */
/*   Updated: 2023/10/31 18:11:16 by mfaria-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	words;

	if (!s)
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

static void	count_alloc(char const *s, char c, char **mtz)
{
	size_t	letters;
	size_t	i;

	i = 0;
	if (s)
	{
		letters = 0;
		while (*s)
		{
			while (*s == c)
				s++;
			while (*s != c && *s)
			{
				s++;
				letters++;
			}
			mtz[i++] = ft_substr((s - letters), 0, letters);
			letters = 0;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**mtz;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_word(s, c);
	mtz = (char **)malloc(sizeof(char *) * words + 1);
	if (!mtz)
		return (NULL);
	count_alloc(s, c, mtz);
	mtz[words] = NULL;
	return (mtz);
}
