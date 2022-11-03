/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:33:39 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/31 18:30:51 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h" */
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, const char *src, size_t num)
{
    size_t i;
    i = 0;

    while (i < num)
    {
        dest[i] = src[i];
        i++;

        if (src[i] == '\0')
        {
            break;
        }
    }
    return (dest);    
}

int main(void)
{
    char str[8] = {'\0'};
    char *hello = "hello world";

    ft_strncpy(str, hello, 7);
    str[7] = '\0';

    printf("%s", str);
    
    return (0);
}