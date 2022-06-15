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

typedef struct s_flags
{
	int			v;
	int			c;
}				t_flags;

typedef struct s_stack
{
	int					nb;
	struct s_stack		*next;
}						t_stack;

void	read_input(SOMETHING);
void	error(void);
int		ps_atoi(const char *str);

#endif
