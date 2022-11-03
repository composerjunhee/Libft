/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:33:44 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/31 18:13:58 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int ch)
{
    const char *p = str;
    while(*p != '\0')
        p++;

    while(*p != (char)ch && p != str)
		p--;

    if(*p != (char)ch)
        return NULL;
    		
	return (char *)p;
}

int main(void)
{
	char string[] = "akjkjakjkakanajnnjananjgabhvhvhavhvhaha";
	char *p = ft_strrchr(string, 'a');
	printf("%p\n", p);
	printf("%p\n", &string[0]);
    
    while (p != NULL)
    {
        *p = '\0';
        p = ft_strrchr(string, 'a');
        printf("%p\n", p);
    }

	return (0);   
}