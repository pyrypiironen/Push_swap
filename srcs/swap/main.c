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

	data = (t_data *)malloc(sizeof(t_data));
	a = (t_stack *)malloc(sizeof(t_stack));
	//b = (t_stack *)malloc(sizeof(t_stack));
	b = NULL;
	if (data == NULL | a == NULL)// | b == NULL)
		ps_error(data);
	if (argc == 1)
	{
		ft_printf("usage: ./push_swap <The 'stack a' formatted as a list of \
integers>\n");
		return (0);
	}
	format_structs(data, &a);
	check_flags(argv, data, argc);
	read_input(argv, data, a);
	set_sequence(data, &a);
	sort_stack(data, &a, &b);






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
	
	//print_stacks(data, &a, &b);


	// * * * * * Testing ends * * * * *

	return (0);
}

void	ps_error(t_data	*d)
{
	ft_printf("Error\n");
	//free memory
	d->visual = 100;// (this line is for silence the error message)
	exit(-1);
}
