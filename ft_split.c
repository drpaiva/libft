/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:01:12 by dramos-p          #+#    #+#             */
/*   Updated: 2021/06/03 22:22:57 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlencut(char *s, char c)
{
	char *s1;
	int	i;

	s1 = ft_strdup(s);
	i = 0;
	if (!s)
		return (0);
	while (*s1 != '\0' && *s1 != c)
	{
		i++;
		s1++;
	}
	return (i);
}

// static char	**ft_free(char **s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		free(s[i]);
// 		i++;
// 	}
// 	free(s);
// 	return (NULL);
// }

static int	ft_strlendelimiter(char const *s, char c)
{
	int	len;
	int	i;
	int	j;
	char *str;
	char	d[2];

	d[0] = c;
	d[1] = '\0';
	str = ft_strdup(s);
	str = ft_strtrim(str, d);
	len = 0;
	j = ft_strlen(s);
	while (i < j)
	{
		if (s[i] == c)
			len++;
		i++;
	}
	
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*str;
	int		len;
	int		i[3];

	str = ft_strdup(s);
	len = (ft_strlendelimiter(str, c) + 1);
	res = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!res)
		return (0);
	i[0] = 0;
	while (len)
	{
		i[1] = ft_strlencut(str, c);
		res[i[0]] = ft_substr(str, 0, i[1]);
		while (i[1])
		{
			str++;
			i[1]--;
		}
		len--;
		str++;
		i[0]++;
	}
	res[i[0]++] = NULL;
	return (res);
}
