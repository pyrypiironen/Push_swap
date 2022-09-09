# include "../../includes/push_swap.h"

void	match_place(t_data *d, t_stack **a, t_stack **b)
{
	if ((distance_to_big(d, b) <= distance_to_small(d, b) && d->way_big == 0) \
	|| (distance_to_big(d, b) >= distance_to_small(d, b) && d->way_small == 0))
		rotate_both(d, a, b);
	else
		rotate_a(d, a);
}

void	smallest_to_head(t_data *d, t_stack **a)
{
	int	dist;
	int	i;

	dist = 0;
	i = 0;
	while ((*a)->smallest != 1)
	{
		*a = (*a)->next;
		dist++;
	}
	while ((*a)->next != NULL)
	{
		*a = (*a)->next;
		i++;
	}
	*a = d->head_a;
	if (dist > i)
		while ((*a)->smallest != 1)
			rev_rotate_a(d, a);
	else
		while ((*a)->smallest != 1)
			rotate_a(d, a);
}
