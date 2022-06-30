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

	data = (t_data *)malloc(sizeof(t_data));
	if (data == NULL)
		ps_error(data);
	if (argc == 1)
	{
		ft_printf("usage: ./push_swap <The 'stack a' formatted as a list of \
integers>\n");
		return (0);
	}
	format_struct(data);
	check_flags(argv, data, argc);
	read_input(argv, data);
	print_stack(data); // Delete in the end
	return (0);
}

void	ps_error(t_data	*d)
{
	ft_printf("Error\n");
	//free memory
	d->visual = 100;// (this line is for silence the error message)
	exit(-1);
}

void	format_struct(t_data *d)
{
	d->a = (int *)malloc(sizeof(int) * 501);
	d->b = (int *)malloc(sizeof(int) * 501);
	if (d->a == NULL | d->b == NULL)
		ps_error(d);
	d->a = d->top_a; // Save the head.
	d->pos_a = 0;
}

void	print_stack(t_data *d) // Delete in the end
{
	int i = 0;
	ft_printf("Stack a:\n");
	while (i < 6)
	{	
		ft_printf("i is %d | value %d\n", i, d->a[i]);
		i++;
	}
}