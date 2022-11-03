/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:18:53 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/31 14:21:37 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *ptr, int value, size_t len)
{
    size_t i;
    i = 0;
    while (i < len)
    {
        ((unsigned char*)ptr)[i] = (unsigned char) value;
        i++;
    }

    return (ptr);
}