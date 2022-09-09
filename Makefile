// HEADER


NAME = push_swap
CHECKER = checker
HEADER = includes/push_swap.h
FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g
LIBFT = libft/libft.a


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
CHECKER_SRCS = $(addprefix srcs/checker/, $(CHECKER_FILES))
OPERATIONS_SRCS = $(addprefix srcs/operations/, $(OPERATIONS_FILES))
COMMON_SRCS = $(addprefix srcs/common/, $(COMMON_FILES))

PUSH_SWAP_SRCS = $(SWAP_SRCS) $(OPERATIONS_SRCS) $(COMMON_SRCS)
CHECKER_SRCS = $(CHECKER_SRCS) $(OPERATIONS_SRCS) $(COMMON_SRCS)

PUSH_SWAP_OBJS = $(PUSH_SWAP_SRCS:.c=.o)
CHECKER_OBJS = $(CHECKER_SRCS:.c=.o)


.PHONY: all clean 

all: $(NAME) $(CHECKER)

$(NAME): $(PUSH_SWAP_OBJS) $(LIBFT)
		@gcc $(FLAGS) -o $@ $^

$(CHECKER): $(CHECKER_OBJS) $(LIBFT)
		@gcc $(FLAGS) -o $@ $^

$(LIBFT):
		$(MAKE) -C libft

clean:
		$(MAKE) -C libft clean
