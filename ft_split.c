/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:01:12 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/27 21:51:11 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlencut(char *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (*s != '\0' && *s != c)
	{
		i++;
		s++;
	}
	return (i++);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*ns;
	char	*chr;
	int		i[2];

	chr = &c;
	ns = ft_strtrim(s, chr);
	res = (char **)ft_calloc(sizeof(char *), (ft_strlencut(ns, c) + 1));
	if (!res)
		return (0);
	i[0] = 0;
	while (ft_strlencut(ns, c))
	{
		i[1] = ft_strlencut(ns, c) + 1;
		res[i[0]] = malloc(sizeof(char) * i[1]);
		ft_strlcpy(res[i[0]], ns, i[1]);
		ns = ft_strtrim(ft_strchr(ns, c), chr);
		i[0]++;
	}
	res[i[0]] = 0;
	return (res);
}
