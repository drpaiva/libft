/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:10:08 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/31 20:37:02 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lendec(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (!n)
		return (0);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	if (n == 0)
	{
		res = ft_calloc(sizeof(char), 1);
		res[0] = '0';
		return (res);
	}
	i = ft_lendec(n);
	res = ft_calloc(sizeof(char), i);
	if (!res)
		return (0);
	if (n < 0)
	{
		n = n * -1;
		res[0] = '-';
	}
	while (n)
	{
		i--;
		res[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
