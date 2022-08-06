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

# include "../../includes/push_swap.h"

void	set_sequence(t_data *d, t_stack **a)
{
	t_stack	*tmp;
	
	d->total = 1;
	if (d->head_a == NULL)
		return;
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
	set_segment(d, a);
}

void	set_segment(t_data *d, t_stack **a)
{
	*a = d->head_a;
	//if (d->total >= 200)
		d->segments = 31;
	while (1)
	{
		(*a)->segment = (*a)->sequence / (double)(d->total / d->segments);
		if ((*a)->next == NULL)
			break ;
		(*a) = (*a)->next;
	}
}

void	format_structs(t_data *d, t_stack **a)
{
	d->head_a = *a;
	d->head_b = NULL;
	d->pw = 1;
	(*a)->value = '\0';
	(*a)->next = NULL;
	(*a)->sequence = 1;
}
