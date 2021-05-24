/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 23:02:07 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/24 00:30:06 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*news;

	if (!len)
		return (0);
	news = malloc(sizeof(char) * len + 1);
	if (!news)
		return (0);
	ft_strlcpy(news, s + start, len + 1);
	return (news);
}
