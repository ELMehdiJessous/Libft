/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <eljessou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:12:31 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/16 19:23:17 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char r)
{
	size_t	i;
	size_t	flag;
	size_t	words;

	i = 0;
	flag = 1;
	words = 0;
	while (s[i])
	{
		if (s[i] != r && flag == 1)
		{
			words++;
			flag = 0;
		}
		else if (s[i] == r)
			flag = 1;
		i++;
	}
	return (words);
}

static char	*allocate(char const *s, char r)
{
	size_t	size;
	size_t	i;
	char	*p;

	i = 0;
	size = 0;
	while (s[size] && s[size] != r)
		size++;
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	while (i < size)
	{
		*(p + i) = s[i];
		i++;
	}
	*(p + i) = '\0';
	return (p);
}

static void	free_all(char **p, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(p[i++]);
	free(p);
	return ;
}

static char	**concatenate(char const *s, size_t words, char c)
{
	char	**p;
	size_t	j;

	p = malloc(sizeof(char *) * (words + 1));
	if (!p)
		return (NULL);
	j = 0;
	while (*s && j < words)
	{
		if (*s != c)
		{
			*(p + j) = allocate(&*s, c);
			if (!p[j])
				return (free_all(p, j), NULL);
			while (*s && *s != c)
				s++;
			j++;
		}
		if (*s)
			s++;
	}
	*(p + j) = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;

	if (!s)
		return (NULL);
	words = count_word(s, c);
	return (concatenate(s, words, c));
}
