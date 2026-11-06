/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <eljessou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:53:06 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/17 17:05:59 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*cur;
	unsigned int	size;

	if (!lst)
		return (0);
	cur = lst;
	size = 0;
	while (cur)
	{
		cur = cur->next;
		size++;
	}
	return (size);
}
