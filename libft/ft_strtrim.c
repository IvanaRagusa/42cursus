/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:37:12 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/18 17:41:21 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_checkstart(const char *s1, size_t i, const char *set)
{
	size_t	c;

	while (s1[i])
	{
		c = 0;
		while (set[c] && s1[i] != set[c])
			c++;
		if (s1[i] == set[c])
			i++;
		else
			break ;
	}
	return (i);
}

int	ft_checkend(const char *set, size_t i, size_t s_len, const char *s1)
{
	size_t	c;
	size_t	cont;

	cont = 0;
	while (s_len > i)
	{
		c = 0;
		while (set[c] && s1[s_len] != set[c])
			c++;
		if (s1[s_len] == set[c])
			s_len --;
		else
			break ;
		cont ++;
	}
	return (cont);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t;
	size_t	i;
	size_t	s_len;
	size_t	c;

	s_len = ft_strlen(s1);
	i = 0;
	i = ft_checkstart(s1, i, set);
	s_len = ft_checkend(set, i, s_len, s1);
	c = ft_strlen(s1) - s_len - i + 1;
	t = ft_substr(s1, i, c);
	if (!t)
		return (NULL);
	return (t);
}
/*int main(void){
	const char *a1 = "lorem \n ipsum \t dolor \n sit \t amet";
	printf("1: %s\n", ft_strtrim(a1, " "));
	const char *a2 = " ";
	printf("2: %s\n", ft_strtrim("bedbedhelbedlobedbed", a2));
	const char *a4 = "v v v";
	printf("4: %s\n", ft_strtrim("v vhellov v", a4));
	const char *a5 = "1234567";
	printf("5: %s\n", ft_strtrim("1234bedhelbedlobed1234567", a5));
	const char *a6 = "g";
	printf("6: %s\n", ft_strtrim("gbgegdghgeglgbgegdglgogbgegdg", a6));
}*/
