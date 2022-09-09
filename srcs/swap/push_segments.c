# include "../../includes/push_swap.h"

void	push_segments(t_data *d, t_stack **a, t_stack **b)
{
	*a = d->head_a;
	d->min = (d->segments + 1) / 2 - 2;
	d->max = (d->segments + 1) / 2 + 1;
	while (d->min >= 0 && d->head_a != NULL)
	{
		while (still_left(d) == 1)
		{
			if ((*a)->segment >= d->min && (*a)->segment <= d->max \
				&& (*a)->sequence > 3)
			{
				push_b(d, a, b);
				// Left segments min and max top of the stack b, but rotate
				// another ones to bottom. Also rotate stack a on same move
				// if necessary.
				if ((*b)->segment == d->min + 1 || (*b)->segment == d->max - 1)
				{
					if ((*a)->segment < d->min || (*a)->segment > d->max)
						rotate_both(d, a, b);
					else
						rotate_b(d, b);	
				}
			}
			else
				rotate_a(d, a);
			//ft_printf("{purple}\n(*a)->segment: %6d | d->min: %6d | d->max: %6d\n", (*a)->segment, d->min, d->max);
			//ft_printf("{green}(*a)->sequence: %6d\n", (*a)->sequence);
			
		}
		d->min -= 2;
		d->max += 2;
	}
}

int		still_left(t_data *d)
{
	t_stack	*tmp;

	tmp = d->head_a;
	if (tmp == NULL || tmp->next == NULL || tmp->next->next == NULL \
	|| tmp->next->next->next == NULL)
		return (0);
	while (1)
	{
		if (tmp->segment >= d->min && tmp->segment <= d->max)
			return (1);
		if (tmp->next == NULL)
			break ;
		tmp = tmp->next;
	}
	return (0);
}
