/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:58:03 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/27 15:41:22 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	int	c;
	if (c >= 97 || c <= 122)
		c = c - 32;
}

int main()
{
    char c, result;

    c = 'M';
    result = ft_toupper(c);
    printf("tolower(%c) = %c\n", c, result);

    c = 'm';
    result = ft_toupper(c);
    printf("tolower(%c) = %c\n", c, result);

    c = '+';
    result = ft_toupper(c);
    printf("tolower(%c) = %c\n", c, result);

    return 0;
}