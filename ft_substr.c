/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:08:03 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/14 15:08:05 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	begins;
	size_t	i;
	size_t	s_lens;

	if (!s)
		return (NULL);
	s_lens = ft_strlen(s);
	begins = (size_t)start;
	i = 0;
	if (begins >= s_lens)
		return (ft_strdup("\0"));
	if (len > s_lens - begins)
		len = s_lens - begins;
	p = malloc (sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (i < len && s[begins + i])
	{
		*(p + i) = s[begins + i];
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
