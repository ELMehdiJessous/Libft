/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <eljessou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:32:46 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/21 12:06:14 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*cb;

	i = 0;
	x = (unsigned char)c;
	cb = (unsigned char *)b;
	while (i < len)
		cb[i++] = x;
	return (b);
}
