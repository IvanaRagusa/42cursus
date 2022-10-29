/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:17:48 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/09 00:15:41 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 == *s2 && *s1)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*int main(void)
{
	printf("il mio : %d\n ", (ft_strncmp("1234", "1235", 3)));
	printf("il suo: %d\n", (strncmp("1234", "1235", 3)));	
	//2 check(ft_strncmp("1234", "1235", 3) == 0); showLeaks();
	//3 check(ft_strncmp("1234", "1235", 4) < 0); showLeaks();
	//4 check(ft_strncmp("1234", "1235", -1) < 0); showLeaks();
	//5 check(ft_strncmp("", "", 42) == 0); showLeaks();
	//6 check(ft_strncmp("Tripouille", "Tripouille", 42) == 0); showLeaks();
	//7 check(ft_strncmp("Tripouille", "tripouille", 42) < 0); showLeaks();
	//8 check(ft_strncmp("Tripouille", "TriPouille", 42) > 0); showLeaks();
	//9 check(ft_strncmp("Tripouille", "TripouillE", 42) > 0); showLeaks();
	//10 check(ft_strncmp("Tripouille", "TripouilleX", 42) < 0); showLeaks();
	//11 check(ft_strncmp("Tripouille", "Tripouill", 42) > 0); showLeaks();
	//12 check(ft_strncmp("", "1", 0) == 0); showLeaks();
	//13 check(ft_strncmp("1", "", 0) == 0); showLeaks();
	//14 check(ft_strncmp("", "1", 1) < 0); showLeaks();
	//15 check(ft_strncmp("1", "", 1) > 0); showLeaks();
	//16 check(ft_strncmp("", "", 1) == 0); showLeaks();
}*/
