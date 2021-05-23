/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 20:34:33 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/23 13:07:28 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char *dst1;
	char *src1;

	i = 0;
	dst1 = dst;
	src1 = src;
    if (dst1 == src1)
    	return (dst1);
	while(i < n)
    {
			dst1[i] = src1[i];
            i++;
    }
	return (dst);
}
