/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:22:48 by dramos-p          #+#    #+#             */
/*   Updated: 2021/06/01 21:35:38 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lendec(int n)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = n;
	if (n <= 0)
	{
		res = res * -1;
		i++;
	}
	while (res)
	{
		res = res / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	str;
	char	*res;
	size_t	i;

	str = n;
	i = ft_lendec(n);
	if (n < 0)
	{
		str = (long long)n * -1;
		res[0] = '-';
	}
	while (str)
	{
		i--;
		res[i] = (str % 10) + '0';
		str = str / 10;
	}
	while (*res)
	{
		write(fd, &res, 1);
		res++;
	}
}
