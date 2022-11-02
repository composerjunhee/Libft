/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:36:20 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/01 12:35:08 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dst_length;
	unsigned int	src_length;
	unsigned int	index;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	index = 0;
	while (*(src + index) && dst_length + index + 1 < dstsize)
	{
		*(dst + dst_length + index) = *(src + index);
		++index;
	}
	*(dst + dst_length + index) = '\0';
	if (dstsize < dst_length)
		return (src_length + dstsize);
	return (src_length + dst_length);
}
