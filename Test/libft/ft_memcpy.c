/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:31:10 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/02 15:43:30 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	i;

	i = 0;
	if (!num || dest == src)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < num)
	{
		((unsigned char *)dest)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dest);
}
