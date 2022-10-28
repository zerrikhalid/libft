# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 22:15:55 by kzerri            #+#    #+#              #
#    Updated: 2022/10/28 20:39:10 by kzerri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = libft.a

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

LIBFTH = libft.h

AR = ar rcs

SRCS = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
	ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c\
	ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memcpy.c ft_putnbr_fd.c ft_strlen.c\
	ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c\
	ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_strchr.c ft_striteri.c\
	ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c

SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
	
OBJ_M = $(SRCS:.c=.o)

OBJ_B = $(SRCB:.c=.o)

$(NAME): $(OBJ_M) 
	$(AR) $(NAME) $(OBJ_M)

%o:%c $(LIBFTH)
	$(CC) $(CFLAGS) -c $<

all: $(NAME)

bonus: $(OBJ_B)
	$(AR) $(NAME) $(OBJ_B)

clean:
	$(RM) $(OBJ_M) $(OBJ_B)

fclean: clean
		$(RM) $(NAME)

re: fclean bonus all