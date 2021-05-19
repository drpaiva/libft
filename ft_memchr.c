/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:57:11 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/18 23:15:21 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (((unsigned char *)s)[n] == (unsigned char)c)
		{
			return ((void *)&((unsigned char *)s)[n]);
		}
		n--;
	}
	return (0);
}
