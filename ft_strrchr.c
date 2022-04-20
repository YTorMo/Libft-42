/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:08:58 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/19 17:25:23 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*l_occur;

	l_occur = 0;
	while (*s != '\0')
	{
		if (*s == c)
			l_occur = (char *)s;
		s++;
	}
	return (l_occur);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[20]= "Estoy hola muchas";
	printf("%s", ft_strrchr(str, 122));
	return (0);
}*/