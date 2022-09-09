// HEADER


NAME = push_swap
CHECKER = checker
HEADER = includes/push_swap.h
FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g


LIBFT = libft/libft.a
LIBFT_DIR = ./libft



OPERATIONS_FILES =	push.c \
					rev_rotate.c \
					rotate.c \
					swap.c

SWAP_FILES =	solver.c \
				push_segments.c \
				push_back.c \
				helpers.c \
				main.c

CHECKER_FILES =	checker.c \
				main.c

COMMON_FILES =	helpers.c \
				ps_atoi.c \
				read_flags.c \
				read_input.c





OPERATIONS_SRCS = $(addprefix srcs/operations/, $(OPERATIONS_FILES))
SWAP_SRCS = $(addprefix srcs/swap/, $(SWAP_FILES))
COMMON_SRCS = $(addprefix srcs/common/, $(COMMON_FILES))
CHECKER_SRCS = $(addprefix srcs/checker/, $(CHECKER_FILES))




