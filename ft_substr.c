/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 23:02:07 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/28 15:26:44 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*news;
	unsigned int	c;

	c = ft_strlen(s);
	if (start >= c)
		return (news = NULL);
	if (!len || !s || start > c)
		return (0);
	news = (char *)ft_calloc(sizeof(char), len);
	if (!news)
		return (0);
	if (start == 0)
		ft_strlcpy(news, s, len + 1);
	else
		ft_strlcpy(news, s + start, len + 1);
	return (news);
}
