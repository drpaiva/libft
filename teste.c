/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-p <dramos-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 14:43:39 by dramos-p          #+#    #+#             */
/*   Updated: 2021/05/16 17:34:37 by dramos-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
#include <stddef.h>
void *ft_memcpy(void *dst, const void *src, size_t len)
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

void print_elements(char *array, int size)
{
  int i;
  printf ("Elements : ");
  for (i = 0; i < size; i++) {
    printf ("%c, ", array[i]);
  }
  printf (" ");
}
int main(int argc, char* argv[])
{
  char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  print_elements(c_array, sizeof(c_array));
  printf("After memcpy()\n");
  memcpy((void *)&c_array[5], (void *)&c_array[3], 5);
  print_elements(c_array, sizeof(c_array));
}