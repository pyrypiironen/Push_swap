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

void	solver(t_data *d, t_stack **a, t_stack **b)
{
	if (d->total == 2)
		solve_two(d, a);
	else if (d->total == 3)
		solve_three(d, a);
	else
	{
		push_segments(d, a, b);
		solve_three_sequence(d, a);
		push_back(d, a, b);
		smallest_to_head(d, a);
	}
}

void	push_segments(t_data *d, t_stack **a, t_stack **b)
{
	d->min = (d->segments + 1) / 2 - 2;
	d->max = (d->segments + 1) / 2 + 1;
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

void	smallest_to_head(t_data *d, t_stack **a)
{
	int	dist;
	int	i;

	dist = 0;
	i = 0;
	while ((*a)->smallest != 1)
	{
		*a = (*a)->next;
		dist++;
	}
	while ((*a)->next != NULL)
	{
		*a = (*a)->next;
		i++;
	}
	if (dist > i)
		while ((*a)->smallest != 1)
			rev_rotate_a(d, a);
	else
		while ((*a)->smallest != 1)
			rotate_a(d, a);
}
