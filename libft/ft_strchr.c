/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:19:09 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/27 19:58:18 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
/*int main(void)
{
    char s[] = "fsad32";
    
    printf("originale: %s \n", strchr(s, 'a'));
    
    char sd[] = "fsad32";
    char *ptr = ft_strchr(sd, 'a');
    printf("mine: %s \n", ptr);
    return (0); 
}*/
