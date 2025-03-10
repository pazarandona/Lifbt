# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pazarand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 11:02:54 by pazarand          #+#    #+#              #
#    Updated: 2023/11/10 17:04:20 by pazarand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


SRCS =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_strlen.c \
		ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_memset.c \
		ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strnstr.c ft_strlcat.c ft_atoi.c ft_strncmp.c ft_calloc.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_strdup.c ft_itoa.c ft_split.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_split.c


CC = gcc
CFLAGS = -Wall -Werror -Wextra
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs  $(NAME) $(OBJS)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
