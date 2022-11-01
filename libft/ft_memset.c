/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:25:42 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/01 16:15:38 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int value, size_t num)
/*Sets the first num bytes of the block of memory pointed by ptr to the secified value 
(interpreted as an unsigned char)*/
{
    size_t i;
    i = 0;
    while (i < num)
    {
        ((unsigned char*)ptr)[i] = (unsigned char) value;
        i++;
    }
    return (ptr);
}