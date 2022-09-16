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
	ft_printf("%25s %34s\n", "Stack a:", "Stack b:");

	if (d->sequence == 1 && d->seg_flag == 1)
		print_sequence_segments(d, a, b);
	//else if (d->sequence == 1)
	//	print_sequence(d, a, b);
	else if (d->seg_flag == 1)
		print_stacks_segments(d, a, b);
	//else
		//print_stacks
	
	
	*a = d->head_a;
	*b = d->head_b;
	if (1 == 1) // fix to flag
		sleep(1);
}
