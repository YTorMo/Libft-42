/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:53:38 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/19 14:06:01 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcat(char *dest, char *src, unsigned long size)
{
	unsigned long	dest_count;
	unsigned long	src_count;
	unsigned long	ttl_count;

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
