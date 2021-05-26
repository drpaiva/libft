/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:51:17 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/26 01:54:03 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	size_t	fullsize;
	void	*r;

	fullsize = count * size;
	if (!size)
		return (0);
	r = malloc(fullsize);
	if (!r)
		return (0);
	ft_bzero(r, fullsize);
	return (r);
}
