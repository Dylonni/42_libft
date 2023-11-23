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

SRC_MAIN			=   src/ft_isalnum.c \
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

SRCS			= ${SRC_MAIN}

BONUS			= 	bonus/ft_lstadd_front.c \
					bonus/ft_lstadd_back.c \
					bonus/ft_lstlast.c \
					bonus/ft_lstnew.c \
					bonus/ft_lstsize.c \
					bonus/ft_lstdelone.c \
					bonus/ft_lstclear.c \
					bonus/ft_lstiter.c \
					bonus/ft_lstmap.c
					
SRCS_BONUS		= ${BONUS}

OBJ_DIR			= objs
BONUS_OBJ_DIR		= bonus_objs
OBJS			= $(patsubst src/%.c,$(OBJ_DIR)/%.o,$(SRCS))
BONUS_OBJS		= $(patsubst bonus/%.c,$(BONUS_OBJ_DIR)/%.o,$(SRCS_BONUS))

CC			= gcc
RM			= rm -f
CFLAGS			= -Wall -Werror -Wextra -I.

NAME		    	= libft.a

all: $(OBJ_DIR) $(OBJS) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	
$(BONUS_OBJ_DIR):
	@mkdir -p $(BONUS_OBJ_DIR)

$(OBJ_DIR)/%.o: src/%.c | $(OBJ_DIR)
	@mkdir -p $(@D)
	@printf '\033[A\033[19C'"⌛ [\e[1;96mCompiling\033[0m]\033[35m $<\033[0m \n"
	@$(CC) $(CFLAGS) -c $< -o $@

$(BONUS_OBJ_DIR)/%.o: bonus/%.c | $(BONUS_OBJ_DIR)
	@mkdir -p $(@D)
	@printf '\033[A\033[19C'"⌛ [\e[1;96mCompiling BONUS\033[0m]\033[35m $<\033[0m \n"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
			@ar rcs $(NAME) $(OBJS)
			@printf '\033[A\033[20C'"\033[32;1m  ✅ Project has compiled successfully!          \033[0m"
			@printf "\n\n    [🏳️ FLAGS: \033[0;35m$(CFLAGS)\033[0m]"
			@echo "\033[32;1m\n 📚 Library \e[7m$(NAME)\e[27m has been created in: \n    └─ 📂 \033[4;36m ~ $(PWD)\033[0m"

bonus:			$(OBJS) $(BONUS_OBJS)
			@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
			@printf '\033[A\033[20C'"\033[32;1m  ✅ Project has compiled successfully!          \033[0m"
			@printf "\n\n    [🏳️ FLAGS: \033[0;35m$(CFLAGS)\033[0m]"
			@echo "\033[32;1m\n 📚 Library \e[7m$(NAME)\e[27m has been created in: \n    └─ 📂 \033[4;36m ~ $(PWD)\033[0m"

clean:
	$(RM) -r $(OBJ_DIR) $(BONUS_OBJ_DIR)

fclean:
	@echo "\033[1;93m\n                        [Cleaning directories with \033[0;96mfclean\033[1;93m]\n\033[0m"
	@make clean
	$(RM) $(NAME) $(NAME_BONUS)

re:	
	@make fclean
	@echo "\033[1;93m\n                            [Calling \033[0;96mmake all\033[1;93m rule]\n\033[0m"
	@make -s all

		

.PHONY:	all clean fclean re bonus
