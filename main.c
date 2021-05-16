/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 00:26:25 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/14 21:02:42 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	printf("\n ============== \n ft_memset \n ============== \n");
	// char *str;
	int c;
	c = 5;
	c = 4;
	printf("%d",c);
    // str = "ola seja bem vindo a mais uma lista"; 
	char str[] = "ola seja bem vindo a mais uma lista";
	// str[]="asdfasfadsf"
    ft_memset(str,'-',6);
    printf("%s\n", str);

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