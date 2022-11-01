/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:35:40 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/01 16:01:37 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *lhs, const void *rhs, size_t count);
/*{
    int r;
    int i;
    i = 0;
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
}*/