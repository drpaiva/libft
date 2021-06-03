/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 03:13:42 by dramos-p          #+#    #+#             */
/*   Updated: 2021/06/03 16:24:49 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strchr_md(const char *s, char const *c, int p)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (s[i] == c[p])
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
	nset = ft_calloc(f, sizeof(char));
	ft_strlcpy(nset, set, f);
	if (!s1 || set == 0)
		return (0);
	while (s1[0] != '\0' && ft_strchr(nset, s1[0]))
		s1++;
	f = ft_strlen(s1);
	if (f <= 0)
		return (ft_calloc(0, sizeof(char)));
	f--;
	while (ft_strchr_md(nset, s1, f) && f > 0)
		f--;
	res = ft_substr(s1, 0, (f + 1));
	return (res);
}
