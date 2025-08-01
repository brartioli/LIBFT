# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/17 13:01:12 by bfernan2          #+#    #+#              #
#    Updated: 2025/08/01 16:07:47 by bfernan2         ###   ########.fr        #
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
ft_strdup.c ft_strnstr.c ft_calloc.c \
ft_substr.c ft_putchar_fd.c ft_strjoin.c \
ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
ft_strtrim.c ft_strmapi.c ft_striteri.c \
ft_split.c ft_itoa.c 

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c ft_lstlast_bonus.c

BONUS_OBJS = ${BONUS_SRCS:.c=.o}

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)


$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

bonus: $(NAME) $(BONUS_OBJS)
	ar r $(NAME) $(BONUS_OBJS)

re: fclean all

.PHONY: all clean fclean re bonus