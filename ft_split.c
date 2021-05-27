/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:01:12 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/27 20:49:52 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int ft_strlenb(const char *s, char c)
// {
// 	int res;

// 	res = 0;
// 	while (*s)
// 	{
// 		res++;
// 		s++;
// 	}
	
// 	return (res++);
// }

static int ft_strlencut(char *s, char c)
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
	return (i);
}

char **ft_split(char const *s, char c)
{
	char **res;
	char *ns;
	char *chr;
	int i;
	int len;

	chr = &c;
	ns = ft_strtrim(s, chr);
	res = (char **)malloc(sizeof(char *) * ft_strlencut(ns, c));
	if (!res)
		return (0);
	i = 0;
	while (ft_strlencut(ns, c))
	{
		len = ft_strlencut(ns, c) + 1;
		res[i] = malloc(sizeof(char) * len);
		ft_strlcpy(res[i], ns, len);
		ns = ft_strtrim(ft_strchr(ns, c), chr);
		i++;
	}
	return (res);	
}