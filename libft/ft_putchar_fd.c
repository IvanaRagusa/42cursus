/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:57:49 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/17 17:58:49 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	char	*ptr;
	size_t	cont;

	ptr = &c;
	cont = 1;
	write(fd, ptr, cont);
}
