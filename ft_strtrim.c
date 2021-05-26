/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 03:13:42 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/26 06:38:50 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *res;
	int i;
	int f;

	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	f = ft_strlen(s1);
	while (ft_strchr(set, s1[f]))
		f--;
	res = malloc(sizeof(char) * f);
	ft_strlcpy(res, s1, f + 1);
	return ((char *)res);
	// char	*news1;
	// char	*res;
	// int		i;
	// int		len;
	// int		lenc;

	// i = 0;
	// if (!s1)
	// 	return (0);
	// news1 = ft_strdup(s1);
	// lenc = ft_strlen(set);
	// while (set[i])
	// {
	// 	len = ft_strlen(news1) - 1;
	// 	while (news1[len] == set[lenc - i])
	// 		news1[len--] = '\0';
	// 	while (*news1 == set[i])
	// 		news1++;
	// 	i++;
	// }
	// len = ft_strlen(news1) + 2;
	// res = malloc(sizeof(char) * len);
	// ft_strlcpy(res, news1, len);
	// return ((char *)res);
}
