/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:42:23 by frukundo          #+#    #+#             */
/*   Updated: 2023/11/10 23:05:30 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_overflow(unsigned long int res, int sign)
{
	if (res > 9223372036854775807 && sign == 1)
		res = -1;
	else if (res > 9223372036854775807 && sign == -1)
		res = 0;
	return ((int)(res * sign));
}

int	ft_atoi(const char *str)
{
	unsigned long int	res;
	int					i;
	int					sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (check_overflow(res, sign));
}
