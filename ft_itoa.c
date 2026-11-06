/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <eljessou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:24:16 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/21 14:40:17 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*helper(long n, int sign, int size)
{
	char	*p;

	p = malloc(sizeof(char) * (size + sign + 1));
	if (!p)
		return (NULL);
	*(p + size + sign) = '\0';
	if (n < 0)
		n = (-n);
	while (size)
	{
		size--;
		*(p + size + sign) = (n % 10) + '0';
		n /= 10;
	}
	if (sign == 1)
		*(p + 0) = '-';
	return (p);
}

char	*ft_itoa(int n)
{
	long	c;
	int		size;
	int		sign;

	if (n == 0)
		return (ft_strdup("0"));
	sign = 0;
	c = n;
	if (c < 0)
	{
		c = (-c);
		sign = 1;
	}
	size = 0;
	while (c)
	{
		c /= 10;
		size++;
	}
	return (helper(n, sign, size));
}
