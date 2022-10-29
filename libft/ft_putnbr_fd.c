/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:59:28 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/22 12:59:36 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"
#include <limits.h>

int	ft_strnum(char *ptr, int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	*(ptr + i) = '\0';
	i++;
	while (n != 0)
	{
		*(ptr + i) = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	i;
	char	ptr[11];

	i = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
			write(fd, "-", 1);
		i = ft_strnum(ptr, n) - 1;
		while (i > 0)
		{
			write(fd, (ptr + i), 1);
			i--;
		}
	}
}

/*int	main()
{
	ft_putnbr_fd(-5, 2);
	return (0);
}*/

/*int	main(void)
{
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(-0, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
}*/
