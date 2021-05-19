/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 00:43:11 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/19 00:51:53 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int c_src;

	i = 0;
	c_src = ft_strlen(src);
	if (dstsize == 0)
	{
		return (c_src);
	}
	dstsize--;
	while (i < dstsize && *src != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (i < dstsize)
	{
		dst[i] = '\0';
	}
	return (c_src);
}