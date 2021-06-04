/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 19:01:12 by dramos-p          #+#    #+#             */
/*   Updated: 2021/06/04 17:07:31 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlencut(char *s, char c)
{
	char	*s1;
	int		i;

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

static int	ft_strlendelimiter(char const *s, char c)
{
	int		len;
	int		i;
	int		j;
	char	*str;

	str = ft_strtrim(s, &c);
	len = 0;
	j = ft_strlen(str);
	i = 0;
	while (i < j)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			while ((unsigned char)str[i] == (unsigned char)c)
				i++;
			len++;
		}
		i++;
	}
	return (++len);
	
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*str;
	int		len;
	int		i[3];

	str = ft_strtrim(s, &c);
	len = (ft_strlendelimiter(str, c));
	res = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!res)
		return (NULL);
	if (!ft_strlen(str))
	{
		free(str);
		return (res);
	}
	i[0] = 0;
	while (len + 1)
	{
		str = ft_strtrim(str, &c);
		i[1] = ft_strlencut(str, c);
		res[i[0]] = ft_substr(str, 0, i[1]);
		while (i[1]--)
			str++;
		len--;
		str++;
		i[0]++;
	}
	res[i[0]++] = NULL;
	return (res);
}
