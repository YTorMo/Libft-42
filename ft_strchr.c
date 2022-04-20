/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:06:17 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/20 12:13:43 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*occur;

	occur = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			occur = (char *)s;
			return (occur);
		}
		s++;
	}
	return (occur);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[20]= "Estoy hola muchas h";
	printf("%s", ft_strchr(str, 122));
	return (0);
}*/