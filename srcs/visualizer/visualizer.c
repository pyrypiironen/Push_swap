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

void	visualizer(t_data *d, t_stack **a, t_stack **b, int operation)
{
	system("clear");
	ft_printf("%30s %34s %35s %6i %25s %6i %25s %4i", \
	"Stack a:", "Stack b:", "Move count:", d->count, "Total numbers:", \
	d->total, "Total segments:", d->segments + 1);
	print_last_move(operation);
	if (d->sequence == 1 && d->seg_flag == 1)
		print_sequence_segments(d, a, b);
	else if (d->sequence == 1)
		print_sequence(d, a, b);
	else if (d->seg_flag == 1)
		print_stacks_segments(d, a, b);
	else
		print_stacks(d, a, b);
	*a = d->head_a;
	*b = d->head_b;
	if (d->paused == 1)
		sleep(1);
	else
		usleep(250000);
}

void	print_last_move(int operation)
{
	ft_printf("%25s", "Last move: ");
	if (operation == 1)
		ft_printf(" sa");
	else if (operation == 2)
		ft_printf(" sb");
	else if (operation == 3)
		ft_printf(" ss");
	else if (operation == 4)
		ft_printf(" pa");
	else if (operation == 5)
		ft_printf(" pb");
	else if (operation == 6)
		ft_printf(" ra");
	else if (operation == 7)
		ft_printf(" rb");
	else if (operation == 8)
		ft_printf(" rr");
	else if (operation == 9)
		ft_printf("rra");
	else if (operation == 10)
		ft_printf("rrb");
	else if (operation == 11)
		ft_printf("rrr");
	ft_printf("\n");
}
