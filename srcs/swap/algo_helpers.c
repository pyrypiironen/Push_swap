
# include "../../includes/push_swap.h"

void	solve_two(t_data *d, t_stack **a)
{
	*a = d->head_a;
	if ((*a)->value > (*a)->next->value)
		swap_a(d, a);
}

void	solve_three(t_data *d, t_stack **a)
{
	*a = d->head_a;
	// While values are in right order
	while ((*a)->value > (*a)->next->value || \
		(*a)->next->value > (*a)->next->next->value)
	{
		// If biggest are in the middle
		if ((*a)->value < (*a)->next->value && \
			(*a)->next->value > (*a)->next->next->value)
			rev_rotate_a(d, a);
		// Else if order are middle-min-max.
		else if ((*a)->value > (*a)->next->value && \
			(*a)->value < (*a)->next->next->value && \
			(*a)->next->value < (*a)->next->next->value)
			swap_a(d, a);
		// Else
		else
			rotate_a(d, a);
	}
}

// Same than solve_three, but put numbers order by their sequence numbers.
void	solve_three_sequence(t_data *d, t_stack **a)
{
	*a = d->head_a;
	while ((*a)->sequence > (*a)->next->sequence || \
		(*a)->next->sequence > (*a)->next->next->sequence)
	{
		if ((*a)->sequence < (*a)->next->sequence && \
			(*a)->next->sequence > (*a)->next->next->sequence)
			rev_rotate_a(d, a);
		else if ((*a)->sequence > (*a)->next->sequence && \
			(*a)->sequence < (*a)->next->next->sequence && \
			(*a)->next->sequence < (*a)->next->next->sequence)
			swap_a(d, a);
		else
			rotate_a(d, a);
	}
}

void	match_place(t_data *d, t_stack **a, t_stack **b)
{
	if ((distance_to_big(d, b) <= distance_to_small(d, b) && d->way_big == 0) \
	|| (distance_to_big(d, b) >= distance_to_small(d, b) && d->way_small == 0))
		rotate_both(d, a, b);
	else
		rotate_a(d, a);
}