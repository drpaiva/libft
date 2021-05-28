/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 23:02:07 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/28 15:18:21 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*news;
	unsigned int	c;

	c = ft_strlen(s);
	if (start == 0)
		return (s);
	if (start >= c)
		return (news = NULL);
	if (!len || !s || start > c)
		return (0);
	news = (char *)ft_calloc(sizeof(char), len);
	if (!news)
		return (0);
	// ft_bzero(news, len + 1);
	ft_strlcpy(news, s + start, len + 1);
	return (news);
}
