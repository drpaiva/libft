/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 03:13:42 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/26 07:21:06 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *res;
	int i;
	int f;

	i = 0;
	if (!s1)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		s1++;
	f = ft_strlen(s1) - 1;
	while (s1[f] && ft_strchr(set, s1[f]))
		f--;
	res = malloc(sizeof(char) * (f - i + 2));
	if (!res)
		return (0);
	ft_strlcpy(res, s1, f - i + 2);
	return (res);
}
