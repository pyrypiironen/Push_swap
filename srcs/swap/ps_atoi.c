/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:33:12 by ppiirone          #+#    #+#             */
/*   Updated: 2022/06/15 18:33:14 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

int	ps_atoi(const char *str, t_data *d) // data just for error cases
{
	unsigned long int	res;
	int					sign;

	res = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	// This is protect against false input.
	if (*str < '0' | *str > '9')
		ps_error(d);
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (unsigned long int)*str - '0';
		if (res > 2147483648 && sign < 0)
			ps_error(d);
		if (res > 2147483647 && sign > 0)
			ps_error(d);
		str++;
	}
	return (sign * (int)res);
}
