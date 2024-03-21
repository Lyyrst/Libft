# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbutor-b <kbutor-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 14:18:26 by kbutor-b          #+#    #+#              #
#    Updated: 2024/02/13 14:45:28 by kbutor-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADERS = src/libft.h src/get_next_line.h

CFILES = src/ft_atoi.c \
			src/ft_bzero.c \
			src/ft_calloc.c \
			src/ft_isalnum.c \
			src/ft_isalpha.c \
			src/ft_isascii.c \
			src/ft_isdigit.c \
			src/ft_isprint.c \
			src/ft_itoa.c \
			src/ft_memchr.c \
			src/ft_memcmp.c \
			src/ft_memcpy.c \
			src/ft_memmove.c \
			src/ft_memset.c \
			src/ft_putchar_fd.c \
			src/ft_putendl_fd.c \
			src/ft_putnbr_fd.c \
			src/ft_putstr_fd.c \
			src/ft_split.c \
			src/ft_strchr.c \
			src/ft_strdup.c \
			src/ft_striteri.c \
			src/ft_strjoin.c \
			src/ft_strlcat.c \
			src/ft_strlcpy.c \
			src/ft_strlen.c \
			src/ft_strmapi.c \
			src/ft_strncmp.c \
			src/ft_strnstr.c \
			src/ft_strrchr.c \
			src/ft_strtrim.c \
			src/ft_substr.c \
			src/ft_tolower.c \
			src/ft_toupper.c \
			src/ft_lstnew.c \
			src/ft_lstadd_front.c \
			src/ft_lstsize.c \
			src/ft_lstlast.c \
			src/ft_lstadd_back.c \
			src/ft_lstdelone.c \
			src/ft_lstclear.c \
			src/ft_lstiter.c \
			src/ft_lstmap.c \
			src/ft_printf.c \
			src/put.c \
			src/print_p.c \
			src/print_str.c \
			src/get_next_line.c \
			src/get_next_line_utils.c \
			src/is_sign.c \
			src/ft_atol.c
			
OFILES = $(CFILES:.c=.o)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
	
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean :
	rm -rf $(OFILES)

fclean : clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY :
	all clean fclean re
