/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:28:15 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/09 15:36:14 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_push **list_a)
{
	t_push	*last;
	t_push	*tmp;

	last = *list_a;
	tmp = *list_a;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *list_a;
	*list_a = last;
	tmp->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_push **list_b)
{
	t_push	*last;
	t_push	*tmp;

	last = *list_b;
	tmp = *list_b;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *list_b;
	*list_b = last;
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_push **list_a, t_push **list_b)
{
	rra(list_a);
	rrb(list_b);
	write(1, "rrr\n", 4);
}
