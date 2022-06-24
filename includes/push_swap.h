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
	int			*top_b;
	// Flags
	int			visual;
	int			colors;
}				t_data;

void	ps_error(t_data *d);
// Read input
void	check_flags(char **argv, t_data *d);
void	read_input(char **argv, t_data *d);
void	read_argu(char *argv, t_data *d);
void	add_to_stack(char *str, t_data *d);


// Libft functions modified to this project
int		ps_atoi(const char *str, t_data *d);

#endif
