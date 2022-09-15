




void	print_stacks_32(t_data *d, t_stack **a, t_stack **b, int operation)
{
	// int	a_end;
	// int b_end;

	// a_end = 0;
	// b_end = 0;
	system("clear");
	ft_printf("{yellow}* * * * * * * * * * Visualizer * * * * * * * * *\n");

	while (1)
	{
		if ((*a) != NULL)
		{
			ft_printf("{green}%15d | %15d | %15d | %15d", (*a)->value, (*a)->sequence, (*a)->segment, (*a)->smallest);
			(*a) = (*a)->next;
		}
		else
			ft_printf("%51s", "");
		if ((*b) != NULL)
		{
			ft_printf("{yellow}%15d | %15d | %15d", (*b)->value, (*b)->sequence, (*b)->segment);
			(*b) = (*b)->next;
		}
		ft_printf("\n");

		sleep(1);
	}
	ft_printf("{green}%15s", "_");
	ft_printf("{yellow}%51s\n", "_");
	ft_printf("{green}%15s", "a");
	ft_printf("{yellow}%51s\n", "b");

	
}