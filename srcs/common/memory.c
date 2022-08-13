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

# include "../../includes/push_swap.h"

void	ps_error(t_data	*d)
{
	ft_printf("Error\n");
	//free memory
	d->visual = 100;// (this line is for silence the error message)
	exit(-1);
}
