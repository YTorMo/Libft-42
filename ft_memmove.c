/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:53:17 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/19 13:21:34 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	char		*d;
	const char	*s;
	char		*lasts;
	char		*lastd;

	d = dst;
	s = src;
	if (len != 0 || dst != src)
	{
		if (d < s)
		{
			while (len--)
			{
				*d++ = *s++;
			}
		}
		else
		{
			*lasts = s + (len - 1);
			*lastd = d + (len - 1);
			while (len--)
				*lastd-- = *lasts--;
		}
	}
	return (dst);
}
