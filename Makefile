# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/17 13:01:12 by bfernan2          #+#    #+#              #
#    Updated: 2025/07/23 15:11:13 by bfernan2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memcpy.c ft_memset.c ft_bzero.c\
ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isprint.c \
ft_strlen.c ft_tolower.c ft_toupper.c\
ft_memmove.c ft_strlcpy.c ft_strchr.c \
ft_strlcat.c ft_strrchr.c ft_memchr.c \
ft_memcmp.c ft_strncmp.c ft_atoi.c \
ft_strdup.c


CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)


$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus