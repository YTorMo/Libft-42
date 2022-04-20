/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:37:50 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/19 17:59:48 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned long n)
{
	while (*(unsigned char *)s1++ != '\0' && *(unsigned char *)s2++ != '\0'
		&& n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			break ;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[20]= "Estoy hola muchas h";
	char	str2[20]= "Estoy hola muchas h";
	printf("%d", ft_memcmp(str1, str2, 5));
	return (0);
}*/