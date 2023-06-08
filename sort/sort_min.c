/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:27:26 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/09 16:02:05 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_sort_2(t_push **a)
{
	if ((*a)->next->number < (*a)->number)
		sa(a);
}

void	do_sort_3(t_push **a)
{	
	if ((*a)->number == maxnum(a))
	{
		ra(a);
		if ((*a)->number > (*a)->next->number)
			sa(a);
	}
	else if ((*a)->number == minnum(a) && (*a)->next->number == maxnum(a))
	{
		rra(a);
		sa(a);
	}
	else if ((*a)->number != minnum(a) && (*a)->number > (*a)->next->number)
		sa(a);
	else if ((*a)->number != minnum(a) && (*a)->number < (*a)->next->number)
		rra(a);
}

void	do_sort_5(t_push **a, t_push **b, int size)
{
	int	i;

	i = 0;
	while (i < size / 2 + size % 2)
	{
		if ((*a)->number > minnum(a) && !min_pos(a, minnum(a), lst_size(a)))
			ra(a);
		else if ((*a)->number > minnum(a) && min_pos(a, minnum(a), lst_size(a)))
			rra(a);
		else if ((*a)->number == minnum(a))
		{
			pb(a, b);
			i++;
		}
	}
	if ((*a)->number != minnum(a))
		sa(a);
	while ((*b))
		pa(a, b);
}
