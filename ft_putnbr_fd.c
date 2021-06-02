/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:22:48 by dramos-p          #+#    #+#             */
/*   Updated: 2021/06/01 21:49:02 by dramos-p         ###   ########.fr       */
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
	size_t	i;
	char s;

	str = n;
	i = ft_lendec(n);
	if (n < 0)
	{
		str = (long long)n * -1;
		write(fd, "-", 1);
	}
	while (str)
	{
		s = (str % 10) + '0';
		write(fd, &s, 1);
		str = str / 10;
	}
}
