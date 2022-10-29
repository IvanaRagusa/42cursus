/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:45:58 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/25 19:53:59 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newel;

	if (!lst || !f)
		return (NULL);
	newel = ft_lstnew((f)(lst->content));
	if (!newel)
		return (NULL);
	newlst = newel;
	lst = lst->next;
	while (lst)
	{
		newel = ft_lstnew((f)(lst->content));
		if (!newel)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&newlst, del);
			break ;
		}
		ft_lstadd_back(&newlst, newel);
		lst = lst->next;
	}
	return (newlst);
}
