/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_setup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:00:54 by ppiirone          #+#    #+#             */
/*   Updated: 2022/08/02 18:00:56 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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

void	set_segment(t_data *d, t_stack **a)
{
	*a = d->head_a;
	if (d->total <= 40)
		d->segments = 3;
	else if (d->total <= 350)
		d->segments = 15;
	else
		d->segments = 31;
	while (1)
	{
		(*a)->segment = (*a)->sequence / (double)(d->total / d->segments);
		if ((*a)->segment > d->segments)
			(*a)->segment = d->segments;
		if ((*a)->next == NULL)
			break ;
		*a = (*a)->next;
	}
}

void	format_structs(t_data *d, t_stack **a)
{
	d->head_a = *a;
	d->head_b = NULL;
	d->second = 0;
	(*a)->value = '\0';
	(*a)->next = NULL;
	(*a)->sequence = 1;
	(*a)->smallest = 0;
}
