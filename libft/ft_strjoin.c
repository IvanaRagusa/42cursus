/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:31:06 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/17 18:31:34 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i1;
	int		i2;
	int		i3;

	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	s3 = (char *)malloc(i1 + i2 + 1);
	if (!s3)
		return (NULL);
	i3 = 0;
	while (i3 < i1)
	{
		s3[i3] = s1[i3];
		i3++;
	}
	i1 = 0;
	while (i1 < i2)
	{
		s3[i3] = s2[i1];
		i3++;
		i1++;
	}
	s3[i3] = '\0';
	return (s3);
}
