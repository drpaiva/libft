/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 06:49:31 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/26 02:34:33 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	res;
	size_t	sign;
	size_t	i;

	res = 0;
	sign = 0;
	i = 0;
	while (str[i] <= 13 && str[i] >= 9 && str[i] != 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (sign > 1)
		return (0);
	if ((sign % 2) == 0)
		return (res);
	return (-res);
}
