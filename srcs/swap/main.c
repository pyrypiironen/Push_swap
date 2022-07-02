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
	b = (t_stack *)malloc(sizeof(t_stack));
	if (data == NULL | a == NULL | b == NULL)
		ps_error(data);
	if (argc == 1)
	{
		ft_printf("usage: ./push_swap <The 'stack a' formatted as a list of \
integers>\n");
		return (0);
	}
	format_structs(data, &a, &b);
	check_flags(argv, data, argc);
	read_input(argv, data, a);
	print_stacks(data, &a, &b); // Delete in the end
	return (0);
}

void	ps_error(t_data	*d)
{
	ft_printf("Error\n");
	//free memory
	d->visual = 100;// (this line is for silence the error message)
	exit(-1);
}

void	format_structs(t_data *d, t_stack **a, t_stack **b)
{
	d->head_a = *a;
	d->head_b = *b;
	(*a)->value = '\0';
	(*a)->next = NULL;
	(*b)->value = '\0';
	(*b)->next = NULL;
}

void	print_stacks(t_data *d, t_stack **a, t_stack **b) // Delete in the end
{
	*a = d->head_a;
	*b = d->head_b;
	int a_end = 0;
	int b_end = 0;

	while (a_end == 0 | b_end == 0)
	{
		if ((*a)->value != '\0')
			ft_printf("{green}%15d", (*a)->value);
		if ((*b)->value != '\0')
			ft_printf("{yellow}%15d", (*b)->value);
		if ((*a)->next)
			*a = (*a)->next;
		else
			a_end = 1;
		if ((*b)->next)
			*b = (*b)->next;
		else
			b_end = 1;
		ft_printf("\n");
	}
	ft_printf("{green}%15s", "-");
	ft_printf("{yellow}%15s\n", "-");
	ft_printf("{green}%15s", "a");
	ft_printf("{yellow}%15s\n", "b");
}