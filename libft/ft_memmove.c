/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:30:26 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/05 23:22:30 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
		return (NULL);
	i = n - 1;
	if (src < dest)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*int main () {
   char dest[] = "abcde";
   const char src[]  = "abcde";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(&dest[2], dest, 3);
   printf("After memmove dest = %s, src = %s\n\n", dest, src);

  char des[] = "abcde";
   const char sr[]  = "abcde";

   printf("Before FT des = %s, sr = %s\n", des, sr);
  ft_memmove(&des[2], des, 3);
  
   printf("After FT des = %s, sr = %s\n", des, sr);

   return(0);
}*/
