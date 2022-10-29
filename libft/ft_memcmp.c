/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:42:08 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/10 18:09:59 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
		{
			if (*p1 > *p2)
				return (1);
			else
				return (-1);
		}
		p1++;
		p2++;
		n--;
	}
	return (0);
}
/*int main(void) 
{

  char str1[] = {-70, 0, 127, 0};
  char str2[] = {0, 0, 127, 0};
  
  printf("mio %d\n", ft_memcmp(str2, str1, 1));
  printf("sis %d", memcmp(str2, str1, 1));
  return 0;
}*/
