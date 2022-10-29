/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:37:31 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/25 17:40:20 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ind;

	if (!(*lst))
		return ;
	while (*lst)
	{
		ind = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = ind;
	}
}
