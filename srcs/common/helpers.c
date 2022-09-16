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
	(*a)->value = 2147483648;
	(*a)->next = NULL;
	(*a)->sequence = 1;
	(*a)->smallest = 0;
}

void	ps_error(t_data	*d)
{
	ft_printf("Error\n");
	while (d->head_a)
	{
		free(d->head_a);
		d->head_a = d->head_a->next;
	}
	while (d->head_b)
	{
		free(d->head_b);
		d->head_b = d->head_b->next;
	}
	free(d);
	exit(1);
}

void	free_all(t_data *d)
{
	while (d->head_a)
	{
		free(d->head_a);
		d->head_a = d->head_a->next;
	}
	while (d->head_b)
	{
		free(d->head_b);
		d->head_b = d->head_b->next;
	}
	free(d);
}

int		check_order(t_data *d, t_stack **a)
{
	*a = d->head_a;
	if (d->head_b != NULL)
		return (0);
	while ((*a)->next != NULL)
	{
		if ((*a)->value > (*a)->next->value)
			return (0);
		*a = (*a)->next;
	}
	*a = d->head_a;
	return (1);
}
