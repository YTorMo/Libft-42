/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:08:36 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/19 11:34:36 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned char	*memo;

	memo = b;
	while (len > 0)
	{
		*memo = c;
		memo++;
		len--;
	}
	return (b);
}
