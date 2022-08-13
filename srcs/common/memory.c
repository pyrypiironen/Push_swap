/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:02:13 by ppiirone          #+#    #+#             */
/*   Updated: 2022/08/13 17:02:15 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ps_error(t_data	*d)
{
	ft_printf("Error\n");
	free_all(d);
	exit(0);
}

void	free_all(t_data *d)
{
	t_stack	*tmp;

	if (d->head_a != NULL)
	{
		tmp = d->head_a;
		while (tmp->next != NULL)
		{
			free(tmp);
			tmp = tmp->next;
		}
		free(tmp);
	}
	if (d->head_b != NULL)
	{
		tmp = d->head_b;
		while (tmp->next != NULL)
		{
			free(tmp);
			tmp = tmp->next;
		}
		free(tmp);
	}
	free(d);
}
