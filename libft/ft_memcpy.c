/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:42:04 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/05 23:23:13 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}
/*int main ()
{
   char dest[] = "abcde";
   const char src[]  = "abcde";

   printf("Before memcpy dest = %s, src = %s\n", dest, src);
   memcpy(&dest[2], dest, 3);
   printf("After memcpy dest = %s, src = %s\n\n", dest, src);

  char des[] = "abcde";
   const char sr[]  = "abcde";

   printf("Before FT des = %s, sr = %s\n", des, sr);
  ft_memcpy(&des[2], des, 3);

   printf("After FT des = %s, sr = %s\n", des, sr);

   return(0);
}*/
