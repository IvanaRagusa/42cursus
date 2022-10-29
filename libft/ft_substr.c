/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:04:31 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/18 18:23:13 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	ft_min(const char *s, unsigned int start, size_t len)
{
	if (len > (ft_strlen(s) - start))
		return (ft_strlen(s) - start);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_min(s, start, len);
	if (start > ft_strlen(s))
	{
		start = ft_strlen(s);
		len = 0;
	}
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len && s[start] != 0)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[len] = '\0';
	return (sub);
}
/*int	main(void)
{
    char s1[] = "hello my loco";
    printf("%s\n", ft_substr(s1, 2, 5));
    
    char s2[] = "hello my loco";
    printf("%s\n", ft_substr(s2, 5, 2));
    
    char s3[] = "hello my loco";
    printf("%s\n", ft_substr(s3, 4, 15));
    
    char s4[] = "hello my loco";
	printf("%s\n", ft_substr(s4, 0, 13));
	printf("%s\n", ft_substr("tripouille", 0, 42000));

	return (0);
}*/
