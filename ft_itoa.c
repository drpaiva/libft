/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:10:08 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/31 19:04:52 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		val;

	i = 0;
	val = n;
	while (n)
	{
		n = n / 10;
		i++;
	}
	res = ft_calloc(sizeof(char), ++i);
	if (!res)
		return (0);
	while (val)
	{
		i--;
		res[i] = (val % 10) + '0';
		val = val / 10;
	}
	return (res);
}
