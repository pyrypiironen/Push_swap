/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:53:58 by ppiirone          #+#    #+#             */
/*   Updated: 2022/07/04 13:54:00 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

void	push_b(t_data *d, t_stack **a, t_stack **b)
{
	ft_printf("{red}push_b done.\n");

	if (d->head_a->value == '\0' | d->head_a == NULL)
		return;
	*a = d->head_a;
	*b = d->head_b;
	d->head_a = (*a)->next;	// Second element of a is new head of a
	(*a)->next = *b;		// First element of a point to first element of b
	d->head_b = *a;			// Original first element of a is new head of b
}

void	push_a(t_data *d, t_stack **a, t_stack **b)
{
	ft_printf("{red}push_a done.\n");

	if (d->head_b->value == '\0' | d->head_b == NULL)
		return;
	*a = d->head_a;
	*b = d->head_b;
	d->head_b = (*b)->next;
	(*b)->next = *a;
	d->head_a = *b;
}
