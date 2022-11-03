/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:37:34 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/03 12:15:00 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len);
/*{
	size_t	nlen;
	size_t	hlen;
	size_t	size;

	if (*needle == '\0')
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	hlen = ft_strlen(haystack);
	if (hlen < nlen || len < nlen)
		return (0);
	size = hlen > len ? len : hlen;
	while (size-- >= nlen)
	{
		if(ft_memcmp(haystack, needle, nlen) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}*/
