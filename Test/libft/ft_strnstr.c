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

int find_str(const char *str, const char *to_find, int n)
{
	str +=n;

	while (*to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (1);
}

char *ft_strnstr(const char *str, const char *to_find, size_t n)
 {
     size_t  i;

     i = 0;

     if (!*to_find)
         return ((char *)str);

     if (!n)
         return (0);

     if (!*str)
         return (0);

     while ((str[i] != 0) && (i <= (n - ft_strlen(to_find))))
     {
         if (find_str(str, to_find, i) == 1)
             return ((char *)str + i);
         i++;
     }

    return (0);
 }
/*char *ft_strnstr(const char *haystack, const char *needle, size_t len);
{
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
