/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:34:26 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/31 16:54:38 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char *ft_strchr(const char *str, int ch)
{
	char *r = NULL;
	while(*str != (char)ch && *str != '\0')
		str++;
	if (*str == (char)ch)
		r = (char*)str;
		
	return r;
}*/

char *ft_strchr(const char *str, int ch)
{
	while(*str != (char)ch && *str != '\0')
		str++;
	if (*str != (char)ch)
		return (NULL);		
	return (char *)str;
}

int main(void)
{
	char *string = "abc";
	char *p = ft_strchr(string, 'c');
	printf("%p\n", p);
	printf("%p\n", &string[2]);
	return (0);
}