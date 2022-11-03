/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:46:09 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/01 15:04:10 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
# define _LIBFT_H_

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int     ft_atoi(int c);
void    ft_bzero(void *s, size_t n);
int     ft_calloc(int c);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memchr(const void *ptr, int ch, size_t count);
void    *ft_memcpy(void *dest, const void *src, size_t num);
int     ft_memcmp(const void *lhs, const void *rhs, size_t count);
void    *ft_memmove(void *dest, const void *src, size_t num);
void    *ft_memset(void *ptr, int value, size_t num);
char    *ft_strchr(const char *str, int ch);
char    *strdup(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  *ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *s);
int     ft_strncmp(int c);
char    *ft_strrchr(const char *str, int ch);
int     ft_strnstr(int c);
int     ft_strnchr(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);

#endif
