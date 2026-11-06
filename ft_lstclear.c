/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eljessou <eljessou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:42:58 by eljessou          #+#    #+#             */
/*   Updated: 2026/10/21 14:58:27 by eljessou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next_node;

	if (!lst || !*lst)
		return ;
	curr = *lst;
	while (curr)
	{
		next_node = curr->next;
		if (del && curr->content)
			del(curr->content);
		free(curr);
		curr = next_node;
	}
	*lst = NULL;
	return ;
}
