/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:29:59 by ppiirone          #+#    #+#             */
/*   Updated: 2022/08/04 14:30:01 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

void	check_flags(char **argv, t_data *d, int argc)
{
	int	i;
	
	d->visual = 0;
	d->paused = 0;
	d->colors = 0;
	d->sequence = 0;
	i = flag_check(argv, d, 1);
	if (argc > 2 && i == 1)
		i = flag_check(argv, d, 2);
	if (argc > 3 && i == 1)
		i = flag_check(argv, d, 3);
	if (argc > 4 && i == 1)
		flag_check(argv, d, 4);
}

int		flag_check(char **argv, t_data *d, int arg)
{
	if (ft_strcmp(argv[arg], "-v") == 0)
		d->visual = 1;
	else if (ft_strcmp(argv[arg], "-c") == 0)
		d->colors = 1;
	else if (ft_strcmp(argv[arg], "-p") == 0)
		d->paused = 1;
	else if (ft_strcmp(argv[arg], "-s") == 0)
		d->sequence = 1;
	else
		return (0);
	return (1);
}
