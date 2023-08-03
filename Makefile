# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 12:47:36 by htaheri           #+#    #+#              #
#    Updated: 2023/08/01 11:44:12 by htaheri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC           =     cc
CFLAGS       =     -Wall -Wextra -Werror -g
NAME         =     push_swap
LIBFT_DIR    =     lib/libft
PRINTF_DIR   =     lib/ft_printf
SOURCE_DIRS  =     main.c src/instructions/push.c src/instructions/rotate.c src/instructions/swap.c\
			       src/sort/sort_3.c src/sort/sort_5.c src/sort/sort_bigger.c\
			       src/utils/utils1.c src/utils/insersion_sort.c\
			       src/validate/is_integer.c src/validate/is_unique.c src/validate/linkedlist.c src/validate/not_sorted.c src/validate/split_args.c src/validate/validating.c
LIBFT        =     $(LIBFT_DIR)/libft.a
PRINTF       =     $(PRINTF_DIR)/libftprintf.a
OBJS         =     $(SOURCE_DIRS:.c=.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) bonus -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L$(PRINTF_DIR) -lftprintf -L$(LIBFT_DIR) -lft  -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I./leak_finder/includes  -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

