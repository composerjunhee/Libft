/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:35:22 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/01 15:17:36 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *ptr, int ch, size_t count)
{
    const unsigned char *p = (const unsigned char*) ptr;
    while (p < (const unsigned char*)ptr + count && *p != ch)
    {
        p++;
    }

    if (p < (const unsigned char*)ptr + count)
        return (void*)p;
    else
        return NULL;    
}