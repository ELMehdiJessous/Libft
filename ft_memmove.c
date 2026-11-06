/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <eljessou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:13:58 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/15 17:19:42 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	if (!src && !dst)
		return (NULL);
	if (d < s)
		return (ft_memcpy(dst, src, len));
	else if (d > s)
	{
		while (len)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (dst);
}
