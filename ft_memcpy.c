/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:26:26 by vmabuza           #+#    #+#             */
/*   Updated: 2019/05/31 15:49:18 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest,void *src, unsigned int n)
{
	size_t i;
	char *csrc;
	char *cdest;

	i = 0;
	csrc = src;
	cdest = dest;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
}

/*int main()
{
	char a[] = "something";
	char b[50];
	ft_memcpy(b, a, 50);
	printf("%s\n", b);
	printf("%s", memcpy(b, a, 50));
	return (0);
}*/