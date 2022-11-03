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

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dstlen;
    size_t srclen;
    size_t i;

    i = 0;
    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    if (size <= dstlen)
        return (srclen + size);
    while (src[i] && dstlen + i + 1 < size)
    {
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[dstlen + i] = '\0';
    return (srclen + dstlen);
}