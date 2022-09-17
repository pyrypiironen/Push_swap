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

VISUALIZER_FILES =	visualizer.c \
					print_stacks.c \
					print_segments.c \
					print_sequences.c \
					print_seq_segments.c 


SWAP_SRCS = $(addprefix srcs/swap/, $(SWAP_FILES))
CHECKA_SRCS = $(addprefix srcs/checker/, $(CHECKER_FILES))
OPERATIONS_SRCS = $(addprefix srcs/operations/, $(OPERATIONS_FILES))
COMMON_SRCS = $(addprefix srcs/common/, $(COMMON_FILES))
VISUALIZER_SRCS = $(addprefix srcs/visualizer/, $(VISUALIZER_FILES))

PUSH_SWAP_SRCS = $(SWAP_SRCS) $(OPERATIONS_SRCS) $(COMMON_SRCS) $(VISUALIZER_SRCS)
CHECKER_SRCS = $(CHECKA_SRCS) $(OPERATIONS_SRCS) $(COMMON_SRCS) $(VISUALIZER_SRCS)

PUSH_SWAP_OBJS = $(PUSH_SWAP_SRCS:.c=.o)
CHECKER_OBJS = $(CHECKER_SRCS:.c=.o)


all: $(NAME) $(CHECKER)

$(NAME): $(PUSH_SWAP_OBJS) $(LIBFT)
		@gcc $(FLAGS) -o $@ $^
		@echo "Push_swap succesfully done."

$(CHECKER): $(CHECKER_OBJS) $(LIBFT)
		@gcc $(FLAGS) -o $@ $^
		@echo "Checker succesfully done."

$(LIBFT):
		@$(MAKE) -C libft

clean:
		@rm -f $(PUSH_SWAP_OBJS) $(CHECKER_OBJS)
		@$(MAKE) -C libft clean

fclean: clean
		@rm -f $(NAME) $(CHECKER)
		@$(MAKE) -C libft fclean
		@echo "Make fclean successfully done."

re: fclean all

.PHONY: all clean fclean re
