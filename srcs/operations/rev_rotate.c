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
	if (d->pw == 1)
		ft_printf("rra\n");
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
	*a = d->head_a;
}

void	rev_rotate_b(t_data *d, t_stack **b)
{
	if (d->pw == 1)
		ft_printf("rrb\n");
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
	*b = d->head_b;
}

void	rev_rotate_both(t_data *d, t_stack **a, t_stack **b)
{
	if (d->pw == 1)
		ft_printf("rrr\n");
	// Protection for rev_rotate_a and rev_rotate_b
	// if (d->head_a == NULL || d->head_a->next == NULL || d->head_b == NULL || \
	// 	d->head_b->next == NULL)
	// 	return;
	// Rev_rotate_a (protection done different way than at function rra)
	if (d->head_a != NULL && d->head_a->next != NULL)
	{
		while ((*a)->next)
			*a = (*a)->next;
		(*a)->next = d->head_a;
		d->head_a = *a;
		*a = (*a)->next;
		while ((*a)->next != d->head_a)
			*a = (*a)->next;
		(*a)->next = NULL;
	}
	// Rev_rotate_b (protection done different way than at function rrb)
	if (d->head_b != NULL && d->head_b->next != NULL)
	{
		while ((*b)->next)
			*b = (*b)->next;
		(*b)->next = d->head_b;
		d->head_b = *b;
		*b = (*b)->next;
		while ((*b)->next != d->head_b)
			*b = (*b)->next;
		(*b)->next = NULL;
		*a = d->head_a;
		*b = d->head_b;
	}
}