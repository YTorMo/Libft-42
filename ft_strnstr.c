/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:08:34 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/20 10:44:19 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, unsigned long len)
{
	char	*ptr;
	int		i;

	ptr = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (len-- && *haystack != '\0')
	{
		i = 0;
		if (*haystack == needle[i])
		{
			while (needle[i] != '\0' && len--)
			{
				if (needle[i] != *haystack)
					break ;
				i++;
				haystack++;
			}
			if (needle[i] == '\0')
				return (ptr = (char *)haystack - i);
		}
		haystack++;
	}
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	char str[50] = "Estoy probando los needles en strnstr";
	printf("%s", ft_strnstr(str, "l", 3));
	return (0);
} */
