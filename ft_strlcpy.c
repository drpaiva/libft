/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 00:43:11 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/23 18:14:52 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	c_src;

	i = 0;
	c_src = ft_strlen(src) -1;
	if (dstsize == 0)
		return (c_src);
	dstsize--;
	while (i < dstsize && (dst[i] = src[i]) != '\0')
		i++;
	dst[i] = '\0';
	return (c_src);
}
