# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junheeki <junheeki@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 11:55:04 by junheeki          #+#    #+#              #
#    Updated: 2022/10/27 16:55:35 by junheeki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_atoi.c srcs/ft_bzero.c srcs/ft_isalnum.c srcs/ft_isalpha.c srcs/ft_isascii.c srcs/ft_isdigit.c srcs/ft_isprint.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_memset.c srcs/ft_strchr.c srcs/ft_strlcat.c srcs/ft_strlcpy.c srcs/ft_strlen.c srcs/ft_strncmp.c srcs/ft_strnstr.c srcs/ft_strrchr.c srcs/ft_tolower.c srcs/ft_toupper.c srcs/ft_calloc.c srcs/ft_strdup.c
OBJ = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_calloc.o ft_strdup.o
Includes = includes/header.h

all: $(NAME)

$(NAME): $(SRC)
	gcc -Wall -Wextra -Werror -c $(SRC) $(Includes)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
