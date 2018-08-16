# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdiaz <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/09 11:22:32 by tdiaz             #+#    #+#              #
#    Updated: 2018/07/17 20:26:28 by tdiaz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = @gcc

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_strlen.c ft_putchar.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	  ft_memmove.c ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c ft_strnew.c \
	  ft_strdel.c ft_strclr.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
	  ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
	  ft_strcat.c ft_strncat.c ft_strlcat.c ft_strrchr.c ft_strchr.c ft_strstr.c \
	  ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	  ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_striter.c ft_strmap.c \
	  ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
	  ft_itoa.c ft_striteri.c ft_strnstr.c ft_strsplit.c ft_lstnew.c ft_lstdelone.c \
	  ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c vect_new.c vect_add.c \
	  vect_free.c ft_printf.c itoa_base.c unicode.c wchar_funt.c \
	  flags.c concheck.c prt_cws.c octhex.c clouds.c iu_prt.c get_next_line.c

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

.PHONY: clean fclean all re

all: $(NAME)

clean: 
		@rm -f *.o

fclean: clean
		@rm -f $(NAME)

re: fclean all
