/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:17:27 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/31 11:39:43 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t strlen(const char *str);

int main(void)
{
    char buf[10] = "hello";
    size_t len = 0;

    len = strlen(buf);
    
    printf("len : %zu", len);

    return (0);
}

size_t strlen(const char *str)
{
    size_t len = 0;

    while (str[len] != '\0')
        ++len;
    return len;

}