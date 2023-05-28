# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dylan <dylan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 09:14:02 by daumis            #+#    #+#              #
#    Updated: 2023/05/28 19:15:17 by dylan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=   src/ft_isalnum.c \
					src/ft_isprint.c \
					src/ft_memcmp.c \
					src/ft_putchar_fd.c \
					src/ft_memset.c \
					src/ft_strlcat.c \
					src/ft_strncmp.c \
					src/ft_substr.c \
					src/ft_atoi.c \
					src/ft_isalpha.c \
					src/ft_itoa.c \
					src/ft_memcpy.c \
					src/ft_putendl_fd.c \
					src/ft_strchr.c \
					src/ft_strlcpy.c \
					src/ft_memchr.c \
					src/ft_strnstr.c \
					src/ft_tolower.c \
					src/ft_bzero.c \
					src/ft_isascii.c \
					src/ft_isdigit.c \
					src/ft_memmove.c \
					src/ft_putnbr_fd.c \
					src/ft_strdup.c \
					src/ft_strlen.c \
					src/ft_toupper.c \
					src/ft_putstr_fd.c \
					src/ft_strjoin.c \
					src/ft_strmapi.c \
					src/ft_calloc.c \
					src/ft_strrchr.c \
					src/ft_split.c \
					src/ft_striteri.c \
					src/ft_strtrim.c \
					src/ft_handlehex.c \
					src/ft_handlei.c \
					src/ft_handleu.c \
					src/ft_putchar.c \
					src/ft_putstr.c \
					src/ft_printf.c \
					src/get_next_line.c

BONUS			= 	bonus/ft_lstadd_front.c \
					bonus/ft_lstadd_back.c \
					bonus/ft_lstlast.c \
					bonus/ft_lstnew.c \
					bonus/ft_lstsize.c \
					bonus/ft_lstdelone.c \
					bonus/ft_lstclear.c \
					bonus/ft_lstiter.c \
					bonus/ft_lstmap.c

OBJS			= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS:.c=.o)

CC			    = gcc
RM				= rm -f
CFLAGS			= -Wall -Werror -Wextra -I.

NAME		    = libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

bonus:          $(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:				
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@		

.PHONY:			all clean fclean re bonus
