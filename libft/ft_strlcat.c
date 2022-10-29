/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:28:48 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/13 17:47:49 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	tot;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	tot = s_len + d_len;
	i = 0;
	if (size < d_len || size == 0)
		return (size + s_len);
	else
	{
		while ((d_len < size - 1) && src[i] != '\0')
		{
			dst[d_len] = src[i];
			i++;
			d_len++;
		}
		dst[d_len] = '\0';
	}
	return (tot);
}
/*int             main(void)
{
        char dest[30]; 
	memset(dest, 0, 30);
        char *src = (char *)"AAAAAAAAA";
             
        printf("mio : %ld\n %s\n", ft_strlcat(dest, "123", 0), dest);
	
}*/
