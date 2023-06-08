/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:28:03 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/09 15:09:01 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_push **list_a)
{
	t_push	*last;
	t_push	*first;

	last = *list_a;
	first = *list_a;
	while (last->next != NULL)
		last = last->next;
	*list_a = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "ra\n", 3);
	return ;
}

void	rb(t_push **list_b)
{
	t_push	*last;
	t_push	*first;

	last = *list_b;
	first = *list_b;
	while (last->next != NULL)
		last = last->next;
	*list_b = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "rb\n", 3);
	return ;
}

void	rr(t_push **list_a, t_push **list_b)
{
	ra(list_a);
	rb(list_b);
	write(1, "rrr\n", 4);
}
