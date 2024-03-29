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

#include "../../includes/push_swap.h"

void	solver(t_data *d, t_stack **a, t_stack **b)
{
	if (check_order(d, a) == 1 || d->total == 1)
		return ;
	else if (d->total == 2)
		solve_two(d, a, b);
	else if (d->total == 3)
		solve_three(d, a, b);
	else
	{
		push_segments(d, a, b);
		solve_three_sequence(d, a, b);
		push_back(d, a, b);
		smallest_to_head(d, a, b);
	}
}

void	solve_two(t_data *d, t_stack **a, t_stack **b)
{
	*a = d->head_a;
	if ((*a)->value > (*a)->next->value)
		swap_a(d, a, b);
}

void	solve_three(t_data *d, t_stack **a, t_stack **b)
{
	*a = d->head_a;
	// While values are in right order
	while ((*a)->value > (*a)->next->value || \
		(*a)->next->value > (*a)->next->next->value)
	{
		// If biggest are in the middle
		if ((*a)->value < (*a)->next->value && \
			(*a)->next->value > (*a)->next->next->value)
			rev_rotate_a(d, a, b);
		// Else if order are middle-min-max.
		else if ((*a)->value > (*a)->next->value && \
			(*a)->value < (*a)->next->next->value && \
			(*a)->next->value < (*a)->next->next->value)
			swap_a(d, a, b);
		// Else
		else
			rotate_a(d, a, b);
	}
}

// Same than solve_three, but put numbers order by their sequence numbers.
void	solve_three_sequence(t_data *d, t_stack **a, t_stack **b)
{
	*a = d->head_a;
	while ((*a)->sequence > (*a)->next->sequence || \
		(*a)->next->sequence > (*a)->next->next->sequence)
	{
		if ((*a)->sequence < (*a)->next->sequence && \
			(*a)->next->sequence > (*a)->next->next->sequence)
			rev_rotate_a(d, a, b);
		else if ((*a)->sequence > (*a)->next->sequence && \
			(*a)->sequence < (*a)->next->next->sequence && \
			(*a)->next->sequence < (*a)->next->next->sequence)
			swap_a(d, a, b);
		else
			rotate_a(d, a, b);
	}
}
