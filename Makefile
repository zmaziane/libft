# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmaziane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 20:08:51 by zmaziane          #+#    #+#              #
#    Updated: 2021/11/24 20:23:48 by zmaziane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

SRC =		ft_memset.c	\
			ft_bzero.c 		\
			ft_memcpy.c 	\
			ft_memmove.c 	\
			ft_memchr.c 	\
			ft_memcmp.c 	\
			ft_strlen.c 	\
			ft_strlcpy.c 	\
			ft_strlcat.c 	\
			ft_strchr.c 	\
			ft_strrchr.c 	\
		   	ft_strnstr.c 	\
		   	ft_strncmp.c 	\
			ft_atoi.c 		\
			ft_isalpha.c 	\
			ft_isdigit.c 	\
			ft_isalnum.c 	\
			ft_isascii.c 	\
			ft_isprint.c 	\
			ft_toupper.c 	\
			ft_tolower.c 	\
			ft_calloc.c 	\
			ft_strdup.c 	\
		   	ft_putnbr_fd.c 	\
		   	ft_putchar_fd.c \
			ft_putstr_fd.c 	\
			ft_strjoin.c 	\
			ft_putendl_fd.c \
			ft_substr.c 	\
			ft_strmapi.c 	\
			ft_striteri.c 	\
			ft_strtrim.c 	\
			ft_itoa.c 		\
			ft_split.c 		\

OBJECTS = $(SRC:%.c=%.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

%.o: %.c libft.h
	gcc -c $(CFLAGS) $< -o $@
clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
