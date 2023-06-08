# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 18:29:23 by aaybaz            #+#    #+#              #
#    Updated: 2023/05/05 20:49:46 by aaybaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS	= push_swap.c \
	  ./src/do_pp.c \
	  ./src/do_rr.c \
	  ./src/do_rrr.c \
	  ./src/do_ss.c \
	  ./src/utils_1.c \
	  ./src/utils_2.c \
	  ./src/utils_3.c \
	  ./src/utils_for_sort.c \
	  ./sort/sort_max.c \
	  ./sort/sort_min.c \
	  ./sort/sort.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	@echo "$(NAME) objects cleaned ✅"

fclean: clean
	$(RM) $(NAME)
	@echo "$(NAME) cleaned ✅"

re: fclean all

.PHONY: all clean fclean re
