/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:40:39 by ppiirone          #+#    #+#             */
/*   Updated: 2022/06/15 17:40:40 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_data
{
	// Stacks
	struct		s_stack	*head_a;
	struct		s_stack	*head_b;
	// Flags
	int			visual;
	int			paused;
	int			colors;
	int			sequence;
	// Else
	int			pw;
	int			total;
	int			segments;
	int			min;
	int			max;
	int			way_big;
	int			way_small;
	int			second;
}				t_data;

typedef struct	s_stack
{
	long		value;
	struct		s_stack	*next;
	int			sequence;
	int			segment;
	int			smallest;
}				t_stack;

// Format program
void	format_structs(t_data *d, t_stack **a);
void	set_sequence(t_data *d, t_stack **a);
void	target_sequence(t_data *d, t_stack **a);
void	set_segment(t_data *d, t_stack **a);

// Read input
void	check_flags(char **argv, t_data *d, int argc);
int		flag_check(char **argv, t_data *d, int arg);
void	read_input(char **argv, t_data *d, t_stack *a);
void	read_argu(char *arg, t_data *d, t_stack **a);
void	add_to_stack(char str[12], t_data *d, t_stack **a);
t_stack	*new_node(t_data *d);

// Operations
void	swap_a(t_data *d, t_stack **a);
void	swap_b(t_data *d, t_stack **b);
void	swap_both(t_data *d, t_stack **a, t_stack **b);
void	push_a(t_data *d, t_stack **a, t_stack **b);
void	push_b(t_data *d, t_stack **a, t_stack **b);
void	rotate_a(t_data *d, t_stack **a);
void	rotate_b(t_data *d, t_stack **b);
void	rotate_both(t_data *d, t_stack **a, t_stack **b);
void	rev_rotate_a(t_data *d, t_stack **a);
void	rev_rotate_b(t_data *d, t_stack **b);
void	rev_rotate_both(t_data *d, t_stack **a, t_stack **b);

// The algorithm
void	solver(t_data *d, t_stack **a, t_stack **b);
void	push_segments(t_data *d, t_stack **a, t_stack **b);
int		still_left(t_data *d);
void	push_back(t_data *d, t_stack **a, t_stack **b);
void	smallest_to_head(t_data *d, t_stack **a);
int		distance_to_big(t_data *d, t_stack **b);
int		distance_to_small(t_data *d, t_stack **b);
void	seek_big(t_data *d, t_stack **a, t_stack **b);
void	seek_small(t_data *d, t_stack **a, t_stack **b);
void	match_place(t_data *d, t_stack **a, t_stack **b);
void	solve_two(t_data *d, t_stack **a);
void	solve_three(t_data *d, t_stack **a);
void	solve_three_sequence(t_data *d, t_stack **a);

// Checker
void	checker(t_data *d, t_stack **a, t_stack **b);
void	execute_command(t_data *d, t_stack **a, t_stack **b, char *line);

// Helpers
void	ps_error(t_data *d);
int		check_order(t_data *d, t_stack **a);

// Libft functions modified to this project
int		ps_atoi(const char *str, t_data *d);

// Visualizer
void	print_stacks(t_data *d, t_stack **a, t_stack **b);

#endif
