/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:33:29 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/25 19:29:36 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s3;
	unsigned const char	*s4;
	size_t				i;

	i = 0;
	s3 = s1;
	s4 = s2;
	while (i < n)
	{
		if (s3[i] != s4[i])
			return ((int)(s3[i] - s4[i]));
		i++;
	}
	return (0);
}
