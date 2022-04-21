/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:39:37 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/21 11:27:41 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*sub2;

	sub = (char *)malloc(sizeof(len + 1));
	if (!sub || !s)
		return (NULL);
	*sub = '\0';
	if (len == 0 || ft_strlen(s) < start)
		return (sub);
	s += start;
	sub2 = sub;
	while (len-- && *s != 0)
	{
		*sub2 = *s;
		sub2++;
		s++;
	}
	*sub2 = 0;
	return (sub);
}
