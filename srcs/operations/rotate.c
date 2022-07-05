/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:54:17 by ppiirone          #+#    #+#             */
/*   Updated: 2022/07/04 13:54:18 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

void	rotate_a(t_data *d, t_stack **a)
{
	ft_printf("{red}rotate_a done.\n");

	if (d->head_a == NULL || d->head_a->next == NULL)
		return;
	while ((*a)->next)
		(*a) = (*a)->next;
	(*a)->next = d->head_a;	// last element point to first element
	*a = d->head_a;
	d->head_a = (*a)->next;	// original second element is new head
	(*a)->next = NULL;		// original first element point to null
}

void	rotate_b(t_data *d, t_stack **b)
{
	ft_printf("{red}rotate_b done.\n");

	if (d->head_a == NULL || d->head_b->next == NULL)
		return;
	while ((*b)->next)
		(*b) = (*b)->next;
	(*b)->next = d->head_b;
	*b = d->head_b;
	d->head_b = (*b)->next;
	(*b)->next = NULL;
}

void	rotate_both(t_data *d, t_stack **a, t_stack **b)
{
	ft_printf("{red}rotate_both (rr) done.\n");

	rotate_a(d, a);
	rotate_b(d, b);
}
