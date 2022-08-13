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
		if (data == NULL)
			exit(0);
	a = (t_stack *)malloc(sizeof(t_stack));
	if (a == NULL)
	{
		free(data);
		exit(0);
	}
	b = NULL;
	data->pw = 1;
	format_structs(data, &a);
	check_flags(argv, data, argc);
	read_input(argv, data, a);
	set_sequence(data, &a);
	solver(data, &a, &b);


	print_stacks(data, &a, &b);



	 // * * * * * Testing * * * * * Delete in the end * * * * *
	// print_stacks(data, &a, &b);
	// swap_a(data, &a);
	// print_stacks(data, &a, &b);
	// push_b(data, &a, &b);
	// print_stacks(data, &a, &b);
	// push_a(data, &a, &b);
	// push_a(data, &a, &b);
	// push_a(data, &a, &b);
	// print_stacks(data, &a, &b);
	// push_b(data, &a, &b);
	// push_b(data, &a, &b);
	// push_b(data, &a, &b);
	// print_stacks(data, &a, &b);
	// swap_b(data, &b);
	// print_stacks(data, &a, &b);
	// swap_both(data, &a, &b);
	// print_stacks(data, &a, &b);
	// rotate_a(data, &a);
	// print_stacks(data, &a, &b);
	// rotate_b(data, &b);
	// print_stacks(data, &a, &b);
	// rotate_both(data, &a, &b);
	// print_stacks(data, &a, &b);
	// rev_rotate_a(data, &a);
	// print_stacks(data, &a, &b);
	// rev_rotate_b(data, &b);
	// print_stacks(data, &a, &b);
	// rev_rotate_both(data, &a, &b);
	



	// * * * * * Testing ends * * * * *

	free_all(data);
	return (0);
}

