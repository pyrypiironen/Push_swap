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

void	read_input(char **argv, t_data *d, t_stack *a)
{
	int	i;

	i = 1;
	if (d->visual == 1)
		i++;
	if (d->paused == 1)
		i++;
	if (d->colors == 1)
		i++;
	if (d->sequence == 1)
		i++;
	while (argv[i])
	{
		read_argu(argv[i], d, &a);
		i++;
	}
}

void	read_argu(char *arg, t_data *d, t_stack **a)
{
	int		i;
	char	str[12];

	i = 0;
	if (arg[0] == '-')
		str[i++] = '-';
	// While there is a digit (0 to 9) and value of str can suit as an int,
	// the digit is added to str. It is still possible that str get value over
	// int. Ps_atoi protect against false inputs.
	while (arg[i] && ft_isdigit(arg[i]) == 1 && i < 11 )
	{
		str[i] = arg[i];
		i++;
	}
	str[i] = '\0';
	add_to_stack(str, d, a);
	// If there is null, the original string was valid and function can return.
	if (arg[i] == '\0')
		return ;
	// Else if there is space and the next character is digit
	// or '-' function call itself again with new starting point.
	else if (arg[i] == ' ' && (ft_isdigit(arg[i + 1]) == 1 | arg[i + 1] == '-'))
		i++;
	else
		ps_error(d);
	read_argu((arg + i), d, a);// OR (&arg[i])
}

void	add_to_stack(char str[12], t_data *d, t_stack **a)
{
	t_stack	*tmp;

	tmp = d->head_a;
	if ((*a)->value != '\0')
	{
		(*a)->next = new_node();
		*a = (*a)->next;
	}
	(*a)->value = ps_atoi(str, d);
	(*a)->next = NULL;
	//Check that there is no duplicate to new value.
	while (tmp != *a)
	{
		if (tmp->value == (*a)->value)
			ps_error(d);
		tmp = tmp->next;
	}
}

t_stack	*new_node()
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		exit(-1); // Check this once more
	new->value = '\0';
	new->next = NULL;
	new->sequence = 1;
	return (new);
}