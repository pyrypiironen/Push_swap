# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 15:09:29 by ppiirone          #+#    #+#              #
#    Updated: 2022/09/11 15:09:30 by ppiirone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CHECKER = checker
FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g
LIBFT = libft/libft.a
OBJS_DIR = objs/


SWAP_FILES =	solver.c \
				push_segments.c \
				push_back.c \
				helpers.c \
				main.c

CHECKER_FILES =	checker.c \
				main.c

OPERATIONS_FILES =	push.c \
					rev_rotate.c \
					rotate.c \
					swap.c

COMMON_FILES =	helpers.c \
				ps_atoi.c \
				read_flags.c \
				read_input.c


SWAP_SRCS = $(addprefix srcs/swap/, $(SWAP_FILES))
CHECKA_SRCS = $(addprefix srcs/checker/, $(CHECKER_FILES))
OPERATIONS_SRCS = $(addprefix srcs/operations/, $(OPERATIONS_FILES))
COMMON_SRCS = $(addprefix srcs/common/, $(COMMON_FILES))

PUSH_SWAP_SRCS = $(SWAP_SRCS) $(OPERATIONS_SRCS) $(COMMON_SRCS)
CHECKER_SRCS = $(CHECKA_SRCS) $(OPERATIONS_SRCS) $(COMMON_SRCS)

PUSH_SWAP_OBJS = $(PUSH_SWAP_SRCS:.c=.o)
CHECKER_OBJS = $(CHECKER_SRCS:.c=.o)




all: $(NAME) $(CHECKER)
		@mkdir $(OBJS_DIR)
		@mv $(PUSH_SWAP_OBJS) $(OBJS_DIR)
		@mv $(CHECKA_SRCS:.c=.o) $(OBJS_DIR)
		@echo "Push_swap and checker succesfully done."

$(NAME): $(PUSH_SWAP_OBJS) $(LIBFT)
		@gcc $(FLAGS) -o $@ $^

$(CHECKER): $(CHECKER_OBJS) $(LIBFT)
		@gcc $(FLAGS) -o $@ $^

$(LIBFT):
		@$(MAKE) -C libft

clean:
		@rm -rf $(OBJS_DIR)
		@$(MAKE) -C libft clean

fclean: clean
		@rm -f $(NAME) $(CHECKER)
		@$(MAKE) -C libft fclean
		@echo "Make fclean successfully done."

re: fclean all

.PHONY: all clean fclean re
