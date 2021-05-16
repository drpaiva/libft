/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:43:39 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/16 17:11:41 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
#include <stddef.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	while (len)
	{
		((char *)dst)[i - len] = ((char *)src)[i - len];
		len--;
	}
	
}

#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[] = "123456789";
	// dst = 1234
	// src = 34567
// memcpy = 	123445678
// memmove = 	123445678
	memcpy(str1+4,str1+3,5);
	// puts (str1);
	printf("%s", str1);

	// char Like[10] = { "ILikeYou" };
	// char Hate[10] = { "IHateYou" };
	// char str[] = "12345678";

	// printf("memmove before : %s\n", Like);
	// ft_memmove(Like + 1, Hate + 1, 4);
	// printf("memmove after : %s\n", Like);

	// printf("memmove before : %s\n", str);
	// ft_memmove(str+3, str +1, 3);
	// printf("memmove after : %s\n", str);

  return 0;
}