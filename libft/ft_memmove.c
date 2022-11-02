/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:32:01 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/01 15:18:15 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t num)
{
    size_t i;

    if (dest == NULL && src == NULL)
        return (NULL);
    if (dest < src)
    {
        i = 0;
        /* src의주소가  dest 보다 큰 값이면,
        src의 처음부터 count 만큼 dest에 복사한다.
        src를 한 byte 씩 복사하더라도 dest 보다 큰 위치에 있기 때문에,
        오버랩되더라도 src를 dest에 정상 복사 가능*/
        while (i < num)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    else
    {
        /*src 의 주소가 dest 보다 작은 값이면,
        src의 마지막 데이터부터 한바이트씩 dest의 마지막 바이트부터
        순서대로 복사한다.*/
        i = num;
        while (i)
        {
            ((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];
            i--;
        }
    }
    return (dest);
}
