/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:54:35 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/22 18:03:58 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) - 1;
	while (len)
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
	}
	if (s[len] == c)
		return ((char *)s + len);
	return (0);
}
