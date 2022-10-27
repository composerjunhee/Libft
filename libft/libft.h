/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:46:09 by junheeki          #+#    #+#             */
/*   Updated: 2022/10/27 16:39:26 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
# define _LIBFT_H_

# include <stdio.h>
# include <unistd.h>
# include <string.h>

int ft_atoi(int c);
int ft_bzero(int c);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_memchr(int c);
int ft_memcmp(int c);
int ft_memcpy(int c);
int ft_memmove(int c);
int ft_memset(int c);
int ft_strchr(int c);
int ft_strlcat(int c);
int ft_strlcpy(int c);
int ft_strlen(int c);
int ft_strncmp(int c);
int ft_strnstr(int c);
int ft_strnchr(int c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
