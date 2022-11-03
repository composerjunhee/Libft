/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:36:07 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/31 11:57:19 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t *ft_strlcpy(char *dst, const char *src, size_t size)
{
  size_t  i;
  size_t  tmp;

  i = 0;
  tmp = ft_strlen(src);
  if (!dst || !src)
    return (0);
  while (i < tmp && i + 1 < size)
  {
    dst[i] = src[i];
    ++i;
  }
  if (size > 0)
    dst[i] = '\0';
  return (tmp);
}