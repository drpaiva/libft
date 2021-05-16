/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 00:15:45 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/16 16:00:01 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void *ft_memset(void * ptr, int value, size_t num);
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

#endif