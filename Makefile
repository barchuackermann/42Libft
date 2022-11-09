# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 18:56:29 by bcriscim          #+#    #+#              #
#    Updated: 2022/11/09 12:23:42 by bcriscim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
		ft_memchr.c	\
		ft_strchr.c	\
		ft_strlcpy.c \
		ft_strrchr.c \
		ft_atoi.c \
		ft_isascii.c \
		ft_memcmp.c	\
		ft_strlen.c	\
		ft_bzero.c \
		ft_isdigit.c \
		ft_memcpy.c	\
		ft_isprint.c \
		ft_memmove.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_isalnum.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strtrim.c

OBJS = $(SRCS:.c=.o)
CC = gcc
CC_FLAGS = -Wall -Werror -Wextra
RM_RF = rm -rf
NAME = libft.a
INCLUDE = libft.h

$(NAME): $(OBJS) $(INCLUDE)
	ar -crs $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) -c $(CC_FLAGS) $< -o $@

clean:
	$(RM_RF) $(OBJS)
fclean: clean
	$(RM_RF) $(OBJS) $(LIBNAME) $(BASIC_NAME) $(BONUS_NAME)
re: fclean all
.PHONY: clean fclean all re

all: $(NAME)
