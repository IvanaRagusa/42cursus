/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:27:19 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/22 13:04:10 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

t_list	*ft_lstnew(void *content)
{
	t_list	*newel;

	newel = (t_list *)malloc(sizeof(t_list));
	if (!newel)
		return (NULL);
	newel->content = content;
	newel->next = NULL;
	return (newel);
}
/*
**int		main(void)
**{
**	char	str[] = "lorem ipsum dolor sit";
**
**	t_list	*elem;
**
**	elem = ft_lstnew((void *)str);
**	printf("\n%s\n", elem->content);
**}
*/
