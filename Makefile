# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kada-sil <kada-sil@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 23:11:22 by kada-sil          #+#    #+#              #
#    Updated: 2021/10/09 13:31:48 by kada-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_strrchr.c ft_atoi.c\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_calloc.c\
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strdup.c\
		ft_strncmp.c ft_tolower.c ft_toupper.c ft_strnstr.c\
		ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c\
		ft_putstr_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

OBJ = $(SRC:.c=.o)

NAME = libft.a
CC = clang
CFLAGS =  -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)
$(NAME):	$(OBJ)
		@ar -rcs $(NAME) ${OBJ}
		
clean:
		@rm -f ${OBJ}
		
fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
