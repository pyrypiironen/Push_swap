/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:08:24 by ppiirone          #+#    #+#             */
/*   Updated: 2022/09/11 15:08:25 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

void	push_back(t_data *d, t_stack **a, t_stack **b)
{
	d->max = d->total;
	d->min = 4;
	while (d->min <= d->max)
	{
		if (distance_to_big(d, b) <= distance_to_small(d, b))
			seek_big(d, a, b);
		else
			seek_small(d, a, b);
	}
}

void	seek_big(t_data *d, t_stack **a, t_stack **b)
{
	while ((*b)->sequence != d->max)
	{
		if ((*b)->sequence == d->max - 1)
		{
			d->head_b = *b;
			push_a(d, a, b);
			d->second = 1;
		}
		else if (d->way_big == 1)
			rev_rotate_b(d, b);
		else
			rotate_b(d, b);
	}
	push_a(d, a, b);
	if (d->second == 1)
	{
		swap_a(d, a);
		d->max--;
		d->second = 0;
	}
	d->max--;
}

void	seek_small(t_data *d, t_stack **a, t_stack **b)
{
	while ((*b)->sequence != d->min)
	{
		if ((*b)->sequence == d->min + 1)
		{
			d->head_b = *b;
			push_a(d, a, b);
			d->second = 1;
		}
		else if (d->way_small == 1)
			rev_rotate_b(d, b);
		else
			rotate_b(d, b);
	}
	push_a(d, a, b);
	d->min++;
	if (d->second == 1)
	{
		d->min++;
		match_place(d, a, b);
		d->second = 0;
	}
	match_place(d, a, b);
}

int	distance_to_big(t_data *d, t_stack **b)
{
	int	dist;
	int	i;
	
	dist = 0;
	i = 0;
	if (*b == NULL)
		return (0);
	while ((*b)->sequence != d->max)
	{
		*b = (*b)->next;
		dist++;
	}
	while ((*b)->next != NULL)
	{
		*b = (*b)->next;
		i++;
	}
	if (dist > i)
	{
		// d->way_b indicates shortest way to biggest number:
		// rotate (0) or reverse rotate(1).
		d->way_big = 1;
		dist = i;
	}
	else
		d->way_big = 0;
	*b = d->head_b;
	return (dist);
}

int	distance_to_small(t_data *d, t_stack **b)
{
	int	dist;
	int	i;

	dist = 0;
	i = 0;
	if (*b == NULL)
		return (0);
	while ((*b)->sequence != d->min)
	{
		*b = (*b)->next;
		dist++;
	}
	while ((*b)->next != NULL)
	{
		*b = (*b)->next;
		i++;
	}
	if (dist > i)
	{
		d->way_small = 1;
		dist = i;
	}
	else
		d->way_small = 0;
	*b = d->head_b;
	return (dist);
}
