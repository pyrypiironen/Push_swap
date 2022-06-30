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
	int			*a;
	int			*b;
	int			*top_a;
	int			pos_a;
	// not format yet


	int			*top_b;
	// Flags
	int			visual;
	int			colors;
}				t_data;

void	ps_error(t_data *d);
void	format_struct(t_data *d);
// Read input
void	check_flags(char **argv, t_data *d, int argc);
void	read_input(char **argv, t_data *d);
void	read_argu(char *arg, t_data *d);
void	add_to_stack(char str[12], t_data *d);


// Libft functions modified to this project
int		ps_atoi(const char *str, t_data *d);

// Just for testing - delete in the end
void	print_stack(t_data *d);

#endif

// //
// typedef struct	s_data
// {
// 	int	*head_a;
// 	int	*head_b;
// 	int	colors;
// 	int	visual;
// }	t_data;

// typedef struct	s_stack
// {
// 	int		value;
// 	t_stack	*next;
// }	t_stack;