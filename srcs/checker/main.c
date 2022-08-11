
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
	if (data == NULL | a == NULL)
		ps_error(data);
	data->pw = 0;
	format_structs(data, &a);
	check_flags(argv, data, argc);
	read_input(argv, data, a);
	set_sequence(data, &a);
	checker(data, &a, &b);
	if (check_order(data, &a) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");


}

void	checker(t_data *d, t_stack **a, t_stack **b)
{
	int		i;
	char	line[6];
	char	tmp[1];

	i = 0;
	tmp[0] = '\0';
	ft_bzero(line, 6);
	while (read(0, tmp, 1) > 0)
	{
		if (tmp[0] == '\n')
		{
			execute_command(d, a, b, line);
			ft_bzero(line, 6);
			i = 0;
		}
		else
			line[i++] = tmp[0];
		if (i == 5)
		{
			while (read(0, tmp, 1) > 0)
				if (tmp[0] == '\n')
					break ;
			ps_error(d);
		}
	}
}

void	execute_command(t_data *d, t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp(line, "sa") == 0)
		swap_a(d, a);
	else if (ft_strcmp(line, "sb") == 0)
		swap_b(d, b);
	else if (ft_strcmp(line, "ss") == 0)
		swap_both(d, a, b);
	else if (ft_strcmp(line, "pa") == 0)
		push_a(d, a, b);
	else if (ft_strcmp(line, "pb") == 0)
		push_b(d, a, b);
	else if (ft_strcmp(line, "ra") == 0)
		rotate_a(d, a);
	else if (ft_strcmp(line, "rb") == 0)
		rotate_b(d, b);
	else if (ft_strcmp(line, "rr") == 0)
		rotate_both(d, a, b);
	else if (ft_strcmp(line, "rra") == 0)
		rev_rotate_a(d, a);
	else if (ft_strcmp(line, "rrb") == 0)
		rev_rotate_b(d, a);
	else if (ft_strcmp(line, "rrr") == 0)
		rev_rotate_both(d, a, b);
	else
		ps_error(d);
}
