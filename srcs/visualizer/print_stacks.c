/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:59:47 by ppiirone          #+#    #+#             */
/*   Updated: 2022/09/17 16:59:48 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stacks(t_data *d, t_stack **a, t_stack **b)
{
	while (1)
	{
		if ((*a) != NULL && d->segments == 31)
			print_value_32(d, a);
		else if ((*a) != NULL && d->segments == 15)
			print_value_16(d, a);
		else if ((*a) != NULL)
			print_value_3(d, a);
		else
			ft_printf("%35s", "");
		if ((*b) != NULL && d->segments == 31)
			print_value_32(d, b);
		else if ((*b) != NULL && d->segments == 15)
			print_value_16(d, b);
		else if ((*b) != NULL)
			print_value_3(d, b);
		ft_printf("\n");
		if ((*a) == NULL && (*b) == NULL)
			break ;
	}
}

void	print_value_32(t_data *d, t_stack **x)
{
	if ((*x)->segment >= 14 && (*x)->segment <= 17)
		ft_printf("{blue2}%30d     ", (int)(*x)->value);
	else if (((*x)->segment >= 11 && (*x)->segment <= 12) || \
		((*x)->segment >= 18 && (*x)->segment <= 19))
		ft_printf("{yellow}%30d     ", (int)(*x)->value);
	else if (((*x)->segment >= 9 && (*x)->segment <= 10) || \
		((*x)->segment >= 20 && (*x)->segment <= 21))
		ft_printf("{green}%30d     ", (int)(*x)->value);
	else if (((*x)->segment >= 7 && (*x)->segment <= 8) || \
		((*x)->segment >= 22 && (*x)->segment <= 23))
		ft_printf("{red}%30d     ", (int)(*x)->value);
	else if (((*x)->segment >= 5 && (*x)->segment <= 6) || \
		((*x)->segment >= 24 && (*x)->segment <= 25))
		ft_printf("{purple}%30d     ", (int)(*x)->value);
	else if (((*x)->segment >= 3 && (*x)->segment <= 4) || \
		((*x)->segment >= 26 && (*x)->segment <= 27))
		ft_printf("{blue}%30d     ", (int)(*x)->value);
	else
		ft_printf("%30d     ", (*x)->value);
	(*x) = (*x)->next;
}

void	print_value_16(t_data *d, t_stack **x)
{
	if ((*x)->segment >= 7 && (*x)->segment <= 8)
		ft_printf("{blue2}%30d     ", (int)(*x)->value);
	else if ((*x)->segment == 6 || (*x)->segment == 9)
		ft_printf("{yellow}%30d     ", (int)(*x)->value);
	else if ((*x)->segment == 5 || (*x)->segment == 10)
		ft_printf("{green}%30d     ", (int)(*x)->value);
	else if ((*x)->segment == 4 || (*x)->segment == 11)
		ft_printf("{red}%30d     ", (int)(*x)->value);
	else if ((*x)->segment == 3 || (*x)->segment == 12)
		ft_printf("{purple}%30d     ", (int)(*x)->value);
	else if ((*x)->segment == 2 || (*x)->segment == 13)
		ft_printf("{blue}%30d     ", (int)(*x)->value);
	else
		ft_printf("%30d     ", (int)(*x)->value);
	(*x) = (*x)->next;
}

void	print_value_3(t_data *d, t_stack **x)
{
	if ((*x)->segment == 0)
		ft_printf("{green}%30d     ", (int)(*x)->value);
	else if ((*x)->segment == 1)
		ft_printf("{yellow}%30d     ", (int)(*x)->value);
	else if ((*x)->segment == 2)
		ft_printf("{red}%30d     ", (int)(*x)->value);
	else
		ft_printf("{blue}%30d     ", (int)(*x)->value);
	(*x) = (*x)->next;
}
