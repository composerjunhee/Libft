/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:16:16 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/31 11:37:32 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		++len;
	}
	return (len);
}

int main(void)
{
    char buf[10] = "hello";
    size_t len = 0;

    len = strlen(buf);
    
    printf("len : %zu", len);

    return (0);
}
