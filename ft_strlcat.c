/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:53:38 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/20 12:18:59 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dest_count;
	size_t	src_count;
	size_t	ttl_count;

	dest_count = 0;
	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	src_count = 0;
	while (src[src_count] != '\0')
	{
		src_count++;
	}
	ttl_count = 0;
	while (src[ttl_count] != '\0' && (ttl_count + dest_count) < size - 1)
	{
		dest[dest_count + ttl_count] = src[ttl_count];
		ttl_count++;
	}
	dest[dest_count + ttl_count] = '\0';
	return (src_count + dest_count);
}
