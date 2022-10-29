/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:54:22 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/09 20:14:46 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char				*p;
	unsigned char				chr;
	size_t						i;

	i = 0;
	p = (unsigned char *)s;
	chr = (unsigned char )c;
	while (i++ < n)
	{
		if (*p == chr)
			return (p);
		p++;
	}
	return (NULL);
}
/*int main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("mio: %p", ft_memchr(s, 2, 3));
	printf("sis: %p", memchr(s, 2, 3));
	//2ok check(ft_memchr(s, 0, 1) == s); showLeaks();
	//3no check(ft_memchr(s, 2, 3) == s + 2); showLeaks();
	//4ok check(ft_memchr(s, 6, 6) == NULL); showLeaks();
	//5ok check(ft_memchr(s, 2 + 256, 3) == s + 2); showLeaks(); //Cast check
	return (0);
}*/
