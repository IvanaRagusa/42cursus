/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iragusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:27:20 by iragusa           #+#    #+#             */
/*   Updated: 2022/10/08 23:16:58 by iragusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{	
	const char	*p;
	int			i;

	i = ft_strlen(s);
	p = &s[i];
	if (c == '\0')
		return ((char *)p);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			p = &s[i];
			return ((char *)p);
		}
		i--;
	}
	return (0);
}
/*int	main()
{
	
	//char s[] = "tripouille";
	//char s2[] = "ltripouiel";
	//char s3[] = "";
	printf("%s\n", ft_strrchr(NULL, 'G'));
	printf("%s\n", strrchr(NULL, 'G'));
	//2ok check(ft_strrchr(s, 'l') == s + 8); showLeaks();
	//3ok check(ft_strrchr(s2, 'l') == s2 + 9); showLeaks();
	//4ok check(ft_strrchr(s, 'z') == NULL); showLeaks();
	//5ok check(ft_strrchr(s, 0) == s + strlen(s)); showLeaks();
	//6ok check(ft_strrchr(s, 't' + 256) == s); showLeaks();
	//7ok check(ft_strrchr(empty, 'V') == NULL); free(empty); showLeaks();
	//8ok check(ft_strrchr(s3, 0) == s3); showLeaks();
	return (0);
}*/
