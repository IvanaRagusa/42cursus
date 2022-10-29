/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:20:25 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/03 16:12:52 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		*ptr = c;
		i++;
		ptr++;
	}
	return (s);
}
/*int main ()
{
	char src[50] = "ciaone belli";
	int a;
	size_t n;

	a = 'o';
	n = 6;
	ft_memset(src,a,n);

	printf ("%s", src);
	return 0;
}*/
