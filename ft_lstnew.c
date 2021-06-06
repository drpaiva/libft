/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 10:56:04 by dramos-p          #+#    #+#             */
/*   Updated: 2021/06/06 15:46:43 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *elem;
	
	elem = ft_calloc(sizeof(t_list), 1);
	if (elem)
		return (NULL);
	elem->content = content;
	return (elem);
}
