/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:53:45 by ppiirone          #+#    #+#             */
/*   Updated: 2022/06/15 18:53:46 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_data	*data;
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (0);
	data = (t_data *)malloc(sizeof(t_data));
	a = (t_stack *)malloc(sizeof(t_stack));
	b = NULL;
	if (data == NULL || a == NULL)
		ps_error(data);
	data->pw = 1;
	format_structs(data, &a);
	check_flags(argv, data, argc);
	read_input(argv, data, a);
	set_sequence(data, &a);
	solver(data, &a, &b);
	free_all(data);
	return (0);
}

