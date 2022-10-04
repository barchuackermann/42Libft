# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcriscim <bcriscim@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 18:56:29 by bcriscim          #+#    #+#              #
#    Updated: 2022/09/27 19:28:16 by bcriscim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS: ft_isalpha.c \
		ft_memchr.c	\
		ft_putchar_fd.c \
		ft_strchr.c	\
		ft_strlcpy.c \
		ft_strrchr.c \
		ft_atoi.c \
		ft_isascii.c \
		ft_memcmp.c	\
		ft_putendl_fd.c	\
		ft_strdup.c	\
		ft_strlen.c	\
		ft_strtrim.c \
		ft_bzero.c \
		ft_isdigit.c \
		ft_memcpy.c	\
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_substr.c \
		ft_calloc.c	\
		ft_isprint.c \
		ft_memmove.c \
		ft_putstr_fd.c \
		ft_strjoin.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_isalnum.c \
		ft_itoa.c \
		ft_memset.c \
		ft_split.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_toupper.c \

BONUS_SRC = // Acá faltan el SRC con los BONUS

OBJS: $(SRCS: .c=.o)

BONUS_OBJS: $(BONUS_SRC: .c=.o)

CC = gcc

CC_FLAGS = -Wall -Werror -Wextra
RM_RF = rm -rf
NAME = libft 
LIBNAME = libft.a
BASIC_NAME = .basic // Acá va el NAME de los archivos BASIC
BONUS_NAME = .bonus // Acá va el NAME de los archivos BONUS

all: $(NAME)
	$(NAME): $(BASIC_NAME) // llama a la función de los archivos comunes
$(BASIC_NAME):	$(OBJS)
	ar crs $(LIBNAME) $(OBJS) // La c hace que los archivos se creen sin mensaje de información. La r reeemplaza o agrega los ficheros al archivo especificado. La s no la entiendo.
	rm -f $(BONUS_NAME) //Esto creo que es para evitar el relink
	touch $(BASIC_NAME) // Vinculado con lo de arriba
bonus: $(BONUS_NAME)
clean:
	$(RM_RF) $(OBJS) $(BONUS_OBJS)
fclean: clean
	$(RM_RF) $(OBJS) $(LIBNAME) $(BASIC_NAME) $(BONUS_NAME)
re: fclean all
.PHONY: clean fclean all bonus re
