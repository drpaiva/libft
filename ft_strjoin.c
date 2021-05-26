/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 07:50:46 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/26 01:16:25 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strcat(char *dest, char *src)
{
	int		i;
	int		t;

	i = 0;
	while (dest[i] != '\0')
		i++;
	t = 0;
	while (src[t] != '\0')
	{
		dest[i + t] = src[t];
		t++;
	}
	dest[i + t + 1] = '\0';
	return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int	sumlen;

	sumlen = ft_strlen((char *)s1) + ft_strlen((char *)s1) + 1;
	if ((!s1 && !s2) || !sumlen)
		return (0);
	if (!s1 && s2)
		return ((char *)s2);
	if (!s2 && s1)
		return ((char *)s1);
	if (s1 && s2)
	{
		join = malloc(sizeof(char) * sumlen);
		if (!join)
			return (0);
		ft_bzero(join, sumlen);
		join = ft_strcat((char *)join, (char *)s1);
		join = ft_strcat((char *)join, (char *)s2);
		return ((char *)join);		
	}
	return (0);
}
