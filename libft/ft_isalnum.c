/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:34:50 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/03 14:48:17 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*int main ()
{
	int a;
	int b;
	int c;
	a = '8';
	b = 't';
	c = ',';
	printf("%d\n%d\n%d", ft_isalnum(a),ft_isalnum(b), ft_isalnum(c));
}*/	
