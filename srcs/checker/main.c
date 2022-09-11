/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:06:55 by ppiirone          #+#    #+#             */
/*   Updated: 2022/09/11 15:06:57 by ppiirone         ###   ########.fr       */
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
	if (data == NULL || a == NULL)
		ps_error(data);
	data->pw = 0;
	format_structs(data, &a);
	check_flags(argv, data, argc);
	read_input(argv, data, a);
	//set_sequence(data, &a);
	checker(data, &a, &b);
	if (check_order(data, &a) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");


}

