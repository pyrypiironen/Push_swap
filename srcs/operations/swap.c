/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:53:32 by ppiirone          #+#    #+#             */
/*   Updated: 2022/07/04 13:53:34 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

void	swap_a(t_data *d, t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (d->head_a == NULL || d->head_a->next == NULL)
		return;
	*a = d->head_a;
	tmp = (*a)->next->next;	// tmp is pointer to third element
	(*a)->next->next = *a;	// second element point to original first element 
	d->head_a = (*a)->next;	// second element is new head
	(*a)->next = tmp;		// original first element point to third element
	*a = d->head_a;
	d->count++;
	if (d->pw == 1 && d->visual == 0)
		ft_printf("sa\n");
	else if (d->visual == 1)
		visualizer(d, a, b, 1);
}

void	swap_b(t_data *d, t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (d->head_b == NULL || d->head_b->next == NULL)
		return;
	*b = d->head_b;
	tmp = (*b)->next->next;
	(*b)->next->next = *b;
	d->head_b = (*b)->next;
	(*b)->next = tmp;
	*b = d->head_b;
	d->count++;
	if (d->pw == 1 && d->visual == 0)
		ft_printf("sb\n");
	else if (d->visual == 1)
		visualizer(d, a, b, 2);
}

void	swap_both(t_data *d, t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	// Swap_a
	if (d->head_a != NULL && d->head_a->next != NULL)
	{
		*a = d->head_a;
		tmp = (*a)->next->next;
		(*a)->next->next = *a;
		d->head_a = (*a)->next;
		(*a)->next = tmp;
	}
	// Swap_b
	if (d->head_b != NULL && d->head_b->next != NULL)
	{
		*b = d->head_b;
		tmp = (*b)->next->next;
		(*b)->next->next = *b;
		d->head_b = (*b)->next;
		(*b)->next = tmp;
		*a = d->head_a;
		*b = d->head_b;
	}
	d->count++;
	if (d->pw == 1 && d->visual == 0)
		ft_printf("ss\n");
	else if (d->visual == 1)
		visualizer(d, a, b, 3);
}
