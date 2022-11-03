/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:36:20 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/03 12:12:16 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	i = 0;

	while (*(src + i) && dst_length + i + 1 < dstsize)
	{
		*(dst + dst_length + i) = *(src + i);
		i++;
	}
	*(dst + dst_length + i) = '\0';
	if (dstsize < dst_length)
		return (src_length + dstsize);
	return (src_length + dst_length);
}
