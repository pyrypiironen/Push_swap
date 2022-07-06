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
	int			colors;
}				t_data;

typedef struct	s_stack
{
	int			value;
	struct		s_stack	*next;
}				t_stack;

void	ps_error(t_data *d);
void	format_structs(t_data *d, t_stack **a);
// Read input
void	check_flags(char **argv, t_data *d, int argc);
void	read_input(char **argv, t_data *d, t_stack *a);
void	read_argu(char *arg, t_data *d, t_stack **a);
void	add_to_stack(char str[12], t_data *d, t_stack **a);
t_stack	*new_node();

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



// Libft functions modified to this project
int		ps_atoi(const char *str, t_data *d);

// Just for testing - delete in the end
void	print_stacks(t_data *d, t_stack **a, t_stack **b);

#endif
