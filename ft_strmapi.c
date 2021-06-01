/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 23:28:01 by dramos-p          #+#    #+#             */
/*   Updated: 2021/06/01 19:41:56 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int len;
	unsigned int i;
	char *r;

	len = ft_strlen(s);
	r = ft_calloc(sizeof(char), len);
	i = 0;
	while (*s)
	{
		r[i] = f(i, s);
		s++;
		i++;
	}
	return (r);
}
