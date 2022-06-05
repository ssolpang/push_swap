# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkwak <jkwak@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 10:59:19 by jkwak             #+#    #+#              #
#    Updated: 2022/06/05 22:41:00 by jkwak            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#주석으로 함수의 기능 대략 써놓기.. 큰그림을 그리자..
#메모리 누수 확인하는 명령어로 추가해보자 make leaks

NAME = push_swap

SRCS = push_swap.c parsing.c utils.c add_libft.c
OBJS = push_swap.o parsing.o utils.o add_libft.o

LIBFT = libft.a
LIBFT_DIR = libft

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

all : $(NAME)

bonus :

$(LIBFT) :
			make -C $(LIBFT_DIR)
			cp $(LIBFT_DIR)/$(LIBFT) .

$(NAME) : $(OBJS) $(LIBFT)
			$(CC) $(CFLAGS) -o $@ $^

clean :
			$(RM) $(OBJS)
			make clean -C $(LIBFT_DIR)

fclean : clean
			$(RM) $(NAME) $(LIBFT)
			make fclean -C $(LIBFT_DIR)

re :
			make fclean
			make all

.PHONY : all clean fclean re