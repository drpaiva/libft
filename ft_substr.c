/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 23:02:07 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/26 02:02:09 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*news;
	unsigned int	c;

	c = ft_strlen(s);
	if (start >= c)
	{
		news = (char *)malloc(1);
		return (news);
	}
	if (!len || !s)
		return (0);
	news = (char *)malloc(sizeof(char) * len + 1);
	if (!news)
		return (0);
	ft_bzero(news, len + 1);
	ft_strlcpy(news, s + start, len + 1);
	return (news);
}
