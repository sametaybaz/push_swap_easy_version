/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:27:13 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/09 16:57:33 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_sort_100(t_push **a, t_push **b)
{
	int	i;

	i = 0;
	while ((*a) != NULL)
	{
		if (i >= 1 && (*a)->index < i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index < i + 15)
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->index >= i + 15)
			ra(a);
	}
	do_sort_pa(a, b);
}

void	do_sort_500(t_push **a, t_push **b)
{
	int	i;

	i = 0;
	while ((*a) != NULL)
	{
		if (i >= 1 && (*a)->index < i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index < i + 30)
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->index >= i + 30)
			ra(a);
	}
	do_sort_pa(a, b);
}
