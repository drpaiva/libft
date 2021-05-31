/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:10:08 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/31 15:50:52 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		d;
	int		val;

	i = 0;
	val = n;
	while (n)
	{
		n = n / 10;
		i++;
	}
	res = ft_calloc(sizeof(char), ++i);
	d = 0;
	while (val)
	{
		res[d] = (val % 10) + '0';
		d++;
		val = val / 10;
	}
	return (res);
}
