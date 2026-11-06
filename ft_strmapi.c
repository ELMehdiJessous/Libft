/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <eljessou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:43:01 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/16 22:29:34 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	char	*p;
	size_t	i;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	i = 0;
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	*(p + size) = '\0';
	while (i < size)
	{
		*(p + i) = (f)(i, s[i]);
		i++;
	}
	return (p);
}
