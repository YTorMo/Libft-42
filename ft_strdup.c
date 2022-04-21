/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:31:48 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/21 09:55:17 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	char	*dup;

	dup = (char *)malloc(sizeof(s1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1, sizeof(s1));
	return (dup);
}
