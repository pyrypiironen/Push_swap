/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualizer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:19:06 by ppiirone          #+#    #+#             */
/*   Updated: 2022/08/02 15:19:07 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

void	print_stacks(t_data *d, t_stack **a, t_stack **b)
{
	system("clear");

	*a = d->head_a;
	*b = d->head_b;
	int a_end = 0;
	int b_end = 0;

	while (a_end == 0 | b_end == 0)
	{
		if (d->head_a != NULL && (*a)->value != '\0' && a_end == 0)
			ft_printf("{green}%15d", (*a)->value);
		else
			ft_printf("%15s", "");
		if (d->head_b != NULL && (*b)->value != '\0' && b_end == 0)
			ft_printf("{yellow}%15d", (*b)->value);
		if (d->head_a != NULL && (*a)->next)
			*a = (*a)->next;
		else
			a_end = 1;
		if (d->head_b != NULL && (*b)->next)
			*b = (*b)->next;
		else
			b_end = 1;
		ft_printf("\n");
	}
	ft_printf("{green}%15s", "_");
	ft_printf("{yellow}%15s\n", "_");
	ft_printf("{green}%15s", "a");
	ft_printf("{yellow}%15s\n", "b");

	sleep(1);
}

