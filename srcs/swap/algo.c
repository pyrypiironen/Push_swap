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
	push_segments(d, a, b);
}

void	push_segments(t_data *d, t_stack **a, t_stack **b)
{
	int	min;
	int	max;

	min = (d->segments + 1) / 2 - 2; //14, 15
	max = (d->segments + 1) / 2 + 1; // 16,17
	while (min >= 0 && d->head_a != NULL)
	{
		while (still_left(d, min, max) == 1)
		{
			if ((*a)->segment >= min && (*a)->segment <= max)
				push_b(d, a, b);
			else
				rotate_a(d, a);
		}
		min -= 2;
		max += 2;
	}
}

int		still_left(t_data *d, int min, int max)
{
	t_stack	*tmp;

	tmp = d->head_a;
	if (tmp == NULL)
		return (0);
	while (1)
	{
		if (tmp->segment >= min && tmp->segment <= max)
			return (1);
		if (tmp->next == NULL)
			break ;
		tmp = tmp->next;
	}
	return (0);
}