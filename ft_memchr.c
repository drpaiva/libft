/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:57:11 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/23 17:14:32 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*news;

	news = (unsigned char *)s;
	while (n >= 0 || *news)
	{
		if (*news++ == c)
			return (--news);
		n--;
	}
	return (0);
}
