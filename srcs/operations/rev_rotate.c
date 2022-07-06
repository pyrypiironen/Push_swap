/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:54:28 by ppiirone          #+#    #+#             */
/*   Updated: 2022/07/04 13:54:29 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

void	rev_rotate_a(t_data *d, t_stack **a)
{
	ft_printf("{red}rev_rotate_a done.\n");
	
	if (d->head_a == NULL || d->head_a->next == NULL)
		return;
	while ((*a)->next)
		*a = (*a)->next;		// *a is last element after loop
	(*a)->next = d->head_a;		// last element point to first element
	d->head_a = *a;				// last element is new head
	*a = (*a)->next;			// *a is head
	while ((*a)->next != d->head_a)
		*a = (*a)->next;		// *a is new last element after loop
	(*a)->next = NULL;
}

void	rev_rotate_b(t_data *d, t_stack **b)
{
	ft_printf("{red}rev_rotate_b done.\n");
	
	if (d->head_b == NULL || d->head_b->next == NULL)
		return;
	while ((*b)->next)
		*b = (*b)->next;
	(*b)->next = d->head_b;
	d->head_b = *b;
	*b = (*b)->next;
	while ((*b)->next != d->head_b)
		*b = (*b)->next;
	(*b)->next = NULL;
}

void	rev_rotate_both(t_data *d, t_stack **a, t_stack **b)
{
	ft_printf("{red}rev_rotate_both (rrr) done.\n");

	rev_rotate_a(d, a);
	rev_rotate_b(d, b);
}