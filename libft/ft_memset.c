/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:25:42 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/28 15:05:01 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int value, size_t num)
{
    size_t i = 0;
    for (i=0; i<num; ++i)
    {
        ((unsigned char*)ptr)[i] = (unsigned char) value;
    }
    return (ptr);
}


int main(void)
{
    int i = 0;
    int arr[12];

    ft_memset(arr, 1, 10*sizeof(int));
    for (i=0; i<12; i++)
        printf("%d\n", arr[i]);
}