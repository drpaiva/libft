/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 00:26:25 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/18 19:03:24 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	char Like[10] = { "ILikeYou" };
	char Hate[10] = { "IHateYou" };
	char str[] = "12345678";

	printf("memmove before : %s\n", Like);
	ft_memmove(Like + 1, Hate + 1, 4);
	printf("memmove after : %s\n", Like);

	printf("memmove before : %s\n", str);
	ft_memmove(str+3, str +1, 3);
	printf("memmove after : %s\n", str);

	// printf("\n ============== \n ft_memset \n ============== \n");
	// // char *str;
	// int c;
	// c = 5;
	// c = 4;
	// printf("%d",c);
    // // str = "ola seja bem vindo a mais uma lista"; 
	// char str[] = "ola seja bem vindo a mais uma lista";
	// // str[]="asdfasfadsf"
    // ft_memset(str,'-',6);
    // printf("%s\n", str);

	// printf("\n ============== \n ft_memset \n ==============");
	// str = "memcpy test!";
	// char str1[30];
	// char str2[30];
	// int len = strlen(str);
	// ft_memcpy(str1, str, len + 1);
	// ft_memcpy(str2, "copy", 5);
	// printf("str: %s\nstr1 : %s\nstr2: %s\n",(char *)str,str1,str2);

    return (0);
}