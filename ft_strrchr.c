/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:08:49 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/13 15:08:51 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	x;
	int				i;

	if (!s)
		return (NULL);
	x = (unsigned char)c;
	i = ft_strlen(s);
	if (x == '\0')
		return ((char *)&s[i]);
	i--;
	while (i >= 0)
	{
		if ((unsigned char)s[i] == x)
			return ((char *)(&s[i]));
		i--;
	}
	return (NULL);
}
