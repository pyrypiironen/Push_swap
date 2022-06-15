/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:47:06 by ppiirone          #+#    #+#             */
/*   Updated: 2022/06/15 17:47:07 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../includes/push_swap.h"

void	read_input(int argc, char **argv)//no no
{
	if (argc == 1)
		error();

	
}


void	error();
{
	ft_printf("Error\n");
	//free memory
	exit(-1);
}

void	check_flags(char **argv)
{
	if (ft_strcmp(argv[1], "-v") == 0)
		flag->v= 1;
	else if (ft_strcmp(argv[1]. "-c") == 0)
		flag->c = 1;
	if (flag->v == 1 | flag->c == 1)
	{
		if (ft_strcmp(argv[2], "-v") == 0)
			flag->v = 1;
		else if (ft_strcmp(argv[2]. "-c") == 0)
			flag->c = 1;
	}
}