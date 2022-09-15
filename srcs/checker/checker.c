/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:06:34 by ppiirone          #+#    #+#             */
/*   Updated: 2022/09/11 15:06:36 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"


void	checker(t_data *d, t_stack **a, t_stack **b)
{
	int		i;
	char	line[6];
	char	tmp[1];

	i = 0;
	tmp[0] = '\0';
	ft_bzero(line, 6);
	while (read(0, tmp, 1) > 0)
	{
		if (tmp[0] == '\n')
		{
			execute_command(d, a, b, line);
			ft_bzero(line, 6);
			i = 0;
		}
		else
			line[i++] = tmp[0];
		if (i == 5)
		{
			while (read(0, tmp, 1) > 0)
				if (tmp[0] == '\n')
					break ;
			ps_error(d);
		}
	}
}

void	execute_command(t_data *d, t_stack **a, t_stack **b, char *line)
{

	if (ft_strcmp(line, "sa") == 0)
		swap_a(d, a, b);
	else if (ft_strcmp(line, "sb") == 0)
		swap_b(d, a, b);
	else if (ft_strcmp(line, "ss") == 0)
		swap_both(d, a, b);
	else if (ft_strcmp(line, "pa") == 0)
		push_a(d, a, b);
	else if (ft_strcmp(line, "pb") == 0)
		push_b(d, a, b);
	else if (ft_strcmp(line, "ra") == 0)
		rotate_a(d, a, b);
	else if (ft_strcmp(line, "rb") == 0)
		rotate_b(d, a, b);
	else if (ft_strcmp(line, "rr") == 0)
		rotate_both(d, a, b);
	else if (ft_strcmp(line, "rra") == 0)
		rev_rotate_a(d, a, b);
	else if (ft_strcmp(line, "rrb") == 0)
		rev_rotate_b(d, a, b);
	else if (ft_strcmp(line, "rrr") == 0)
		rev_rotate_both(d, a, b);
	else
		ps_error(d);
}
