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

void	swap_a(t_data *d, t_stack **a)
{
	t_stack	*tmp;

	ft_printf("{red}swap_a done.\n");

	if(d->head_a->next == NULL)
		return;
	*a = d->head_a;
	tmp = (*a)->next->next; // tmp is pointer to third element
	(*a)->next->next = *a; 	// second element point to original first element 
	d->head_a = (*a)->next;	// second element is new head
	(*a)->next =tmp;		// original first element point to third element
}

void	swap_b(t_data *d, t_stack **b)
{
	t_stack	*tmp;

	ft_printf("{red}swap_b done.\n");

	if(d->head_b->next == NULL)
		return;
	*b = d->head_b;
	tmp = (*b)->next->next;
	(*b)->next->next = *b;
	d->head_b = (*b)->next;
	(*b)->next =tmp;
}

void	swap_both(t_data *d, t_stack **a, t_stack **b)
{
	ft_printf("{red}sswap_both (ss) done.\n");

	swap_a(d, a);
	swap_b(d, b);
}
