/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:54:04 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/02 12:02:01 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	str_len;
	char	*result;

	str_len = ft_strlen(s);
	if (!(result = (char *)malloc(sizeof(char) * (str_len + 1))))
		return (0);
	while (*s != '\0')
		*result++ = *s++;
	*result = '\0';
	return (result - str_len);
}
