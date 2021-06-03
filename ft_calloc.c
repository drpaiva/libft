/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:51:17 by dramos-p          #+#    #+#             */
/*   Updated: 2021/06/03 12:40:17 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char    *pointer;

    pointer = malloc(count * size);
    if (pointer == NULL)
        return (NULL);
    ft_bzero(pointer, count * size);
    return (pointer);
}
