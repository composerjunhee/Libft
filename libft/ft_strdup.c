/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:54:04 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/01 11:07:36 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*char *strdup(const char *s)
{

}*/

int main ()
{
   char *ptr;
   ptr = strdup("Hello World");
   printf("%s\n", ptr);

   free(ptr);

   return (0);

}