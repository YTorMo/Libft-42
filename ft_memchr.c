/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:20:02 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/20 12:20:08 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*occur;
	int		i;

	i = 0;
	occur = 0;
	while (*(char *)s != '\0' && n--)
	{
		if (*(char *)s == c)
		{
			occur = (void *)s;
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
	printf("%s", ft_memchr(str, 104, 5));
	return (0);
}*/