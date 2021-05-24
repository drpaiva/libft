/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 06:49:31 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/23 21:09:56 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stddef.h>
int	ft_atoi(const char *str)
{
	size_t	res;
	size_t	sign;
	size_t	i;

	res = 0;
	sign = 0;
	i = 0;
	while (str[i] <= 13 && str[i] >= 9 && str[i] != 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if ((sign % 2) == 0)
		return (res);
	else
		return (-res);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char	*n = "\t\v\f\r\n \f-06050";

	int		i1 = atoi(n);
	int		i2 = ft_atoi(n);
	if (i1 == i2)
		printf("deu bom | %d | %d |\n", i1, i2);

	n = "\e06050";

	i1 = atoi(n);
	i2 = ft_atoi(n);
	if (i1 == i2)
		printf("deu bom | %d | %d |\n", i1, i2);
	else
		printf("deu ruim | %d | %d |\n", i1, i2);

	n = "\t\v\f\r\n \f- \f\t\n\r    06050";
	i1 = atoi(n);
	i2 = ft_atoi(n);
	if (i1 == i2)
		printf("deu bom | %d | %d |\n", i1, i2);
	else
		printf("deu ruim | %d | %d |\n", i1, i2);

	n = "-123THERE IS A NYANCAT UNDER YOUR BED";
	i1 = atoi(n);
	i2 = ft_atoi(n);
	if (i1 == i2)
		printf("deu bom | %d | %d |\n", i1, i2);
	else
		printf("deu ruim | %d | %d |\n", i1, i2);
}