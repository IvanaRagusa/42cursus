/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:07:44 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/23 00:51:49 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_count(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (*s == 0)
		return (0);
	while (*(s + i) != '\0')
	{
		if (*(s + i + 1) == c && *(s + i) != c)
			n++;
		i++;
	}
	if (*(s + i) == '\0' && *(s + i - 1) != c)
		n++;
	return (n);
}

char	**ft_allocate(char const *s, char **ptr, char c, int n)
{
	int	p_len;
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (i < n && s)
	{
		p_len = 0;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j] != '\0')
		{
			j++;
			p_len ++;
		}
		ptr[i] = (char *)malloc(sizeof(char) * (p_len + 1));
		if (!ptr[i])
			return (NULL);
		i++;
	}
	return (ptr);
}

char	**ft_copy(char const *s, char **ptr, char c, int n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (*(s + j) != '\0' && i < n)
	{
		k = 0;
		while (*(s + j) == c)
			j++;
		while (*(s + j) != c && *(s + j) != '\0')
		{
			*(*(ptr + i) + k) = (char)*(s + j);
			k++;
			j++;
		}
		*(*(ptr + i) + k) = '\0';
		i++;
	}
	*(ptr + i) = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	char	**ptr;

	n = ft_count(s, c);
	ptr = (char **)malloc(sizeof(char *) * (n + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_allocate(s, ptr, c, n);
	ptr = ft_copy(s, ptr, c, n);
	return (ptr);
}
/*int main()
{
    char s[] = "  lorem ipsum dolor sit amet, Suspendisse";
    char c = ' ';
    char **ptr;
    int    i;
    
    i = 0;
    ptr = ft_split(s, c);
    while (ptr[i] != NULL)
    {
        printf("%s\n", ptr[i]);
        //write(1, "\n", 1);
        i++;
    }
    return (0);
}*/
