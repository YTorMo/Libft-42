/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:53:06 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/21 09:48:23 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * sizeof(size));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
