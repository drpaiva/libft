/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 23:02:07 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/24 00:11:42 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, size_t start, size_t len)
{
	char *news;
	// size_t t;

	// *s + start;
	if (!len)
		return (0);
	news = malloc(sizeof(char) * len);
	if (!news)
		return (0);
	ft_strlcpy(news, s + start, len);
	return (news);
}
// #include <stdio.h>
// int main()
// {
// 	char	*str = "i just want this part #############";
// 	size_t	size = 22;

// 	char	*ret = ft_substr(str, 0, size);
// 	printf("%s",ret);
// 	// if (!strncmp(ret, str, size)) {
// 	// 	free(ret);
// 	// }
// 	return 0;
// }
