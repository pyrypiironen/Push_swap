/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:07:43 by ppiirone          #+#    #+#             */
/*   Updated: 2022/09/11 15:08:04 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	match_place(t_data *d, t_stack **a, t_stack **b)
{
	if ((distance_to_big(d, b) <= distance_to_small(d, b) && d->way_big == 0) \
	|| (distance_to_big(d, b) >= distance_to_small(d, b) && d->way_small == 0))
		rotate_both(d, a, b);
	else
		rotate_a(d, a, b);
}

void	smallest_to_head(t_data *d, t_stack **a, t_stack **b)
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
	*a = d->head_a;
	if (dist > i)
		while ((*a)->smallest != 1)
			rev_rotate_a(d, a, b);
	else
		while ((*a)->smallest != 1)
			rotate_a(d, a, b);
}

void	set_sequence(t_data *d, t_stack **a)
{
	t_stack	*tmp;

	d->total = 1;
	if (d->head_a == NULL)
		return ;
	*a = d->head_a;
	while (1)
	{
		tmp = d->head_a;
		while (1)
		{
			if (tmp->value < (*a)->value)
				(*a)->sequence += 1;
			if (tmp->next == NULL)
				break ;
			tmp = tmp->next;
		}
		if ((*a)->next == NULL)
			break ;
		(*a) = (*a)->next;
		d->total++;
	}
	target_sequence(d, a);
	set_segment(d, a);
}

void	target_sequence(t_data *d, t_stack **a)
{
	*a = d->head_a;
	while (1)
	{
		if ((*a)->sequence == 1)
			(*a)->smallest = 1;
		(*a)->sequence += d->total / 2;
		if ((*a)->sequence > d->total)
			(*a)->sequence -= d->total;
		if ((*a)->next == NULL)
			break ;
		*a = (*a)->next;
	}
}
