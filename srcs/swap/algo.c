/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:35:48 by ppiirone          #+#    #+#             */
/*   Updated: 2022/08/04 14:35:49 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

void	sort_stack(t_data *d, t_stack **a, t_stack **b)
{
	//if (d->total >= 200)
	push_segments(d, a, b, 32);
}

void	push_segments(t_data *d, t_stack **a, t_stack **b, int segments)
{
	int	i;
	int	min;
	int	max;

	i = 0;
	min = segments / 2 - 2;
	max = segments / 2 + 1;
	*a = d->head_a;
	*b = d->head_a;
	while (min >= 0)
	{
		while (i < d->total)
		{
			if ((*a)->sequence / (d->total / segments) >= min \
			&& (*a)->sequence / (d->total / segments) <= max)
				push_b(d, a, b);
			else
			 	rotate_a(d, a);
			i++;
			*a = (*a)->next;
		}
		min -= 2;
		max += 2;
	}
}