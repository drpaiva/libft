/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 03:13:42 by dramos-p          #+#    #+#             */
/*   Updated: 2021/06/03 12:54:40 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		f;

	if (!s1 || set == 0)
		return (0);
	while (s1[0] && s1[0] != '\0' && ft_strchr(set, s1[0]))
		s1++;
	f = ft_strlen(s1);
	if (f <= 0)
		return (ft_calloc(sizeof(char), f));
	f--;
	while (s1[f] && ft_strchr(set, s1[f]))
		f--;
	res = ft_calloc(sizeof(char), (f + 1));
	if (!res)
		return (0);
	ft_strlcpy(res, s1, f + 1);
	return (res);
}
