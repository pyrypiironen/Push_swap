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
	if (d->pw == 1)
		ft_printf("pa\n");
	if (d->head_a == NULL)
		return;
	*a = d->head_a;
	d->head_a = (*a)->next;	// second element of a is new head of a
	if (d->head_b != NULL)
	{
		*b = d->head_b;
		(*a)->next = *b;	// first element of a point to first element of b
	}
	else
		(*a)->next = NULL;	// if stack b is empty next is null
	d->head_b = *a;			// original first element of a is new head of b
}

void	push_a(t_data *d, t_stack **a, t_stack **b)
{
	if (d->pw == 1)
		ft_printf("pb\n");
	if (d->head_b == NULL)
		return;
	*b = d->head_b;
	d->head_b = (*b)->next;
	if (d->head_a != NULL)
	{
		*a = d->head_a;
		(*b)->next = *a;
	}
	else
		(*b)->next = NULL;
	d->head_a = *b;
}
