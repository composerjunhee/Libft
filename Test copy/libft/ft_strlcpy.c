/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:36:07 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/02 17:09:38 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (*(src + len))
		len++;
	while (*(src + i) && i < size - 1 && size != 0)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (size > 0)
		*(dst + i) = '\0';
	return (len);
}
