/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <eljessou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:43:28 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/18 23:30:37 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_check(char const *s1, char const *s2)
{
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s1len;
	size_t		s2len;
	size_t		i;
	size_t		j;
	char		*p;

	if (!s1 || !s2)
		return (ft_check(s1, s2));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	p = malloc((s1len + s2len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		*(p + j++) = s1[i++];
	i = 0;
	while (s2[i])
		*(p + j++) = s2[i++];
	*(p + j) = '\0';
	return (p);
}
