/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:29:07 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/09 16:10:52 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	max_pos(t_push **b, int max_index, int size)
{
	t_push	*p;
	int		index;
	int		found;

	index = 0;
	found = 0;
	p = *b;
	while (p && !found)
	{
		if (p->index == max_index)
			found = 1;
		else
			index++;
		p = p->next;
	}
	if (index < size / 2 + size % 2)
		return (0);
	else
		return (1);
}

int	min_pos(t_push **a, int min, int size)
{
	t_push	*p;
	int		min_index;
	int		found;

	min_index = 0;
	found = 0;
	p = *a;
	while (p != NULL && !found)
	{
		if (p->number == min)
			found = 1;
		else
			min_index++;
		p = p->next;
	}
	if (min_index < size / 2 + size % 2)
		return (0);
	else
		return (1);
}

void	do_sort_pa(t_push **a, t_push **b)
{	
	while ((*b) != NULL)
	{
		if ((*b)->index != maxindex(b) && !max_pos(b, maxindex(b), lst_size(b)))
			rb(b);
		else if ((*b)->index != maxindex(b)
			&& max_pos(b, maxindex(b), lst_size(b)))
			rrb(b);
		else if ((*b)->index == maxindex(b))
			pa(a, b);
	}
}

int	lst_size(t_push **list)
{
	int		i;
	t_push	*temp;

	i = 0;
	temp = *list;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

int	is_sorted(t_push **a)
{
	t_push	*tmp;

	tmp = *a;
	while (tmp->next != NULL)
	{
		if (tmp->number < tmp->next->number)
			tmp = tmp->next;
		else
			return (0);
	}
	return (1);
}
