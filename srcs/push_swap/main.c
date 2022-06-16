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

void	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_flags	*flag;

	if (argc == 1)
	{
		ft_printf("usage: ./push_swap 'The stack a formatted as a list of intregers.'\n");
		return (0);
	}
	check_flags(argv, flag);
	read_input(argv);
}

void	read_input(char **argv)
{
	int	i;

	i = 1;//argv[+]
	if (flag->v == 1)
		i++;
	if (flag->c == 1)
		i++;
	while (argv[i])
	{
		read_arg(argv[i]);
		i++;
	}
}

void	read_arg(char *arg)
{
	int		i;
	int		pos;
	char	*str = "-2147483648 ";

	i = 0;
	pos = 0;
	if (arg[0] == '-')
	{
		str[0] = '-';
		i++;
	}
	while (arg[i] && isdigit(arg[i]) == 1 && pos < 10 )
	{
		str[pos] = arg[i];
		pos++;
		i++;
	}
	str[pos] = '\0';
	add_to_list(str);
	if (arg[i] == '\0')
		return ;
	else if (arg[i] == ' ' && (is_digit(arg[i + 1]) == 1 | arg[i + 1] == '-'));
		i++;
	else
		error();
	read_arg(*(arg + i));
}

void	add_to_list(char *str)
{
	
}
