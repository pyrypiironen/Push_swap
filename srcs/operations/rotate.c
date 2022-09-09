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
	if (d->pw == 1)
		ft_printf("ra\n");
	if (d->head_a == NULL || d->head_a->next == NULL)
		return;
	while ((*a)->next)
		*a = (*a)->next;
	(*a)->next = d->head_a;		// last element point to first element
	*a = d->head_a;
	d->head_a = (*a)->next;		// original second element is new head
	(*a)->next = NULL;			// original first element is new end
	*a = d->head_a;
}

void	rotate_b(t_data *d, t_stack **b)
{
	if (d->pw == 1)
		ft_printf("rb\n");
	if (d->head_b == NULL || d->head_b->next == NULL)
		return;
	while ((*b)->next)
		(*b) = (*b)->next;
	(*b)->next = d->head_b;
	*b = d->head_b;
	d->head_b = (*b)->next;
	(*b)->next = NULL;
	*b = d->head_b;
}

void	rotate_both(t_data *d, t_stack **a, t_stack **b)
{
	if (d->pw == 1)
		ft_printf("rr\n");
	// Protection for rotate_a and roteate_b
	// if (d->head_a == NULL || d->head_a->next == NULL || d->head_b == NULL || \
	// 	d->head_b->next == NULL)
	// 	return;
	// Rotate_a (protection done different way than at function ra)
	if (d->head_a != NULL && d->head_a->next != NULL)
	{
		while ((*a)->next)
			*a = (*a)->next;
		(*a)->next = d->head_a;
		*a = d->head_a;
		d->head_a = (*a)->next;
		(*a)->next = NULL;
		*a = d->head_a;
	}
	// Rotate_b (protection done different way than at function rb)
	if (d->head_b != NULL && d->head_b->next != NULL)
	{
		while ((*b)->next)
			(*b) = (*b)->next;
		(*b)->next = d->head_b;
		*b = d->head_b;
		d->head_b = (*b)->next;
		(*b)->next = NULL;
		*b = d->head_b;
	}
}
