# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkwak <jkwak@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 09:46:06 by jkwak             #+#    #+#              #
#    Updated: 2022/06/24 09:34:52 by jkwak            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
BONUS		= checker

LIBFT		= libft.a
LIBFT_DIR	= libft

SRCS		= indexing.c \
			  parsing_utils.c \
			  parsing.c \
			  push_command.c \
			  push_swap.c \
			  reverse_rotate_command.c \
			  rotate_command.c \
			  sort_3.c \
			  sort_5.c \
			  sort_more.c \
			  sort_start.c \
			  split_4_ps.c \
			  stack.c \
			  swap_command.c \
			  terminate.c
OBJS		= $(SRCS:.c=.o)

SRCS_B		= checker.c \
			  indexing.c \
			  parsing.c \
			  parsing_utils.c \
			  push_command.c \
			  reverse_rotate_command.c \
			  rotate_command.c \
			  sort_start.c \
			  sort_3.c \
			  sort_5.c \
			  sort_more.c \
			  split_4_ps.c \
			  stack.c \
			  swap_command.c \
			  terminate.c
OBJS_B		= $(SRCS_B:.c=.o)

CC			= cc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -rf

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

bonus : $(BONUS)

$(LIBFT) :
		make -C $(LIBFT_DIR)
		cp $(LIBFT_DIR)/$(LIBFT) .

$(NAME) : $(OBJS) $(LIBFT)
		$(CC) $(CFLAGS) -o $@ $^

$(BONUS) : $(OBJS_B) $(LIBFT)
		$(CC) $(CFLAGS) -o $@ $^

clean :
		$(RM) $(OBJS) $(OBJS_B)
		make clean -C $(LIBFT_DIR)

fclean : clean
		$(RM) $(NAME) $(BONUS) $(LIBFT)
		make fclean -C $(LIBFT_DIR)

re :
		make fclean
		make all

.PHONY : all clean fclean re