/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:46:09 by junheeki          #+#    #+#             */
/*   Updated: 2022/11/02 17:20:42 by junheeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
# define _LIBFT_H_

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *ptr, int ch, size_t count);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t num);
int		ft_memcmp(const void *s1, const void *s2, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void *ptr, int value, size_t num);
char	*ft_strchr(const char *str, int ch);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strnchr(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
