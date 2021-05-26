/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 03:13:42 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/26 05:37:05 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*news1;
	char	*res;
	int		i;
	int		len;

	i = 0;
	if (!s1)
		return (0);
	news1 = ft_strdup(s1);
	while (set[i])
	{
		len = ft_strlen(news1) - 1;
		while (news1[len] == set[i])
			news1[len--] = '\0';
		while (*news1 == set[i])
			news1++;
		i++;
	}
	res = malloc(sizeof(char) * len);
	len = ft_strlen(news1) + 1;
	ft_bzero(res, len);
	res = (char *)ft_memcpy(res, news1, ft_strlen(news1) + 1);
	return ((char *)res);
}
