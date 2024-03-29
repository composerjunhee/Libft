/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:32:01 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/31 15:06:08 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t num)
{
    size_t  i;
    i = 0;
    unsigned char *buff = malloc(num);

    while(i < num)
    {
        buff[i] = ((unsigned char*)src)[i];
        i++;
    }

    i = 0;

    while (i < num)
    {
        ((unsigned char*)dest)[i] = ((unsigned char*)buff)[i];
        i++;
    }

    free(buff);
    buff = NULL;
    
    return(dest);
}

int main(void)
{
    char str[32] = "hello world";

    ft_memmove(&str[6], &str[0], 12);

    printf("%s", str);

    return (0);
}
