/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:00:54 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/22 16:01:43 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_counter(int n)
{
	int		i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int		i;
	unsigned int		n2;
	char				*s1;

	i = ft_counter(n);
	s1 = (char *)malloc(sizeof(char) * i + 1);
	if (s1 == 0)
		return (NULL);
	s1[i] = '\0';
	if (n == 0)
		s1[0] = '0';
	if (n < 0)
	{
		s1[0] = '-';
		n2 = -n;
	}
	else
		n2 = n;
	while (n2)
	{
		s1[--i] = n2 % 10 + 48;
		n2 = n2 / 10;
	}
	return (s1);
}
/*
int    main(void)
{
    int    n;
​
    n = -2147483648;
    printf("%s\n", ft_itoa(n));
}*/
