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

	 // * * * * * Testing * * * * * Delete in the end * * * * *
	ft_printf("{yellow} * * * * * * * * * * Start testing * * * * * * * * * *\n");
	print_stacks(data, &a, &b);
	swap_a(data, &a);
	print_stacks(data, &a, &b);
	push_b(data, &a, &b);
	print_stacks(data, &a, &b);
	push_a(data, &a, &b);
	push_a(data, &a, &b);
	push_a(data, &a, &b);
	print_stacks(data, &a, &b);
	push_b(data, &a, &b);
	push_b(data, &a, &b);
	push_b(data, &a, &b);
	print_stacks(data, &a, &b);
	swap_b(data, &b);
	print_stacks(data, &a, &b);
	swap_both(data, &a, &b);
	print_stacks(data, &a, &b);
	rotate_a(data, &a);
	print_stacks(data, &a, &b);
	rotate_b(data, &b);
	print_stacks(data, &a, &b);
	rotate_both(data, &a, &b);
	print_stacks(data, &a, &b);


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

void	format_structs(t_data *d, t_stack **a)
{
	d->head_a = *a;
	d->head_b = NULL;
	(*a)->value = '\0';
	(*a)->next = NULL;
	//(*b)->value = '\0';
	//(*b)->next = NULL;
}

void	print_stacks(t_data *d, t_stack **a, t_stack **b) // Delete in the end
{
	*a = d->head_a;
	*b = d->head_b;
	int a_end = 0;
	int b_end = 0;

	if (d->head_a != NULL)
		ft_printf("{blue}Heads: %8d", d->head_a->value);
	else
		ft_printf("{blue}Heads: %8s", "");
	if (d->head_b != NULL)
		ft_printf("{blue}%15d\n",d->head_b->value);
	else
		ft_printf("\n");
	while (a_end == 0 | b_end == 0)
	{
		if (d->head_a != NULL && (*a)->value != '\0' && a_end == 0)
			ft_printf("{green}%15d", (*a)->value);
		else
			ft_printf("%15s", "");
		if (d->head_b != NULL && (*b)->value != '\0' && b_end == 0)
			ft_printf("{yellow}%15d", (*b)->value);
		if (d->head_a != NULL && (*a)->next)
			*a = (*a)->next;
		else
			a_end = 1;
		if (d->head_b != NULL && (*b)->next)
			*b = (*b)->next;
		else
			b_end = 1;
		ft_printf("\n");
	}
	ft_printf("{green}%15s", "_");
	ft_printf("{yellow}%15s\n", "_");
	ft_printf("{green}%15s", "a");
	ft_printf("{yellow}%15s\n", "b");
}