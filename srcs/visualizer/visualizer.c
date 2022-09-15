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

// void	print_stacks(t_data *d, t_stack **a, t_stack **b)
// {
// 	system("clear");
// 	ft_printf("{yellow}* * * * * * * * * * Visualizer * * * * * * * * *\n");

// 	int a_end = 0;
// 	int b_end = 0;

// 	while (a_end == 0 | b_end == 0)
// 	{
// 		if (d->head_a != NULL && (*a)->value != '\0' && a_end == 0)
// 			ft_printf("{green}%15d | %15d | %15d | %15d", (*a)->value, (*a)->sequence, (*a)->segment, (*a)->smallest);
// 		else
// 			ft_printf("%51s", "");
// 		if (d->head_b != NULL && (*b)->value != '\0' && b_end == 0)
// 			ft_printf("{yellow}%15d | %15d | %15d", (*b)->value, (*b)->sequence, (*b)->segment);
// 		if (d->head_a != NULL && (*a)->next)
// 			*a = (*a)->next;
// 		else
// 			a_end = 1;
// 		if (d->head_b != NULL && (*b)->next)
// 			*b = (*b)->next;
// 		else
// 			b_end = 1;
// 		ft_printf("\n");
// 	}
// 	ft_printf("{green}%15s", "_");
// 	ft_printf("{yellow}%51s\n", "_");
// 	ft_printf("{green}%15s", "a");
// 	ft_printf("{yellow}%51s\n", "b");

	



// 	sleep(1);

// }

void	visualizer(t_data *d, t_stack **a, t_stack **b, int operation)
{
	system("clear");
	ft_printf("%25s %34s\n", "Stack a:", "Stack b:");

	//print_stacks
	print_stacks_segments(d, a, b);
	//print_sequences
	//print_sequences_segment
}

void	print_stacks_segments(t_data *d, t_stack **a, t_stack **b)
{
	while (1)
	{
		if ((*a) != NULL && d->segments == 31)
			print_value_segments_32(d, a);
		else if ((*a) != NULL)
			print_value_segments_16(d, a);
		else
			ft_printf("%35s", "");
		if ((*b) != NULL && d->segments == 31)
			print_value_segments_32(d, b);
		else if ((*b) != NULL)
			print_value_segments_16(d, b);
		ft_printf("\n");
		if ((*a) == NULL && (*b) == NULL)
			break ;
	}
	*a = d->head_a;
	*b = d->head_b;
	if (1 == 1) // fix to flag
		sleep(1);
}

void	print_value_segments_32(t_data *d, t_stack **x)
{
	if ((*x)->segment >= 14 && (*x)->segment <= 17)
		ft_printf("{blue2}%20d (%2d)          ", (*x)->value, (*x)->segment);
	else if (((*x)->segment >= 11 && (*x)->segment <= 13) || \
		((*x)->segment >= 18 && (*x)->segment <= 20))
		ft_printf("{yellow}%20d (%2d)          ", (*x)->value, (*x)->segment);
	else if (((*x)->segment >= 8 && (*x)->segment <= 10) || \
		((*x)->segment >= 21 && (*x)->segment <= 23))
		ft_printf("{green}%20d (%2d)          ", (*x)->value, (*x)->segment);
	else if (((*x)->segment >= 5 && (*x)->segment <= 7) || \
		((*x)->segment >= 24 && (*x)->segment <= 26))
		ft_printf("{red}%20d (%2d)          ", (*x)->value, (*x)->segment);
	else if (((*x)->segment >= 2 && (*x)->segment <= 4) || \
		((*x)->segment >= 27 && (*x)->segment <= 29))
		ft_printf("{purple}%20d (%2d)          ", (*x)->value, (*x)->segment);
	else
		ft_printf("{blue}%20d (%2d)          ", (*x)->value, (*x)->segment);
	(*x) = (*x)->next;
}

void	print_value_segments_16(t_data *d, t_stack **x)
{
	if ((*x)->segment >= 14 && (*x)->segment <= 17)
		ft_printf("{blue2}%20d (%2d)          ", (*x)->value, (*x)->segment);
	else if (((*x)->segment >= 11 && (*x)->segment <= 13) || \
		((*x)->segment >= 18 && (*x)->segment <= 20))
		ft_printf("{yellow}%20d (%2d)          ", (*x)->value, (*x)->segment);
	else if (((*x)->segment >= 8 && (*x)->segment <= 10) || \
		((*x)->segment >= 21 && (*x)->segment <= 23))
		ft_printf("{green}%20d (%2d)          ", (*x)->value, (*x)->segment);
	else if (((*x)->segment >= 5 && (*x)->segment <= 7) || \
		((*x)->segment >= 24 && (*x)->segment <= 26))
		ft_printf("{red}%20d (%2d)          ", (*x)->value, (*x)->segment);
	else if (((*x)->segment >= 2 && (*x)->segment <= 4) || \
		((*x)->segment >= 27 && (*x)->segment <= 29))
		ft_printf("{purple}%20d (%2d)          ", (*x)->value, (*x)->segment);
	else
		ft_printf("{blue}%20d (%2d)          ", (*x)->value, (*x)->segment);
	(*x) = (*x)->next;
}