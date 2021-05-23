/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:57:11 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/23 17:19:22 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*news;
	size_t i;

	i = 0;
	news = (unsigned char *)s;
	while (n >= 0 || *news)
	{
		if (news[i] == c)
			return (&news[i]);
		n--;
		i++;
	}
	return (0);
}
