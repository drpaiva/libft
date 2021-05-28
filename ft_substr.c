/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 23:02:07 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/28 16:32:27 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*news;
	unsigned int	c;

	c = ft_strlen(s);
	if (start > c)
		return (news = (char *)ft_calloc(sizeof(char), 1));
	if (!len || !s)
		return (news = (char *)ft_calloc(sizeof(char), 1));
	news = (char *)ft_calloc(sizeof(char), len);
	if (!news)
		return (NULL);
	ft_strlcpy(news, s + start, len + 1);
	return (news);
}
