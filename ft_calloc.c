/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:51:17 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/23 21:29:41 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	size_t	fullsize;
	void	*r;

	fullsize = count * size;
	if (!fullsize)
		return (0);
	r = malloc(sizeof(fullsize));
	ft_bzero(r, fullsize);
	return (r);
}
