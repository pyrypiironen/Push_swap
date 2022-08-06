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
	// if (d->total < 4)
	// 	sort_small(d, a, b);
	//else
	//{
		push_segments(d, a, b);
		//push_back(d, a, b);
	//}
}

void	push_segments(t_data *d, t_stack **a, t_stack **b)
{
	d->min = (d->segments + 1) / 2 - 2; //14, 15
	d->max = (d->segments + 1) / 2 + 1; // 16,17
	while (d->min >= 0 && d->head_a != NULL)
	{
		while (still_left(d) == 1)
		{
			if ((*a)->segment >= d->min && (*a)->segment <= d->max \
			&& (*a)->sequence > 3)
			{
				push_b(d, a, b);
				// Left segments min and max top of the stack b, but rotate
				// another ones to bottom. Also rotate stack a on same move
				// if necessary.
				if ((*b)->segment == d->min + 1 || (*b)->segment == d->max - 1)
				{
					if ((*a)->segment < d->min || (*a)->segment > d->max)
						rotate_both(d, a, b);
					else
						rotate_b(d, b);	
				}
			}
			else
				rotate_a(d, a);
		}
		d->min -= 2;
		d->max += 2;
	}
}

int		still_left(t_data *d)
{
	t_stack	*tmp;

	tmp = d->head_a;
	if (tmp == NULL || tmp->next == NULL || tmp->next->next == NULL \
	|| tmp->next->next->next == NULL)
		return (0);
	while (1)
	{
		if (tmp->segment >= d->min && tmp->segment <= d->max)
			return (1);
		if (tmp->next == NULL)
			break ;
		tmp = tmp->next;
	}
	return (0);
}

