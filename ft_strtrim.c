/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 03:13:42 by dramos-p          #+#    #+#             */
/*   Updated: 2021/06/03 14:20:16 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strchr_md(const char *s, char c)
{
	size_t	i;
	size_t	len;
	char	proc;

	proc = c;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (s[i] == proc)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		f;
	char	*nset;

	f = ft_strlen(set) + 1;
	nset = ft_calloc(sizeof(char), f);
	ft_strlcpy(nset, set, f);
	if (!s1 || set == 0)
		return (0);
	while (s1[0] != '\0' && ft_strchr_md(nset, s1[0]))
		s1++;
	f = ft_strlen(s1) + 1;
	if (f <= 0)
		return (ft_calloc(sizeof(char), f));
	f--;
	while (ft_strchr_md(nset, s1[f]) && f > 0)
		f--;
	res = ft_calloc(sizeof(char), f + 1);
	if (!res)
		return (0);
	ft_strlcpy(res, s1, f);
	return (res);
}
