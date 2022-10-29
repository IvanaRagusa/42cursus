/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:10:31 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/11 21:59:28 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while ((big[j] != '\0' && j < len))
	{
		i = 0;
		if (big[j] == little[i])
		{
			while (j < len && little[i] != '\0' && little[i] == big[j])
			{
				i++;
				j++;
			}
		}
		if (j <= len && little[i] == '\0')
			return ((char *)(&big[j - i]));
		j -= i;
		j++;
	}
	return (0);
}
/*int main ()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "c";

	printf("%s", (ft_strnstr(haystack, needle, -1)));
}*/
