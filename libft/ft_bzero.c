/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:15:09 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/03 16:41:14 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*dest;
	size_t	i;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}
/*int main()
{
	int a = 1;
	
	int *ptr;
	
	ptr = &a;	
	size_t	i = 6;
	int n = 0;
	int test[5] = {1,2,3,4,5};
	while(n < 5)
	{
		printf("%d\n", test[n]);
		n++;
	}

	bzero(test, 16);
	printf("%d", *test);
	n = 0;
	while(n < 5)
	{
		printf("%d\n", test[n]);
		n++;
	}
}*/
