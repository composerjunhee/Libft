/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:35:40 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/28 16:49:16 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *lhs, const void *rhs, size_t count)
{
    int r;
    int i = 0;
    while(i != count && ((unsigned char*)lhs)[i] == ((unsigned char*)rhs)[i])
    {
        ++i;
    }
    
    if (i == count)
        r = 0;    
    else if (((unsigned char*)lhs)[i] > ((unsigned char*)rhs)[i])
        r = 1;
    else if (((unsigned char*)lhs)[i] < ((unsigned char*)rhs)[i])
        r = -1;

    return (r);
}

int main(void)
{
    unsigned char buff1[3] = {1, 2, 3};
    unsigned char buff2[3] = {1, 2, 3}; 

    int r = ft_memcmp(buff1, buff2 , 3);
    printf("%d", r);

    return (0);
}