/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoro-mo <ytoro-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:47:11 by ytoro-mo          #+#    #+#             */
/*   Updated: 2022/04/20 11:31:55 by ytoro-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	rtn;
	int		sign;

	rtn = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rtn = rtn * 10 + (*str - '0');
		str++;
	}
	if ((rtn * sign) > __INT_MAX__
		|| (rtn * sign) < ((__INT_MAX__ * -1) - 1))
		return (0);
	else
		return ((int)(rtn * sign));
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str[50] = "   \t   \n  \f  214748455454536578abc";
	printf("%d", ft_atoi(str));
	printf("\n%d", atoi(str));
	return (0);
} */