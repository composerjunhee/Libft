/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:28:29 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/28 11:28:34 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, const char *src)
{
  size_t i = 0;

  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}
int main(void)
{
  char buf[10] = {0};
  char *string = "hello";

  ft_strcpy(buf, string);

  printf("%s", buf);
}