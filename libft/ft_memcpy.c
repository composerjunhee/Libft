/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:31:10 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/31 16:02:00 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t num)
{
    size_t  i;
    i = 0;
    
    while (i < num)
    {
        ((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return(dest);
}
int main(void)
{
    char *str = "hello world";
    char arr[32] = {'\0'};

    ft_memcpy(arr, str, 10);
    arr[10]='\0';
    printf("%s", arr);

    return (0);
}

