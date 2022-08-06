

# include "../../includes/push_swap.h"

void	push_back(t_data *d, t_stack **a, t_stack **b)
{
	d->max = d->total;
	d->min = 4;
	while (d->min <= d->max)
	{
		if (distance_to_big(d, b) <= distance_to_small(d, b))
			seek_big(d, a, b);
		else
			seek_small(d, a, b);
		//print_stacks(d, a, b);
	}
}

void	seek_big(t_data *d, t_stack **a, t_stack **b)
{
	if (d->way_big == 1)
		while ((*b)->sequence != d->max)
			rev_rotate_b(d, b);
	else
		while ((*b)->sequence != d->max)
			rotate_b(d, b);
	push_a(d, a, b);
	d->max--;
}

void	seek_small(t_data *d, t_stack **a, t_stack **b)
{
	if (d->way_small == 1)
		while ((*b)->sequence != d->min)
			rev_rotate_b(d, b);
	else
		while ((*b)->sequence != d->min)
			rotate_b(d, b);
	push_a(d, a, b);
	rotate_a(d, a); //rotate both if something something
	d->min++;
}

int	distance_to_big(t_data *d, t_stack **b)
{
	int	dist;
	int	i;

	dist = 0;
	i = 0;
	while ((*b)->sequence != d->max)
	{
		*b = (*b)->next;
		dist++;
	}
	while ((*b)->next != NULL)
	{
		*b = (*b)->next;
		i++;
	}
	if (dist > i)
	{
		// The way_b indicates shortest way to biggest number
		// (rotate or reverse rotate).
		d->way_big = 1;
		dist = i;
	}
	else
		d->way_big = 0;
	*b = d->head_b;
	return (dist);
}

int	distance_to_small(t_data *d, t_stack **b)
{
	int	dist;
	int	i;

	dist = 0;
	i = 0;
	while ((*b)->sequence != d->min)
	{
		*b = (*b)->next;
		dist++;
	}
	while ((*b)->next != NULL)
	{
		*b = (*b)->next;
		i++;
	}
	if (dist > i)
	{
		d->way_small = 1;
		dist = i;
	}
	else
		d->way_small = 0;
	*b = d->head_b;
	return (dist);
}